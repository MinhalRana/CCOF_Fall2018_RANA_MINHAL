#pragma once

#include "ofMain.h"
#include "Particles.hpp"
#include "liquid.hpp"
#include "Building.hpp"

#define TOTALNUM 1

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    vector<Particles> particles;
    liquid liquid;
    Building Building;
		
};
