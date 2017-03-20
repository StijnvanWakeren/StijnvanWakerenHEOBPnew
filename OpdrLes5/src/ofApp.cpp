#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	ofSetBackgroundColor(ofColor::black);

	emitter = Emitter();
	emitter.init();

	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles.push_back(Particle());
	}

}

//--------------------------------------------------------------
void ofApp::update(){
	emitter.move();
	emitter.emit();

	vector<Particle>::iterator i = particles.begin();
	while (i != particles.end()) {
		i->move();
		i++;
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	emitter.draw();

	vector<Particle>::iterator i = particles.begin();
	while (i != particles.end()) {
		i->draw();
		i++;
	}
}

void ofApp::setRandomColor(Particle* particle) {
	float random = ofRandom(10);
	if (random > 3 && random < 7) {
		particle->setColor(ofColor(255,255,255));
	}
	else {
		particle->setColor(ofColor(255,0,0));
	}
}



//--------------------------------------------------------------
void ofApp::keyPressed(int key){
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
