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

};

