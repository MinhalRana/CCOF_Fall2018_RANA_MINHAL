#pragma once

#include "ofMain.h"
#include "Particles.hpp"

#define TOTALNUM 200

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
    ofImage background;

     vector<Particles> particles;
		
};
