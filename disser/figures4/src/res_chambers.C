// Author: Jan Musinsky
// 18/02/2010

void res_chambers()
{
  gROOT->LoadMacro("$ROOTSYS/macros/printTeX.C");
  gROOT->LoadMacro("GetHisto.C");

  TH1D *hs_0 = (TH1D *)GetHisto("res_small_OK_orig.C", "tra_3_iter1");
  TH1D *hs_4 = (TH1D *)GetHisto("res_small_OK_orig.C", "tra_3_iter4");
  TH1D *hb_0 = (TH1D *)GetHisto("res_big_OK_orig.C", "tra_1_iter1");
  TH1D *hb_4 = (TH1D *)GetHisto("res_big_OK_orig.C", "tra_1_iter4");
  DoIt(hs_0); DoIt(hs_4); DoIt(hb_0); DoIt(hb_4);
  hs_4->SetMaximum(hs_4->GetMaximum()*1.075);
  hb_4->SetMaximum(hb_4->GetMaximum()*1.075);
  TF1 *fit = new TF1("fit", "pol2(0) + gaus(3) + gaus(6)");
  fit->SetLineWidth(2); fit->SetNpx(1000);
  fit->SetParameters(4500, -750, 135000, 70000, 0, 0.01, 35000, 0, 0.02);

  c = new TCanvas("c", "", 0, 0, 700, 750);
  c->Divide(2, 2, 0.005, 0.001);
  Double_t lm = 0.08, rm = 0.04;
  TLatex l; l.SetTextAlign(12);
  TF1 *p0 = gROOT->GetFunction("pol0");
  TPad *pad = 0;
  pad = (TPad *)c->cd(1);
  pad->SetGridx(); pad->SetLeftMargin(lm); pad->SetRightMargin(rm);
  hs_0->Multiply(p0, 1.05);
  hs_0->Draw();
  l.DrawLatex(-0.12, hs_4->GetMaximum()*0.95, "D1, iter 0");
  pad = (TPad *)c->cd(2);
  pad->SetGridx(); pad->SetLeftMargin(lm); pad->SetRightMargin(rm);
  hs_4->Draw(); hs_0->SetMaximum(hs_4->GetMaximum());
  hs_4->Fit(fit, "Q");
  l.DrawLatex(-0.12, hs_4->GetMaximum()*0.95, "D1, iter 4");
  //  l.DrawLatex(0.030, hs_4->GetMaximum()*0.50, "#sigma ~ 102 #mum");
  pl = new TPaveLabel(0.030, hs_4->GetMaximum()*0.45,
                      0.115, hs_4->GetMaximum()*0.55," #sigma ~ 102 #mum");
  pl->SetFillColor(0);
  pl->SetTextSize(0.60);
  pl->SetBorderSize(1);
  pl->Draw();
  pad = (TPad *)c->cd(3);
  pad->SetGridx(); pad->SetLeftMargin(lm); pad->SetRightMargin(rm);
  hb_0->Multiply(p0, 1.15);
  hb_0->Draw();
  l.DrawLatex(-0.12, hb_4->GetMaximum()*0.95, "D6, iter 0");
  pad = (TPad *)c->cd(4);
  pad->SetGridx(); pad->SetLeftMargin(lm); pad->SetRightMargin(rm);
  hb_4->Draw(); hb_0->SetMaximum(hb_4->GetMaximum());
  hb_4->Fit(fit, "Q");
  l.DrawLatex(-0.12, hb_4->GetMaximum()*0.95, "D6, iter 4");
  //  l.DrawLatex(0.030, hb_4->GetMaximum()*0.50, "#sigma ~ 85 #mum");
  pl = new TPaveLabel(0.030, hb_4->GetMaximum()*0.45,
                      0.115, hb_4->GetMaximum()*0.55," #sigma ~ 85 #mum");
  pl->SetFillColor(0);
  pl->SetTextSize(0.60);
  pl->SetBorderSize(1);
  pl->Draw();
  c->cd();
  printTeX("res_chambers");
}

void DoIt(TH1D *h)
{
  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(0);
  gStyle->SetOptFit(0);

  h->SetFillColor(0);
  h->GetXaxis()->SetTitle("#Deltar, cm"); h->GetXaxis()->CenterTitle(kFALSE);
  h->GetXaxis()->SetRangeUser(-0.125, 0.125);
  h->GetXaxis()->SetTitleSize(0.05); h->GetXaxis()->SetTitleOffset(1.00);
  h->GetXaxis()->SetNdivisions(410); h->GetXaxis()->SetLabelSize(0.05);
  //  h->GetYaxis()->SetTitle("entriess"); h->GetYaxis()->CenterTitle();
  h->GetYaxis()->SetTitleSize(0.05); h->GetYaxis()->SetTitleOffset(1.00);
  h->GetYaxis()->SetNdivisions(405); h->GetYaxis()->SetLabelSize(0.05);
  //  TF1 *fit = (TF1 *)h->GetFunction("mdg");
  //  if (fit) {
  //    fit->SetLineWidth(2);
  //    fit->SetLineColor(kBlack);
  //  }
}
