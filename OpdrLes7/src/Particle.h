#pragma once

#include "ofMain.h"

class Particle
{
public:
	ofPoint location;
	ofVec2f speed;
	ofVec2f force;
	long lifetime;
	double radius;
	int emergeRadius;

	ofColor color;

public:
	Particle();
	void init(ofPoint startLocation);
	void move();
	void draw() const;
	bool checkIfAlive();
	void setColor(ofColor newColor);


};

