#pragma once
#include "ofMain.h"
#include "ofApp.h"
#define MAX_PARTICLES 100
class Emitter
{
private:
	ofPoint location;
	double speed;
	int emitted;
	int movementRadius;
	bool allEmitted;


public:
	Emitter();
	void init();
	void move();
	Particle* emit();
	void draw() const;

};

