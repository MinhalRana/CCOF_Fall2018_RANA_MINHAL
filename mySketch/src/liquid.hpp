//
//  liquid.hpp
//  mySketch
//
//  Created by Minhal Rana on 10/19/18.
//



#include <stdio.h>
#ifndef liquid_hpp
#define liquid_hpp

#include "ofMain.h"

class liquid {
    
public:
    void setup(float _x, float _y, float _w, float _h, float _c);
    void draw();
    
    float x,y,w,h;
    float c;
};

#endif /* liquid_hpp */
