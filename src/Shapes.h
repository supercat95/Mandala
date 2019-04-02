#pragma once

// All shapes locations are referring to between 3pi/2 and 7pi/4

void shapeOne() // larger circle along y = x (dark red for now)
{
    ofSetColor(100,0,0);
    ofDrawCircle(400/2, -400/2, 100/2);
}

void shapeTwo() // smaller circle along y = x (light red for now)
{
    ofSetColor(200,0,0);
    ofDrawCircle(400/2, -400/2, 50/2);
}

void shapeThree() // large triangle along y = x (dark  green for now)
{
    ofSetColor(0,100,0);
    ofDrawTriangle(0, 0, 0, -250/2, 440/2, -440/2);
}

void shapeFour() // four diagonal triangles (light green for now)
{
    ofSetColor(0,200,0);
    ofDrawTriangle(0, 0, 0, -75/2, 75/2, -75/2);
    ofPushMatrix();
        for (int i{}; i < 3; i ++)
        {
            ofTranslate(100/2,-100/2);
                ofDrawTriangle(0, 0, 0, -75/2, 75/2, -75/2);
        }
    ofPopMatrix();
}

void shapeEight() // larger parallelogram along x = 0 (dark blue for now)
{
    ofSetColor(0,0,100);
    ofBeginShape();
        ofVertex(0, -700/2);
        ofVertex(125/2, -550/2);
        ofVertex(125/2, -350/2);
        ofVertex(0, -200/2);
        ofVertex(0, -700/2);
    ofEndShape();
}

void shapeNine(int theta) // smaller parallelogram along x = 0 (light blue for now)
{
    ofPushMatrix();
    ofRotate(theta * -1);
        ofSetColor(0,0,255);
        ofBeginShape();
            ofVertex(0, -400/2);
            ofVertex(50/2, -300/2);
            ofVertex(50/2, -200/2);
            ofVertex(0, -100/2);
            ofVertex(0, -400/2);
        ofEndShape();
    ofPopMatrix();
}

void shapeTen() // lower triangle along x = 0
{
    ofSetColor(100,100,100);
    ofDrawTriangle(0, -400/2, 0, -500/2, 100/2, -400/2);
}

void shapeEleven() // upper triangle along x = 0
{
    ofPushMatrix();
        ofRotate(180);
        ofTranslate(-50, 475);
            shapeTen();
    ofPopMatrix();
}

void shapeTwelve(int theta) // four half circle-like shapes
{
    ofSetColor(255, 255, 255);
    ofPushMatrix();
            for (int i{}; i < 4; i ++)
            {
                ofDrawBezier(150/2, -500/2, 175/2, -550/2, 300/2, -475/2, 250/2 , -440/2);
                ofTranslate(-8, 20);
                ofRotate(theta);
            }
    ofPopMatrix();
}
