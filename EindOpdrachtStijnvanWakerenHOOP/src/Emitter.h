#pragma once
#include "ofMain.h"
//#include "ofApp.h"
#include "Particle.h"
#include "Particle2.h"
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
	~Emitter();
	void init();
	void move();
	Particle* emit();
	void draw() const;

};

