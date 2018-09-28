#include "ofApp.h"


//--------------------------------------------------------------
//SKETCH TITTLE = generative art interface by Minhal Rana
//OF Creative Coding Elective fall 2018

void ofApp::setup(){
    //set base background
    ofSetBackgroundColor(0);
    ofSetBackgroundAuto(false);
    
    
    
    
    //add this listner before setting up so the initial circle resolution in correct
    
    circleResolution.addListener(this, &ofApp::circleResolutionChanged);
    
    
   
    
    ofSetBackgroundColor(0);
    origin =ofPoint(0,0,0);
  
    
    objectPos =origin;
    
    
    //set up my gui
    gui.setup();
    //defining each element in my userface pannel
    gui.add(sinParam.set("sin",0.0,0.0,300.0));
    gui.add(cosParam.set("cos",0.0,0.0,300.0));
    
    
    gui.add(radius.setup("radius",60,0,300));
    
    gui.add(circleResolution.setup("circle res", 5, 3, 90));
    
    
    gui.add(red.setup("red",0,0,255));
    gui.add(green.setup("green",60,0,255));
    gui.add(blue.setup("blue",255,0,255));
    gui.add(alpha.setup("Transparency", 0, 0, 180));
   
   
    
}

//--------------------------------------------------------------
void ofApp::circleResolutionChanged(int &circleResolution){
    ofSetCircleResolution(circleResolution);
}

//--------------------------------------------------------------
void ofApp::update(){
    ofSetCircleResolution(circleResolution);
    
    sine = sin(ofGetElapsedTimef()*2.0)*sinParam;
    cose = cos(ofGetElapsedTimef()*2.0)*cosParam;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(red, green, blue, alpha);
    ofNoFill();
    gui.draw();
    ofPushMatrix();
    ofTranslate(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    ofDrawCircle(sine,cose, 30);
    ofDrawCircle(-sine,-cose, 30);
    ofDrawCircle(-sine,-cose*0.5, radius);
    ofDrawCircle(-sine*0.5,-cose, 60);
    
    ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}

