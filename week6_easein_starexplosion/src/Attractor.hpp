
//
//  Attractor.hpp
//  01-Explosion
//
//  Created by Minhal Rana on 10/5/18.
//

#ifndef Attractor_hpp
#define Attractor_hpp

#include "ofMain.h"

class Attractor{
    
public:
    void setup(ofPoint _pos, float _radius, float _angle, float _vel);
    void update(float _updateRadius);
    void draw();
    
    ofPoint pos;
    float radius;
    float angle;
    float vel;
    
    
};

#endif /* Attractor_hpp */
