#include "ofApp.h"
#include <sstream>

ofImage img;

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(2);
}

//--------------------------------------------------------------
void ofApp::update(){
	img.clear();
	img.loadImage("http://farm8.staticflickr.com/7118/7446163748_fd8ace754f.jpg");
}

//--------------------------------------------------------------
void ofApp::draw(){
	img.draw(0, 0);

	float fps = ofGetFrameRate();

	std::stringstream ss;
	ss << "fps=" << fps;

	ofDrawBitmapString(ss.str().c_str(), 10, 10); 
}
