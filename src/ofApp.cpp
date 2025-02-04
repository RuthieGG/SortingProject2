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
void merge(std::vector<int>& randomNumbers, int left, int mid, int right)
{
	std::vector<int> temp;
	int i = left, j = mid + 1;
	while (i <= mid && j <= right)
	{
		if (randomNumbers[i] <= randomNumbers[j]) temp.push_back(randomNumbers[i++]);
		else temp.push_back(randomNumbers[j++]);
	}
	while (i <= mid) temp.push_back(randomNumbers[i++]);
	while (j <= right) temp.push_back(randomNumbers[j++]);
	for (int k = 0; k < temp.size(); k++) randomNumbers[left + k] = temp[k];

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
		//used lectures notes from Week 4.
	case 'b': case 'B':
		for (size_t i = 0; i < randomNumbers.size(); i++) 
		{
			for (size_t j = 0; j < randomNumbers.size() - i - 1; j++)
			{
				if (randomNumbers[j] > randomNumbers[j + 1])
				{
					std::swap(randomNumbers[j], randomNumbers[j + 1]);
				}
			}
		}
		break;
		//used lectures notes from Week 4
	case 'i': case 'I':
		for (size_t i = 1; i < randomNumbers.size(); i++)
		{
			int key = randomNumbers[i];
			int j = i - 1;
			while (j >= 0 && randomNumbers[j] > key)
			{
				randomNumbers[j + 1] = randomNumbers[j];
				j--;
			}
			randomNumbers[j+1] = key;
		}
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
