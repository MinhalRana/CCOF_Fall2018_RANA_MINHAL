#pragma once

#include "ofMain.h"
#include "Attractor.hpp"
#include"particle.hpp"

#define SEGMENT 6
#define TOTALNUM 100

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
    vector<Attractor> attractors;
    vector<particle> particles;
    
    float radius;
    
    float rMin;
    float rMax;
    float rPct =0;
    float rPctVel = 0.005;

};
