#pragma once

#include "ofMain.h"

class Particle
{
private:
	ofPoint location;
	ofVec2f speed;
	ofVec2f force;
	long lifetime;
	int radius;

	ofColor color;

public:
	Particle();
	void init();
	void move();
	void draw();


};

