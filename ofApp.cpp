#include "ofApp.h"
#define BALL_NUM 100

ofColor colors[BALL_NUM];
ofVec2f position[BALL_NUM];
float r[BALL_NUM];
ofVec2f add_v[BALL_NUM];

ofImage frame;

//--------------------------------------------------------------
void ofApp::setup(){
	//�T���v���̃A�j���[�V�����̂��߂̏�����
	for (int i = 0; i < BALL_NUM; i++) {
		colors[i] = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
		r[i] = ofRandom(20, 50);
		position[i] = ofVec2f(ofRandom(0 + r[i], WIDTH - r[i]), ofRandom(0 + r[i], HEIGHT - r[i]));
		add_v[i] = ofVec2f(ofRandom(-3, 3), ofRandom(-3, 3));
	}

	//����������L���� -> �t���[��������h��
	ofSetVerticalSync(true);

	//�t���[���̉摜��ۑ�����o�b�t�@�̊m��
	frame.allocate(WIDTH, HEIGHT, OF_IMAGE_COLOR_ALPHA);
}

//--------------------------------------------------------------
void ofApp::update(){
	//�T���v���A�j���[�V����
	for (int i = 0; i < BALL_NUM; i++) {
		position[i] += add_v[i];

		if (position[i].x < 0 + r[i] || position[i].x > ofGetWidth() - r[i]) {
			add_v[i].x *= -1;
		}

		if (position[i].y < 0 + r[i] || position[i].y > ofGetHeight() - r[i]) {
			add_v[i].y *= -1;
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	//�T���v���A�j���[�V�����̕`��
	for (int i = 0; i < BALL_NUM; i++) {
		ofSetColor(colors[i]);
		ofDrawCircle(position[i], r[i]);
	}

	//�o�b�t�@�Ƀt���[����ۑ����ĉ摜�t�@�C���Ƃ��ďo�͂���
	//�摜��./bin/data�ɕۑ������
	frame.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
	frame.saveImage("frame_" + ofToString(ofGetFrameNum()) + ".png", OF_IMAGE_QUALITY_HIGH);
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
