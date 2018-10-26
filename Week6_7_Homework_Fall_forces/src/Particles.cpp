//
//  Particles.cpp
//  Week6_7_Homework_Fall_forces
//
//  Created by Minhal Rana on 10/26/18.
//

#include "Particles.hpp"
//--------------------------------------------------------------
void Particles::setup(){
    mass = ofRandom(0.01, 0.5);
    loc.set(ofRandomWidth(), ofRandomHeight());
    vel.set(0, 0);
    acc.set(0, 0);
}
//--------------------------------------------------------------
void Particles::applyForce(ofPoint _f){
    acc += _f/mass;
}
//--------------------------------------------------------------
void Particles::addGravityForce(float _g){
    ofPoint gravity;
    gravity.set(0, _g * mass);
    
    applyForce(gravity);
}
//--------------------------------------------------------------
void Particles::update(){
    //checkEdges();
    
    vel += acc;
    loc += vel;
    
    acc.set(0, 0);
}

//--------------------------------------------------------------
void Particles::draw(){
    ofSetColor(173,216,230);
    ofDrawCircle(loc.x, loc.y, mass * 20);
}

//--------------------------------------------------------------
//void Particles::checkEdges(){
//    if(loc.x > ofGetWindowWidth()){
//        loc.x = ofGetWindowWidth();
//        vel.x *= -0.0001;
//    } else if(loc.x < 0){
//        loc.x = 0.0001;
//        vel.x *= -0.0001;
//    }
//
//    if(loc.y > ofGetWindowHeight()){
//        loc.y = ofGetWindowHeight();
//        vel.y *= -0.0001;
//    }
//}
