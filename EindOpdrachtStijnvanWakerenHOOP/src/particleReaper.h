#pragma once
#include "ofMain.h"
//#include "ofApp.h"
#include "Particle.h"

class particleReaper
{
public:
	particleReaper();
	~particleReaper();
	void reap(vector<Particle*> particles);
};

