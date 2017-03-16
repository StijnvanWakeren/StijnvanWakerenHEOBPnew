#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	ofSetBackgroundColor(ofColor::black);

	for (int i = 0; i < MAX_PARTICLES; i++)
	{
		particles[i] = new Particle();
		particles[i]->init();
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < MAX_PARTICLES; i++)
	{
		particles[i]->move();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < MAX_PARTICLES; i++)
	{
		particles[i]->draw();
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
	for (int i = 0; i < MAX_PARTICLES; i++)
	{
		particles[i]->init();
		setRandomColor(particles[i]);
	}

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
