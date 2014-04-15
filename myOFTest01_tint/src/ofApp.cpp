#include "ofApp.h"

ofPoint p0, p1;
ofImage tint_img;

void ofApp::setup(){
	ofSetFrameRate(60);
	ofBackground(0, 0, 64);
	ofHideCursor();
	ofSetCircleResolution(50);
}

void ofApp::update(){
	p0 = ofPoint(mouseX, mouseY);
	p1 = ofPoint(ofGetWidth(), ofGetHeight()) - p0;
}

void ofApp::draw(){
	// fade screen image
	ofEnableAlphaBlending();
	ofSetColor(255, 255, 255, 220);
	tint_img.draw(ofRandom(5, 7), ofRandom(5, 7));
	ofDisableAlphaBlending();

	// draw objects
	ofSetColor(255, 0, 0);
	ofFill();
	ofCircle(p0.x, p0.y, 100);

	ofSetColor(0, 0, 255);
	ofFill();
	ofCircle(p1.x, p1.y, 100);

	ofSetColor(0, 255, 0);
	ofSetLineWidth(10);
	ofLine(p0, p1);

	// grab screen image
	tint_img.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
}
