#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        void draw2d();
        void exit();
        void stripePattern();
    
        ofxPanel gui;
        ofxIntSlider countX;
        ofxFloatSlider stepX;
        ofxFloatSlider twistX;
    
        ofxGuiGroup primGroup;
        ofxFloatSlider shiftY, rotate;
        ofxVec2Slider size;
        ofxColorSlider color;
        ofxToggle filled, type;
    
        ofxGuiGroup globalGroup;
        ofxFloatSlider Scale;
        ofxFloatSlider Rotate;
        ofxFloatSlider Background;
    
        ofxGuiGroup mixerGroup;
        ofxFloatSlider imageAlpha, videoAlpha, cameraAlpha;
    
        bool showGui;
    
        ofxIntSlider countY;
        ofxFloatSlider stepY, twistY, pinchY;
        void matrixPattern();
    
        ofTexture image;
        ofVideoPlayer video;
        ofVideoGrabber camera;
    
        ofFbo fbo;
    
        ofShader shader;
        ofxToggle kenabled;
        ofxIntSlider ksectors;
        ofxFloatSlider kangle, kx, ky;

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
