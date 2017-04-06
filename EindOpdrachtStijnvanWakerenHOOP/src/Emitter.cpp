#include "Emitter.h"
#include "Particle.h"
#include "Particle2.h"
#include "ofApp.h"

Emitter::Emitter()
{
}

Emitter::~Emitter()
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

Particle* Emitter::emit()
{
		Particle* newParticle;
		newParticle = new Particle();
		newParticle->init(location);
	
		if (ofRandom(100) < 20)
		{
			newParticle->setColor(ofColor::red);
		}

		return newParticle;
}

void Emitter::draw() const
{
	//ofSetColor(ofColor(ofColor::white));
	//ofDrawCircle(location, 2);

}
