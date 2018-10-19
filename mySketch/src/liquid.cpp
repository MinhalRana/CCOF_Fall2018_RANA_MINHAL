//
//  liquid.cpp
//  mySketch
//
//  Created by Minhal Rana on 10/19/18.
//

#include "liquid.hpp"
//--------------------------------------------------------------
void liquid::setup(float _x, float _y, float _w, float _h, float _c){
    x = _x;
    y = _y;
    w = _w;
    h = _h;
    c = _c;
}

//--------------------------------------------------------------
void liquid::draw(){
    ofSetColor(255,0);
    ofDrawRectangle(x, y, w, h);
}
