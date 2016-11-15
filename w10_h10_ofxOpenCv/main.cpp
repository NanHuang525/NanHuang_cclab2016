#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
    
    // STEP 1: Set window size
	ofSetupOpenGL(320, 800, OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
