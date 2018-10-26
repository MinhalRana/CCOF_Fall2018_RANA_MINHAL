//
//  Particles.hpp
//  Week6_7_Homework_Fall_forces
//
//  Created by Minhal Rana on 10/26/18.
//

#ifndef Particles_hpp
#define Particles_hpp

#include <stdio.h>
#include "ofMain.h"

class Particles {
    
public:
    void setup();
    void update();
    void draw();
    
    void applyForce(ofPoint _f);
    void addGravityForce(float _g);
    
    
    //void checkEdges();
    
    ofPoint loc;
    ofPoint vel;
    ofPoint acc;
    
    float mass;
    
};


#endif /* Particles_hpp */
