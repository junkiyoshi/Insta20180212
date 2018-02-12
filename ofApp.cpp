#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

	ofSetFrameRate(60);
	ofBackground(0);
	ofSetWindowTitle("Insta");

	ofSetRectMode(ofRectMode::OF_RECTMODE_CENTER);

	this->frame = cv::imread("D:\\video\\image.jpg");
}

//--------------------------------------------------------------
void ofApp::update() {

	this->r_rect = RecuRect(9, ofVec2f(ofGetWidth() / 2, ofGetHeight() / 2), 1280, true);
	this->r_rect.update();
}

//--------------------------------------------------------------
void ofApp::draw() {

	r_rect.draw(this->frame);
}

//========================================================================
int main() {

	ofSetupOpenGL(1280, 1280, OF_WINDOW);
	ofRunApp(new ofApp());
}