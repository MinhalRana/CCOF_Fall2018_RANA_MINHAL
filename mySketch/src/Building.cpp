//
//  Building.cpp
//  mySketch
//
//  Created by Minhal Rana on 10/19/18.
//

#include "Building.hpp"
void Building::setup(float _x, float _y, float _w, float _h, float _c){
    x = _x;
    y = _y;
    w = _w;
    h = _h;
    c = _c;
}

//--------------------------------------------------------------
void Building::draw(){
    ofSetColor(90);
    ofDrawRectangle(x, y, w, h);
}
