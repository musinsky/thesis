// Author: Jan Musinsky
// 01/10/2009

{
  gROOT->SetStyle("Plain");
  Double_t ratio, sum00 = 0, sum06 = 0;
  Double_t *sc00 = 0, *sc06 = 0;
  Int_t count = 0;
  g = new TGraph();

  for (Int_t run = 50; run < 69; run++) {
    TFile::Open(Form("/free1/data/2003_06/run%03d.root", run));
    db->Draw("sc00:sc06", "", "goff");
    sc00 = db->GetV1();
    sc06 = db->GetV2();

    for (Int_t i = 0; i < db->GetSelectedRows(); i++) {
      sum00 += sc00[i];
      sum06 += sc06[i];
      if (i%2 == 0) {
        if (sum06 > 0) g->SetPoint(count, count++*29, sum00/sum06);
        sum00 = sum06 = 0;
      }
    }
  }

  g->SetMarkerStyle(6);
  g->SetMinimum(2.5);
  g->SetMaximum(8.5);
  g->GetXaxis()->SetTimeDisplay(1);
  g->GetXaxis()->SetTimeFormat("%H:%Mh%F2000-00-00 19:00:00");
  g->GetXaxis()->SetRange(0,2710);
  g->GetXaxis()->SetNdivisions(208);
  g->GetXaxis()->SetTitleOffset(1.25);
  g->GetXaxis()->SetTitle("Time, hours");
  g->GetYaxis()->SetTitleOffset(0.75);
  g->GetYaxis()->CenterTitle();
  g->GetYaxis()->SetTitle("F3 / F5");
  g->GetYaxis()->SetNdivisions(106);
  g->Draw("AP");
  gROOT->LoadMacro("$ROOTSYS/macros/printTeX.C");
  printTeX("beam_intensity");
}
