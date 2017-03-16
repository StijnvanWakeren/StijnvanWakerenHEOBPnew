#pragma once
#include "ofMain.h"
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
	void emit();
	void draw();

	Particle* particles[MAX_PARTICLES];
	Particle2* particle2s[MAX_PARTICLES];
};

