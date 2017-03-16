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
	int emergeRadius;

	ofColor color;

public:
	Particle();
	void init();
	void move();
	void draw();
	void setColor(ofColor newColor);


};

