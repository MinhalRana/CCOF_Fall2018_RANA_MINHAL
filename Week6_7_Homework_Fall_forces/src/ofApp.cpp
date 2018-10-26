#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableSmoothing();
    ofSetCircleResolution(50);
    background.load("long.jpg");
    
    //calling particles as leaves falling
    for(int i = 0; i<TOTALNUM; i++){
        Particles p;
        p.setup();
        particles.push_back(p);
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    ofPoint wind;
    wind.set(0.01, 0);
    
    for(int i = 0; i<TOTALNUM; i++){
        particles[i].applyForce(wind);
        particles[i].addGravityForce(0.001);
         particles[i].applyForce(-0.9*wind);
        
        
        
        particles[i].update();
        
        particles[i].update();
    }


}

//--------------------------------------------------------------
void ofApp::draw(){
    background.draw(0,0,1024,768);

    for(int i = 0; i<TOTALNUM; i++){
        particles[i].draw();
    }

}

