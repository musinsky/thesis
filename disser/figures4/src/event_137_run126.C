  {
    //=========Macro generated from canvas: c1/c1
    //=========  (Thu Feb 11 13:36:46 2010) by ROOT version5.26/00b
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
    TMarker *marker = new TMarker(2.6,4.2,7);
    marker->SetMarkerStyle(7);
    marker->Draw();

    ellipse = new TEllipse(2.6,0,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();
    marker = new TMarker(2.6,0,7);
    marker->SetMarkerStyle(7);
    marker->Draw();

    ellipse = new TEllipse(2.6,-4.2,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();
    marker = new TMarker(2.6,-4.2,7);
    marker->SetMarkerStyle(7);
    marker->Draw();

    ellipse = new TEllipse(0,6.3,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();
    marker = new TMarker(0,6.3,7);
    marker->SetMarkerStyle(7);
    marker->Draw();

    ellipse = new TEllipse(0,2.1,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();
    marker = new TMarker(0,2.1,7);
    marker->SetMarkerStyle(7);
    marker->Draw();

    ellipse = new TEllipse(0,-2.1,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();
    marker = new TMarker(0,-2.1,7);
    marker->SetMarkerStyle(7);
    marker->Draw();

    ellipse = new TEllipse(0,-6.3,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();
    marker = new TMarker(0,-6.3,7);
    marker->SetMarkerStyle(7);
    marker->Draw();

    ellipse = new TEllipse(7.8,4.2,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();
    marker = new TMarker(7.8,4.2,7);
    marker->SetMarkerStyle(7);
    marker->Draw();

    ellipse = new TEllipse(7.8,0,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();
    marker = new TMarker(7.8,0,7);
    marker->SetMarkerStyle(7);
    marker->Draw();

    ellipse = new TEllipse(7.8,-4.2,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();
    marker = new TMarker(7.8,-4.2,7);
    marker->SetMarkerStyle(7);
    marker->Draw();

    ellipse = new TEllipse(5.2,6.3,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();
    marker = new TMarker(5.2,6.3,7);
    marker->SetMarkerStyle(7);
    marker->Draw();

    ellipse = new TEllipse(5.2,2.1,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();
    marker = new TMarker(5.2,2.1,7);
    marker->SetMarkerStyle(7);
    marker->Draw();

    ellipse = new TEllipse(5.2,-2.1,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();
    marker = new TMarker(5.2,-2.1,7);
    marker->SetMarkerStyle(7);
    marker->Draw();

    ellipse = new TEllipse(5.2,-6.3,2.1,2.1,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineStyle(3);
    ellipse->Draw();
    marker = new TMarker(5.2,-6.3,7);
    marker->SetMarkerStyle(7);
    marker->Draw();

    ellipse = new TEllipse(5.2,-2.1,0.6201372,0.6201372,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineWidth(2);
    ellipse->Draw();

    ellipse = new TEllipse(7.8,0,1.615823,1.615823,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineWidth(2);
    ellipse->Draw();

    ellipse = new TEllipse(0,-2.1,0.5322826,0.5322826,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineWidth(2);
    ellipse->Draw();

    ellipse = new TEllipse(2.6,0,1.698797,1.698797,0,360,0);
    ellipse->SetFillStyle(0);
    ellipse->SetLineWidth(2);
    ellipse->Draw();
    TLine *line = new TLine(-2.587633,-1.573433,10.34311,-1.58597);
    line->SetLineWidth(2);
    line->Draw();
    TLatex *   tex = new TLatex(-1.239223,-1.422985,"X = aZ + b");
    tex->SetTextAlign(22);
    tex->SetTextSize(0.02);
    tex->SetLineWidth(2);
    tex->Draw();
    tex = new TLatex(0.007420495,-2.300597,"[z_{i}, x_{i}]");
    tex->SetTextAlign(22);
    tex->SetTextSize(0.02);
    tex->SetLineWidth(2);
    tex->Draw();
    line = new TLine(2.621555,-1.573433,2.564311,1.698806);
    line->SetLineStyle(2);
    line->Draw();
    line = new TLine(2.596113,-4.262686e-09,2.621555,-1.573433);
    line->Draw();
    marker = new TMarker(2.621555,-1.705,5);
    marker->SetMarkerStyle(5);
    marker->SetMarkerSize(0.7);
    marker->Draw();
    TArrow *arrow = new TArrow(2.437102,-2.927463,2.602473,-1.792836,0.01,">");
    arrow->SetFillColor(1);
    arrow->SetFillStyle(1001);
    arrow->SetAngle(33);
    arrow->Draw();
    tex = new TLatex(2.424382,-3.134328,"[Z_{i}, X_{i}]");
    tex->SetTextAlign(22);
    tex->SetTextSize(0.02);
    tex->SetLineWidth(2);
    tex->Draw();
    tex = new TLatex(2.85,0.8964179,"r(t)");
    tex->SetTextAlign(22);
    tex->SetTextSize(0.02);
    tex->SetTextAngle(2);
    tex->SetLineWidth(2);
    tex->Draw();
    tex = new TLatex(2.35,0.7710448,"S_{i} = -1");
    tex->SetTextAlign(22);
    tex->SetTextSize(0.02);
    tex->SetTextAngle(92);
    tex->SetLineWidth(2);
    tex->Draw();
    tex = new TLatex(2.35,-0.7459702,"S_{i} = +1");
    tex->SetTextAlign(22);
    tex->SetTextSize(0.02);
    tex->SetTextAngle(92);
    tex->SetLineWidth(2);
    tex->Draw();
    tex = new TLatex(2.83,-0.7334328,"D_{i}");
    tex->SetTextAlign(22);
    tex->SetTextSize(0.02);
    tex->SetTextAngle(2);
    tex->SetLineWidth(2);
    tex->Draw();
//    line = new TLine(5.184806,-1.58597,5.184806,-1.475);
//    line->Draw();
//    tex = new TLatex(5.5,-1.310149,"#Deltar");
//    tex->SetTextAlign(22);
//    tex->SetTextSize(0.02);
//    tex->SetLineWidth(2);
//    tex->Draw();
    tex = new TLatex(9.60,-1.75,"track");
    tex->SetTextAlign(22);
    tex->SetTextSize(0.02);
    tex->SetLineWidth(2);
    tex->Draw();
    TArrow *arrow = new TArrow(-2.0,-0.2,0.0,-0.2,0.015,"|>");
    arrow->SetFillColor(1);
    arrow->SetAngle(33);
    arrow->Draw();
    TArrow *arrow = new TArrow(-1.7,-0.5,-1.7,1.0,0.015,"|>");
    arrow->SetFillColor(1);
    arrow->SetAngle(33);
    arrow->Draw();
    tex = new TLatex(0.2,-0.19,"z");
    tex->SetTextAlign(22);
    tex->SetTextSize(0.02);
    tex->Draw();
    tex = new TLatex(-1.68,1.2,"x");
    tex->SetTextAlign(22);
    tex->SetTextSize(0.02);
    tex->Draw();
    pad->Modified();
    c1->cd();
    c1->Modified();
    c1->cd();
    c1->SetSelected(c1);

    gROOT->SetStyle("Plain");
    gROOT->LoadMacro("$ROOTSYS/macros/printTeX.C");
    printTeX("event_137_run126_full");
    gSystem->Exec("pdfcrop --margins '-17 -235 -15 -160' event_137_run126_full.pdf event_137_run126_crop.pdf");
    gSystem->Exec("pdfcrop --margins '5 20 5 15' event_137_run126_crop.pdf event_137_run126.pdf");
    Printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
    Printf("$(ROOTSYS)/graf2d/graf/src/TEllipse.cxx");
    Printf("void TEllipse::PaintEllipse()");
    Printf("const Int_t np = 200*10;");
    Printf("!!! recompile ROOT !!!");
    Printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    Printf("c1->SetCanvasSize(566*4,806*4)");
  }
