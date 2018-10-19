//
//  Particles.hpp
//  mySketch
//
//  Created by Minhal Rana on 10/19/18.
//

#ifndef Particles_hpp
#define Particles_hpp

#include <stdio.h>

#include "ofMain.h"
#include "liquid.hpp"

class Particles {
    
public:
    void setup();
    void update();
    void draw();
    
    void applyForce(ofPoint _f);
    void addGravityForce(float _g);
    
    void addDragForce(liquid _l);
    
    void checkEdges();
    
    bool insideWater(liquid _l);
    
    ofPoint loc;
    ofPoint vel;
    ofPoint acc;
    
    float mass;
    
};

#endif /* Particles_hpp */
