// Author: Jan Musinsky
// 15/02/2010

void tdc_t2r()
{
  gROOT->LoadMacro("$ROOTSYS/macros/printTeX.C");
  gROOT->LoadMacro("GetHisto.C");
  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(0);
  gStyle->SetOptFit(0);

  TH1F *h = (TH1F *)GetHisto("tdc_orig.C", "tube_1168_time");
  h->Rebin(); h->SetTitle(0); h->SetFillColor(0);
  h->GetXaxis()->SetTitle("tdc, #times10^{-1} ns");
  h->GetXaxis()->SetNdivisions(310);
  h->GetYaxis()->SetTitle("N"); h->GetYaxis()->CenterTitle();
  h->GetYaxis()->SetTitleOffset(1.25); h->GetYaxis()->SetNdivisions(406);
  fun = new TF1("fun", "[2]+[3]*TMath::Erfc((x-[0])/([1]*TMath::Sqrt2()))");
  fun->SetParameters(4000, 0, 0, 0); fun->SetLineWidth(2);
  h->Fit(fun, "Q0", "", 3500, 4300); h->Fit(fun, "Q", "", 3500, 4300);
  fun->SetParameters(8500, 0, 0, 0); fun->SetParLimits(1, -1000, -50);
  h->Fit(fun, "Q0+", "", 7500, 9700); h->Fit(fun, "Q+", "", 7500, 9700);

  Double_t min = 3970, max = 8600, hmax = h->GetMaximum();
  TLine l; l.SetLineStyle(3);
  l.DrawLine(min, 0, min, h->GetBinContent(h->FindBin(min)));
  l.DrawLine(max, 0, max, h->GetBinContent(h->FindBin(max)));
  TArrow a; a.SetAngle(33);
  TLatex t; t.SetTextAlign(21); t.SetTextSize(0.035);
  a.DrawArrow(min, hmax*0.10, max, hmax*0.10, 0.03, "<||>");
  t.DrawLatex(min+(max-min)/2.0, hmax*0.11, "full TDC ~ 450 ns");
  a.DrawArrow(1700, hmax*0.20, min, 0, 0.03,">");
  t.DrawLatex(1700, hmax*0.21, "T_{min}= p[0] + p[1]");
  a.DrawArrow(10750, hmax*0.20, max, 0, 0.03,">");
  t.DrawLatex(10750, hmax*0.21, "T_{max}= p[0]");
  a.DrawArrow(max, hmax*0.80, max, hmax*0.65, 0.02,">");
  t.DrawLatex(max, hmax*0.82, "p[0]");
  a.DrawArrow(max-500, hmax*0.40, max+500, hmax*0.40, 0.02,"<>");
  t.SetTextAlign(12);
  t.DrawLatex(max+600, hmax*0.40, "p[1]");
  printTeX("tdc");

  hi = new TH1F("hi", "", h->GetXaxis()->GetNbins(),
                h->GetXaxis()->GetXmin(), h->GetXaxis()->GetXmax());
  hi->SetMinimum(0);
  hi->GetXaxis()->SetTitle("tdc, #times10^{-1} ns");
  hi->GetXaxis()->SetNdivisions(310); hi->GetXaxis()->SetTitleOffset(0.90);
  hi->GetXaxis()->SetTitleSize(0.05); hi->GetXaxis()->SetLabelSize(0.05);
  hi->GetYaxis()->SetTitle("#int #frac{dN}{dt'} dt'");
  hi->GetYaxis()->CenterTitle();
  hi->GetYaxis()->SetTitleOffset(1.25); hi->GetYaxis()->SetNdivisions(409);
  hi->GetYaxis()->SetTitleSize(0.05); hi->GetYaxis()->SetLabelSize(0.05);
  Double_t sum = 0;
  for (Int_t ib = 1; ib <= h->GetXaxis()->GetNbins(); ib++) {
    sum += h->GetBinContent(ib);
    hi->SetBinContent(ib, sum);
  }
  c = new TCanvas; c->SetWindowSize(700,375);
  Double_t margin = 0.14;
  c->SetLeftMargin(margin);
  hi->Draw();
  l.DrawLine(min, 0, min, hi->GetMaximum()*1.05);
  l.DrawLine(max, 0, max, hi->GetMaximum()*1.05);
  printTeX("t2r_t");

  TH1F *hr = (TH1F *)GetHisto("t2r_orig.C", "tube_1162_radius");
  hr->SetTitle(0); hr->SetFillColor(0); hr->SetMinimum(0);
  hr->GetXaxis()->SetTitle("r, cm");
  hr->GetXaxis()->SetNdivisions(509); hr->GetXaxis()->SetTitleOffset(0.90);
  hr->GetXaxis()->SetTitleSize(0.05); hr->GetXaxis()->SetLabelSize(0.05);
  hr->GetYaxis()->SetTitle("entries"); hr->GetYaxis()->CenterTitle();
  hr->GetYaxis()->SetTitleOffset(1.25); hr->GetYaxis()->SetNdivisions(305);
  hr->GetYaxis()->SetTitleSize(0.05); hr->GetYaxis()->SetLabelSize(0.05);
  for (Int_t ib = 1; ib <= hr->GetXaxis()->GetNbins(); ib++)
    hr->SetBinContent(ib, hr->GetBinContent(ib)*37);
  c = new TCanvas; c->SetWindowSize(700,375);
  c->SetLeftMargin(margin);
  hr->Draw();
  printTeX("t2r_r");
}
