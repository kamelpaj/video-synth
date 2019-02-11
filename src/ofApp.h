#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        void exit();
        void stripePattern();
    
        ofxGuiGroup primGroup;
        ofxFloatSlider shiftY, rotate;
        ofxVec2Slider size;
        ofxColorSlider color;
        ofxToggle filled, type;
    
        ofxGuiGroup globalGroup;
        ofxFloatSlider Scale;
        ofxFloatSlider Rotate;
        ofxFloatSlider Background;
    
        ofxPanel gui;
        ofxIntSlider countX;
        ofxFloatSlider stepX;
        ofxFloatSlider twistX;
    
        bool showGui;
    
        ofxIntSlider countY;
        ofxFloatSlider stepY, twistY, pinchY;
        void matrixPattern();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
		
};
