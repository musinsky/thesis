// Author: Jan Musinsky
// 15/02/2010

void multi_res()
{
  gROOT->LoadMacro("$ROOTSYS/macros/printTeX.C");
  gROOT->LoadMacro("GetHisto.C");
  TH2F *h0 = (TH2F *)GetHisto("multi_res_OK_orig.C","multi_1_time_res");
  TH2F *h4 = (TH2F *)GetHisto("multi_res_OK_final2_orig.C","multi_10_time_res");
  DoIt(h0, "multi_iter0");
  DoIt(h4, "multi_iter4");
}

void DoIt(TH2F *h, const char *name)
{
  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(0);
  gStyle->SetOptFit(0);

  h->GetXaxis()->SetTitle("tdc, #times10^{-1} ns");
  h->GetXaxis()->SetTitleSize(0.05); h->GetXaxis()->SetTitleOffset(0.94);
  h->GetXaxis()->SetNdivisions(410); h->GetXaxis()->SetLabelSize(0.05);
  h->GetYaxis()->SetTitle("#Deltar, cm"); h->GetYaxis()->CenterTitle();
  h->GetYaxis()->SetTitleSize(0.05); h->GetYaxis()->SetTitleOffset(0.70);
  h->GetYaxis()->SetNdivisions(308); h->GetYaxis()->SetLabelSize(0.05);

  TH1D *proj = 0;
  TF1 *gaus = gROOT->GetFunction("gaus");
  TGraph *iter = new TGraph();
  for (Int_t ib = 1; ib < (h->GetXaxis()->GetNbins()-2); ib++) {
    proj = h->ProjectionY("proj", ib, ib);
    proj->Fit(gaus, "Q0", "", -0.03, 0.03);
    iter->SetPoint(ib-1, h->GetBinCenter(ib), gaus->GetParameter(1));
  }

  c = new TCanvas; c->SetWindowSize(700, 375); c->SetGrid();
  c->SetLeftMargin(0.065); c->SetRightMargin(0.006);
  h->GetYaxis()->SetRangeUser(-0.04,0.04);
  h->Draw("box");
  iter->SetMarkerColor(kWhite);
  iter->Draw("P,same");
  TF1 *pol5 = gROOT->GetFunction("pol5"); pol5->SetLineWidth(2);
  iter->Fit("pol5", "Q", "", 0, 4550);
  TLatex t; t.SetTextAlign(22); t.SetTextSize(0.05); t.SetTextAngle(90);
  if (strstr(name,"4")) t.DrawLatex(5350, 0, "i t e r    4");
  else t.DrawLatex(5350, 0, "i t e r    0");

  printTeX(name);
}
