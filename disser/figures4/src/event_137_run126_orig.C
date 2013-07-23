{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Feb  9 18:16:51 2010) by ROOT version5.26/00b
   TCanvas *c1 = new TCanvas("c1", "c1",355,73,570,832);
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
//Primitive: tracker_1/tracker from straw tubes. You must implement TStrawTracker::SavePrimitive
   
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
   TLine *line = new TLine(-2.58,-1.60897,10.38,-1.572134);
   line->SetLineWidth(2);
   line->Draw();
   pad->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
