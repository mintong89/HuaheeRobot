using namespace std;

#pragma once
#ifndef GLTEXTURE_H
#define GLTEXTURE_H

class GLTexture {
private:
	GLuint texture = 0;
	BITMAP BMP;
	HBITMAP hBMP = NULL;
	string fileName;

public:
	GLTexture(string fileName);
	void setFileName(string fileName);
	void start();
	void end();
};

#endif // !GLTEXTURE_H
