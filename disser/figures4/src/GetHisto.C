// Author: Jan Musinsky
// 15/02/2010

TH1 *GetHisto(const char *fname, const char *hname)
{
  TH1 *histo = (TH1 *)(gROOT->FindObject(hname));
  if (histo) delete histo;
  gROOT->SetBatch(kTRUE);
  gROOT->ProcessLine(Form(".x %s", fname));
  histo = (TH1 *)(gROOT->FindObject(hname));
  if (!histo) Printf(Form("histogram \"%s\" does not exist", hname));
  delete gROOT->GetListOfCanvases()->Last();
  gROOT->SetBatch(kFALSE);
  return histo;
}
