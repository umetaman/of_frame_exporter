#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	//フルHDの動画にしたいので、1980x1080にする。
	ofSetupOpenGL(1920,1080,OF_WINDOW);
	ofRunApp(new ofApp());
}
