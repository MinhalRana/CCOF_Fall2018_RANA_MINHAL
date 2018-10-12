//
//  particle.hpp
//  week6_easein_starexplosion
//
//  Created by Minhal Rana on 10/12/18.
//

#ifndef particle_hpp
#define particle_hpp

#include "ofMain.h"

class particle{
    
public:
    void init(ofPoint _pos);
    void updateParticle(ofPoint _attractor);
    void drawParticle();
    
    
    ofPoint pos;
    ofPoint vel;
    ofPoint pct;
    
    float dist;
    bool activated;
    
    float brightness;
    
};

#endif /* particle_hpp */
