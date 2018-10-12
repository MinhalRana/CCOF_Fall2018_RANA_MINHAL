#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofEnableSmoothing();
    ofSetCircleResolution(50);
    
    radius = 100;
    
    for(int i = 0; i < SEGMENT; i++){
        
        // 360/SEGMENT - 90
        float angle = ofDegToRad((360/SEGMENT) * i);
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        
        Attractor a;
        a.setup(ofPoint(
                        ofGetWindowWidth()/2 + x, ofGetWindowHeight()/2 + y
                        ),
                radius,
                angle,
                0.01);
        attractors.push_back(a);
    }
    
    for (int i = 0; i<TOTALNUM;i++){
        particle p;
        p.init(ofPoint(
                       ofGetWindowWidth()/2, ofGetWindowHeight()/2
                       ));
        particles.push_back(p);
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    if(rPct > 1){
        rPct =1;
        rPctVel *=-1;
    }
    
    if(rPct < 0) {
        rPct = 0;
        rPctVel *= -1;
    }
    rMin = 5;
    rMax = 200;
    
    rPct +=rPctVel;
    float rPctOut = powf(rPct,3);
    radius = (1-rPctOut)* rMin + rPctOut * rMax;
    for(int i = 0 ; i<attractors.size();i++){
        attractors[i].update(radius);
    }
    
    cout<< particles.size()<< endl;
    
    for (int i = 0; i<particles.size();i++){
        particles[i].updateParticle(attractors[i % SEGMENT].pos);
        
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0 ; i<attractors.size();i++){
        attractors[i].draw();
    }
    
    for (int i = 0; i<particles.size();i++){
        particles[i % SEGMENT].drawParticle();
    }
}
