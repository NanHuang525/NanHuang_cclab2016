//
//  particle.cpp
//  w10_h10_Openframworks
//
//  Created by Nan Huang on 14/11/2016.
//
//

#include "particle.hpp"

particle::particle(int x, int y){
    pos.x = x;
    pos.y = y;
    red = 255; green = 255; blue = 255;
    vel = ofVec2f(ofRandom(-3,3),0);
    gravity = ofVec2f(0,0.5);
    size = 0;
    choose = (int)ofRandom(3);
}

void particle::update(){
    pos+=vel;
    vel+=gravity;
    if(choose==0){
        green-=10;
        blue-=10;
    }else if(choose ==1){
        red-=10;
        blue-=10;
    }else if(choose==2){
        red-=10;
        green-=10;
    }
    size = ofMap(vel.length(), 0, 100, 1, 5);
    
}

void particle::draw(){
    cout<<size<<endl;
    ofSetColor(red, green, blue);
    ofDrawCircle(pos, size);
}
