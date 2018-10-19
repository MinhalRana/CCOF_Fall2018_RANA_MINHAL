//
//  Particles.cpp
//  mySketch
//
//  Created by Minhal Rana on 10/19/18.
//

#include "Particles.hpp"
void Particles::setup(){
    mass = 50;
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
void Particles::addDragForce(liquid _l){
    float speed = vel.length();
    float dragMagnitude = _l.c * speed * speed;
    
    ofPoint dragDirection = vel;
    dragDirection *= -3;
    dragDirection.normalize();
    
    ofPoint dragForce = dragMagnitude * dragDirection;
    
    applyForce(dragForce);
}

//--------------------------------------------------------------
bool Particles::insideWater(liquid _l){
    if(loc.x > _l.x
       && loc.x < _l.x + _l.w
       && loc.y > _l.y
       && loc.y < _l.y + _l.h
       )
    {
        return true;
    } else {
        return false;
    }
}

//--------------------------------------------------------------
void Particles::update(){
    checkEdges();
    
    vel += acc;
    loc += vel;
    
    acc.set(0, 0);
}

//--------------------------------------------------------------
void Particles::draw(){
    ofSetColor(0, 200);
    ofDrawCircle(loc.x, loc.y, mass * 30);
}

//--------------------------------------------------------------
void Particles::checkEdges(){
    if(loc.x > ofGetWindowWidth()){
        loc.x = ofGetWindowWidth();
        vel.x *= -0.45;
    } else if(loc.x < 0){
        loc.x = 0;
        vel.x *= -0.45;
    }
    
    if(loc.y > ofGetWindowHeight()){
        loc.y = ofGetWindowHeight();
        vel.y *= -0.7;
    }
}
