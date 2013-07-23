  {
    //=========Macro generated from canvas: c1/c1
    //=========  (Thu Feb 11 14:31:15 2010) by ROOT version5.26/00b
    TCanvas *c1 = new TCanvas("c1", "c1",0,0,566,806);
    gStyle->SetOptFit(1);
    c1->Range(0,0,1,1);
    c1->SetFillColor(0);
    c1->SetBorderMode(0);
    c1->SetBorderSize(2);
    c1->SetFrameBorderMode(0);

    // ------------>Primitives in pad: pad
    TPad *pad = new TPad("pad", "Detectors display",0,0.00248139,1,1);
    pad->Draw();
    pad->cd();
    pad->Range(-3.3,-10.08,11.1,10.08);
    pad->SetFillColor(0);
    pad->SetBorderMode(0);
    pad->SetBorderSize(2);
    pad->SetFrameBorderMode(0);

    TEllipse *ellipse = new TEllipse(2.6,4.2,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();

    ellipse = new TEllipse(2.6,0,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();

    ellipse = new TEllipse(2.6,-4.2,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();

    ellipse = new TEllipse(0,6.3,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();

    ellipse = new TEllipse(0,2.1,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();

    ellipse = new TEllipse(0,-2.1,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();

    ellipse = new TEllipse(0,-6.3,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();

    ellipse = new TEllipse(7.8,4.2,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();

    ellipse = new TEllipse(7.8,0,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();

    ellipse = new TEllipse(7.8,-4.2,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();

    ellipse = new TEllipse(5.2,6.3,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();

    ellipse = new TEllipse(5.2,2.1,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();

    ellipse = new TEllipse(5.2,-2.1,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();

    ellipse = new TEllipse(5.2,-6.3,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();

    ellipse = new TEllipse(5.2,2.1,1.772839,1.772839,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineWidth(2);
    ellipse->Draw();

    ellipse = new TEllipse(7.8,0,0.3513485,0.3513485,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineWidth(2);
    ellipse->Draw();

    ellipse = new TEllipse(0,2.1,1.785906,1.785906,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineWidth(2);
    ellipse->Draw();

    ellipse = new TEllipse(2.6,0,0.3384557,0.3384557,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineWidth(2);
    ellipse->Draw();
    TLine *line = new TLine(-2.58,0.5261165,10.38,-0.5710158);
    line->SetLineStyle(2);
    line->SetLineWidth(2);
    line->Draw();
    line = new TLine(-2.58,5.294806,10.38,-0.8308387);
    line->SetLineStyle(2);
    line->SetLineWidth(2);
    line->Draw();
    line = new TLine(-2.58,0.3017427,10.38,0.3636832);
    line->SetLineStyle(2);
    line->SetLineWidth(2);
    line->Draw();
    line = new TLine(-2.58,5.685144,10.38,-1.921731);
    line->SetLineStyle(2);
    line->SetLineWidth(2);
    line->Draw();
    line = new TLine(-2.58,0.3077338,10.38,0.3577851);
    line->SetLineWidth(3);
    line->Draw();
    TArrow *arrow = new TArrow(8.15,4.05,9.00742,0.3698507,0.02,">");
    arrow->SetFillColor(1);
    arrow->SetFillStyle(1001);
    arrow->SetAngle(33);
    arrow->Draw();
    TLatex *   tex = new TLatex(8.1,4.5,"track-candidate");
    tex->SetTextAlign(22);
    tex->SetTextFont(132);
    tex->SetTextSize(0.055);
    tex->SetLineWidth(2);
    tex->Draw();
    pad->Modified();
    c1->cd();
    c1->Modified();
    c1->cd();
    c1->SetSelected(c1);

    gROOT->SetStyle("Plain");
    gROOT->LoadMacro("$ROOTSYS/macros/printTeX.C");
    printTeX("event_112_run126_full");
    gSystem->Exec("pdfcrop --margins '5 40 5 30' event_112_run126_full.pdf event_112_run126.pdf");
  }
