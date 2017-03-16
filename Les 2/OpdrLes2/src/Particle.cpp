#include "Particle.h"



Particle::Particle()
{
}

void Particle::init()
{
	location.x = ofGetWidth() / 2;
	location.y = ofGetHeight() / 2;
	lifetime = ofRandom(600, 900);
	radius = lifetime / 2;
	color = ofColor::white;
	force = ofVec2f(ofRandom(-2, 2) , ofRandom(-2, 2));
}

void Particle::move()
{
	//Lifetime
	if (lifetime > 0)
	{
		lifetime -= 1;
	}
	radius = lifetime / 60; // *sin(lifetime / 100);

	force += ofVec2f(ofRandom(-0.5, 0.5), ofRandom(-0.5, 0.5));

	//Physics
	speed += force;
	location += speed/4;
	speed = speed / 1.01;
	force = ofVec2f (0,0);
}

void Particle::draw()
{
	ofSetColor(color);
	ofDrawCircle(location, radius);
}