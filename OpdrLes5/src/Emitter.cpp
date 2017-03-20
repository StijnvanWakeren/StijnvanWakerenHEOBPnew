#include "Emitter.h"
#include "Particle.h"
#include "Particle2.h"
#include "ofApp.h"

Emitter::Emitter()
{
}

void Emitter::init()
{
	location.x = ofGetWidth() / 2;
	location.y = ofGetHeight() / 2;
	speed = 1;
	movementRadius = 200;
	allEmitted = false;
}

void Emitter::move()
{
	location.x = sin(ofGetElapsedTimeMillis()*speed/150)*movementRadius + ofGetWidth() / 2;
	location.y = cos(ofGetElapsedTimeMillis()*speed/150)*movementRadius + ofGetHeight() / 2;

}

void Emitter::emit()
{
	vector<Particle>::iterator i = particles.begin();
	while (i != particles.end()) {
		i->init(location);
		i++;
	}
}

void Emitter::draw()
{
	ofSetColor(ofColor(ofColor::white));
	ofDrawCircle(location, 2);

}
