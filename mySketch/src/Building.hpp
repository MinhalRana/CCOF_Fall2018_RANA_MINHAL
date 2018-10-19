//
//  Building.hpp
//  mySketch
//
//  Created by Minhal Rana on 10/19/18.
//

#ifndef Building_hpp
#define Building_hpp


#include "ofMain.h"


#include <stdio.h>

class Building {
    
public:
    void setup(float _x, float _y, float _w, float _h, float _c);
    void draw();
    
    float x,y,w,h;
    float c;
};

#endif /* Building_hpp */
