#pragma once

#include "ofMain.h"

#include "Emitter.h"
#include "particleReaper.h"
#include "Particle.h"
#include "Particle2.h"

#define MAX_PARTICLES 100

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void setRandomColor(Particle* particle);

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		Emitter emitter;
		particleReaper reaper;
		vector<Particle*> particles;
};
