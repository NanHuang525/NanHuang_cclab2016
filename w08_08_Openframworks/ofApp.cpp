#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    pos = ofVec2f(ofGetWindowWidth() / 2 + ofRandom(-300, 300) , ofGetWindowHeight() + 50);
    g = 0.003;
    velocity = ofVec2f(ofRandom(-1,1), -4);
    size = 50;
    size2 = 1;
    friction = 0.999;
    doa = false;
    dragging = false;

}

//--------------------------------------------------------------
void ofApp::update(){
    velocity *= friction;
    velocity.y += g;
    for (int i = 0; i < 100; i++) {
        vel[i] *= friction;
        vel[i].y += g;
        posS[i] += vel[i];
    }
    alpha -= 0.001;
    pos += velocity;
    if (pos.y > ofGetWindowHeight() + 300) {
        pos = ofVec2f(ofGetWindowWidth() / 2 + ofRandom(-300, 300), ofGetWindowHeight() + 50);
        g = 0.003;
        velocity = ofVec2f(ofRandom(-1, 1), -4);
        doa = false;
    }
}


//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0,ofRandom(50,255),255);
    ofSetCircleResolution(100);
    if (dragging) {
        ofDrawCircle(ofGetMouseX(), ofGetMouseY(), 3);
    }
    
    if (doa==false) {
        ofDrawCircle(pos, size);
    }
    else if (doa == true) {
        for (int i = 0; i < 100; i++) {
            ofSetColor(255, ofRandom(50, 255), ofRandom(50, 255),alpha-i);
            ofDrawCircle(posS[i], size2+i/9);
        }
    }
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    

    dragging = true;
    ofVec2f mousePos = ofVec2f(x, y);
    int distance = ofDist(mousePos.x,mousePos.y, pos.x, pos.y);
    if (distance < 40&&doa==false) {
        doa = true;
        for (int i = 0; i < 100; i++) {
            posS[i].x = pos.x+10*sin(0.1*i);
            posS[i].y = pos.y + 10 * cos(0.1*i);
            vel[i].x = i*sin(i*0.1)/10;
            vel[i].y = i*cos(i*0.1)/10;
            alpha = 255;
        }
    }

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    dragging = false;

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
    
