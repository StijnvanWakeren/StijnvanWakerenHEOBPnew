#include "Particle.h"



Particle::Particle()
{
}

void Particle::init(ofPoint startLocation)
{
	location = startLocation;
	lifetime = ofRandom(600, 900);
	radius = lifetime / 2;
	emergeRadius = 0;
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
	radius = (lifetime / 60);

	//Random movement
	force += ofVec2f(ofRandom(-0.5, 0.5), ofRandom(-0.5, 0.5));

	//Physics
	speed += force;
	location += speed/4;
	speed = speed / 1.01;
	force = ofVec2f (0,0);
}

void Particle::draw()
{
	radius = min(radius, 50.0);
	ofSetColor(color);
	ofDrawCircle(location, radius);

	//outer circle
	ofSetColor(color, 20);
	ofDrawCircle(location, radius*1.8);
	ofSetColor(color, 10);
	ofDrawCircle(location, radius * 2.6);
}

void Particle::setColor(ofColor newColor) {
	color = newColor;
}