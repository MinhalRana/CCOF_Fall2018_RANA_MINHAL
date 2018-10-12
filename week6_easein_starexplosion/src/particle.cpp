//
//  particle.cpp
//  week6_easein_starexplosion
//
//  Created by Minhal Rana on 10/12/18.
//

#include "particle.hpp"

void particle:: init(ofPoint _pos){
    pos.set(_pos.x, _pos.y);
    
    float velMin = 0.0001;
    float velMax = 0.0005; 
    float randomVel = ofRandom(velMin,velMax);
    vel.set(randomVel,randomVel);
    
    activated = false;
     brightness = 70;
    
}

void particle:: updateParticle(ofPoint _attractor){
    dist = ofDist(pos.x, pos.y, _attractor.x, _attractor.y);
    
    if(dist<100){
        activated = true;
        brightness = 255;
    }
    
    if(activated){
        pct+= vel;
        //(1-pct) *  currentPos + pct * dest
        pos = (ofPoint(1,1) -pct) *pos + pct* _attractor;
        
        if(brightness < 253){
            brightness += 2;
        }
        
    }
    
    
}

void particle:: drawParticle(){
    ofSetColor(brightness);
    ofDrawCircle(pos,4);
    
}
