{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Feb  9 17:55:59 2010) by ROOT version5.26/00b
   TCanvas *c1 = new TCanvas("c1", "c1",351,49,570,832);
   gStyle->SetOptFit(1);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad
   TPad *pad = new TPad("pad", "Detectors display",0,-0,0.9968553,1);
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
   
   ellipse = new TEllipse(5.2,-2.1,0.5314363,0.5314363,0,360,0);
   ellipse->SetFillStyle(0);
   ellipse->SetLineWidth(2);
   ellipse->Draw();
   
   ellipse = new TEllipse(7.8,0,0.8018571,0.8018571,0,360,0);
   ellipse->SetFillStyle(0);
   ellipse->SetLineWidth(2);
   ellipse->Draw();
   
   ellipse = new TEllipse(7.8,0,1.307168,1.307168,0,360,0);
   ellipse->SetFillStyle(0);
   ellipse->SetLineWidth(2);
   ellipse->Draw();
   
   ellipse = new TEllipse(5.2,2.1,0.8096963,0.8096963,0,360,0);
   ellipse->SetFillStyle(0);
   ellipse->SetLineWidth(2);
   ellipse->Draw();
   
   ellipse = new TEllipse(7.8,0,1.63779,1.63779,0,360,0);
   ellipse->SetFillStyle(0);
   ellipse->SetLineWidth(2);
   ellipse->Draw();
   
   ellipse = new TEllipse(0,-2.1,0.949317,0.949317,0,360,0);
   ellipse->SetFillStyle(0);
   ellipse->SetLineWidth(2);
   ellipse->Draw();
   
   ellipse = new TEllipse(2.6,0,0.3919501,0.3919501,0,360,0);
   ellipse->SetFillStyle(0);
   ellipse->SetLineWidth(2);
   ellipse->Draw();
   
   ellipse = new TEllipse(0,2.1,0.8503996,0.8503996,0,360,0);
   ellipse->SetFillStyle(0);
   ellipse->SetLineWidth(2);
   ellipse->Draw();
   
   ellipse = new TEllipse(2.6,0,1.312737,1.312737,0,360,0);
   ellipse->SetFillStyle(0);
   ellipse->SetLineWidth(2);
   ellipse->Draw();
   TLine *line = new TLine(-2.58,-3.645838,10.38,-0.7656957);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.58,-1.922821,10.38,2.190217);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.58,-4.77892,10.38,3.097678);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.58,-1.09858,10.38,-1.359343);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.58,2.058006,10.38,-2.230636);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.58,3.509098,10.38,0.7952651);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.58,4.610973,10.38,-3.041424);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.54233,1.250145,10.31642,1.362771);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.58,-3.527746,10.38,-1.200733);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.58,-2.02692,10.38,2.679324);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.58,-4.965485,10.38,3.693486);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.58,-0.9856601,10.35972,-1.858324);
   line->SetLineWidth(2);
   line->Draw();
   pad->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
