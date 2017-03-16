#include "Emitter.h"
#include "Particle.h"
#include "Particle2.h"

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

	for (int i = 0; i < emitted; i++)
	{
		particles[i]->move();
		particle2s[i]->move();
	}
}

void Emitter::emit()
{
	if (emitted < MAX_PARTICLES)
	{
		if (allEmitted = false)
		{
			particles[emitted] = new Particle();
			particles[emitted]->init(location);
			particle2s[emitted] = new Particle2();
			particle2s[emitted]->init(location);
		}
		emitted++;
	}
	else
	{
		allEmitted = true;
		emitted = 0;
	}

	if (allEmitted)
	{
		particles[emitted]->init(location);
		particle2s[emitted]->init(location);
	}
}

void Emitter::draw()
{
	ofSetColor(ofColor(ofColor::white));
	ofDrawCircle(location, 2);

	for (int i = 0; i < emitted; i++)
	{
		particles[i]->draw();
		particle2s[i]->draw();
	}
}
