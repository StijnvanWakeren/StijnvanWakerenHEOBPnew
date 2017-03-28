#pragma once
#include "ofMain.h"
#include "ofApp.h"

class particleReaper
{
public:
	particleReaper();
	void reap(vector<Particle*> particles);
};

