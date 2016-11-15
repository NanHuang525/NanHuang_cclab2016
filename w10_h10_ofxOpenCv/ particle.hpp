//
//  particle.hpp
//  w10_h10_Openframworks
//
//  Created by Nan Huang on 14/11/2016.
//
//
#include "ofMain.h"

class particle{
public:
    particle(int x, int y);
    
    void setup();
    void update();
    void draw();
    
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f gravity;
    float size;
    ofColor col;
    
    int red, green, blue;
    int choose;
};
