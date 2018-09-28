#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    
    void circleResolutionChanged(int & circleResolution);

    
    ofParameter<float> sinParam;
    ofParameter<float> cosParam;
    
    float sine;
    float cose;
    
    ofPoint origin;
    
    ofPoint objectPos;
    //stands for percent
    //(0,1)
    
    
    ofxPanel gui;
    ofxIntSlider radius;
    
    ofxIntSlider circleResolution;
    
    ofxIntSlider red;
    ofxIntSlider green;
    ofxIntSlider blue;
    ofxIntSlider alpha;
    
};

