#include "ofApp.h"


//--------------------------------------------------------------
//SKETCH TITTLE = SOLAR SYSTEM by Minhal Rana
//OF Creative Coding Elective fall 2018

void ofApp::setup(){
    //set base background
    ofSetBackgroundColor(0);
    
    //loadbackgroundimage
    image.load("stars.png");
    
    
    //add this listner before setting up so the initial circle resolution in correct
    
    circleResolution.addListener(this, &ofApp::circleResolutionChanged);
    
    ringButton.addListener(this, &ofApp::ringButtonPressed);
    
    //ball to drop like a broken star
    
    ofSetBackgroundColor(0);
    origin =ofPoint(0,0,0);
    dest =ofPoint(ofGetWindowWidth(),
                  ofGetWindowHeight(),0);
    
    objectPos =origin;
    pct =0;
    
    
    //set up my gui
    gui.setup();
    //defining each element in my userface pannel
    gui.add(sinParam.set("sin",0.0,0.0,300.0));
    gui.add(cosParam.set("cos",0.0,0.0,300.0));
    
    gui.add(posX.setup("posX",ofGetWindowWidth()/2,0,600));
    gui.add(posY.setup("posY",ofGetWindowHeight()/2,0,600));
    gui.add(radius.setup("radius",60,0,300));
    
    gui.add(circleResolution.setup("circle res", 5, 3, 90));
    
    
    gui.add(red.setup("red",0,0,255));
    gui.add(green.setup("green",60,0,255));
    gui.add(blue.setup("blue",255,0,255));
    gui.add(alpha.setup("Transparency", 10, 0, 180));
    gui.add(ringButton.setup("sound"));
    
    //load the sound
    sound.load("sound.wav");
    
}

//--------------------------------------------------------------
void ofApp::circleResolutionChanged(int &circleResolution){
    ofSetCircleResolution(circleResolution);
}

//--------------------------------------------------------------
void ofApp::ringButtonPressed(){
    sound.play();
}
//--------------------------------------------------------------
void ofApp::update(){
    ofSetCircleResolution(circleResolution);
    
    sine = sin(ofGetElapsedTimef()*2.0)*sinParam;
    cose = cos(ofGetElapsedTimef()*2.0)*cosParam;

    //move 0.5% more of the whole journey per frame
    pct += 0.002;
    if(pct >1) pct = 0;
    
    //objectPos = (1-pct)*origin+pct*dest;
    
    //powf(float1,float2)
    //float1 : base, x
    //float2:exponent
    
    float pctPowerOutput =powf(pct,5);
    objectPos = (1-pctPowerOutput)* origin +pctPowerOutput*dest;
}

//--------------------------------------------------------------
void ofApp::draw(){
    image.draw(0,0,1024,900);
    ofSetColor(red, green, blue, alpha);
    ofDrawCircle(objectPos, 30);
    ofDrawCircle(ofGetWindowWidth()/2, ofGetWindowHeight()/2, 100);
    ofDrawCircle(posX, posY , radius);
    gui.draw();
    ofPushMatrix();
    ofTranslate(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    ofDrawCircle(sine,cose, 30);
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
