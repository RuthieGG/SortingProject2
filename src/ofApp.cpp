#include "ofApp.h"

//--------------------------------------------------------------
std::vector <int> randomNumbers;
void ofApp::setup(){
	for (int i = 0; i < 5; i++)
	{
		randomNumbers.push_back(10 + rand() % 91);
	}

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < 5; i++)
	{
		float x = 100 + i * 200;
		float y = 170;
		float radius = randomNumbers[i];

		ofSetColor(255, 141, 161);
		ofDrawCircle(x, y, radius);

		ofSetColor(0);
		string number = ofToString(randomNumbers[i], 2);
		ofDrawBitmapString(number, x - 10, y + 5);

	}

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	switch (key)
	{
		// For the randomizer
		// https://www.digitalocean.com/community/tutorials/random-number-generator-c-plus-plus
	case 'r': case 'R':
		for (int i = 0; i < 5; i++)
			randomNumbers[i] = 10 + rand() % 91;
		break;
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
