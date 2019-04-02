#include "ofApp.h"
#include "Shapes.h"
#include "ofTrueTypeFont.h"

int theta = 1;
string name = "Joy B.";

//--------------------------------------------------------------
void ofApp::setup()
{
    Minecrafter.load("Minecrafter.Alt.ttf", 50);
}

//--------------------------------------------------------------
void ofApp::update()
{
    theta++;
}

//--------------------------------------------------------------
void ofApp::draw()
{
    // shapes are organized by layer and by middle of the window outwards
    ofPushMatrix();
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
            for (int i{}; i < 8; i ++) // makes a complete circle
            {
                ofRotate(45);
                    shapeOne();
                    shapeTwo();
                    shapeThree();
                    for (int i{}; i < 4; i ++)
                        shapeFour();
                    shapeEight();
                    shapeNine(theta); // continuously rotates counter-clockwise
                    shapeTen();
                    shapeEleven();
                    shapeTwelve(theta); // continuously rotates clockwise
            }
    ofPopMatrix();
    
    Minecrafter.drawString(name, 730, 730);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
