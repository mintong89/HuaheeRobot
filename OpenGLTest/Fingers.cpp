#include "Shape.h"
#include "ColorIntensity.h"
#include "GLTexture.h"

void Finger(GLfloat x, GLfloat y, GLfloat z, GLfloat fingerAngle);

void Fingers(GLfloat fingerAngle) {
	ColorIntensity White("FFFFFF");
	ColorIntensity Black(0, 0, 0);

	ColorIntensity Green(21, 209, 134);
	ColorIntensity DarkGreen(21, 160, 104);
	ColorIntensity Turquoise(25, 233, 202);
	ColorIntensity Red(216, 61, 8);
	ColorIntensity Yellow(216, 176, 28);
	ColorIntensity DarkBlue(28, 110, 216);
	ColorIntensity Gray(108, 110, 114);

	// Inner
	GLTexture FingerGrey("grey.bmp");
	FingerGrey.start();
	glPushMatrix();
	White.call();
	glRotatef(50, 0.0, 0.0, 1.0);
	Cuboid(-7, 3, 3, 0, 10, 2);
	Black.call();
	Cuboid(-7, 3, 3, 0, 10, 2, GL_LINE_LOOP);
	glPopMatrix();
	FingerGrey.end();

	// Bottom
	FingerGrey.start();
	glPushMatrix();
	White.call();
	glTranslatef(-4.0, -3.0, 0.0);
	glRotatef(fingerAngle, 0.0, 0.0, 1.0);
	glRotatef(50, 0.0, 0.0, 1.0);
	Cuboid(-2, 0, 0, -5, 10, 8);
	Black.call();
	Cuboid(-2, 0, 0, -5, 10, 8, GL_LINE_LOOP);
	glPopMatrix();
	FingerGrey.end();

	Finger(4.5, 1.0, 0.0, fingerAngle);
	Finger(4.5, 1.0, -2.0, fingerAngle);
	Finger(4.5, 1.0, -4.0, fingerAngle);
	Finger(4.5, 1.0, -6.0, fingerAngle);
}

void Finger(GLfloat x, GLfloat y, GLfloat z, GLfloat fingerAngle) {
	ColorIntensity Gray(108, 110, 114);
	ColorIntensity Black(0, 0, 0);
	ColorIntensity White(255, 255, 255);

	// Upper Inner
	GLTexture FingerGrey("grey.bmp");
	FingerGrey.start();
	glPushMatrix();
	Gray.call();
	glRotatef(70, 0.0, 0.0, 1.0);
	glTranslatef(x, y, z);
	glRotatef(-fingerAngle, 0.0, 0.0, 1.0);
	Cuboid(-3, -1, 0, -8, 10, 8);
	Black.call();
	Cuboid(-3, -1, 0, -8, 10, 8, GL_LINE_LOOP);
	glPopMatrix();
	FingerGrey.end();

	// Upper Outer
	FingerGrey.start();
	glPushMatrix();
	Gray.call();
	glRotatef(20, 0.0, 0.0, 1.0);
	glTranslatef(x , y, z);
	glRotatef(-fingerAngle * 2, 0.0, 0.0, 1.0);
	glTranslatef(6.75, -2.5, 0.0);
	Cuboid(-6, -4, 0, -6, 10, 8);
	Black.call();
	Cuboid(-6, -4, 0, -6, 10, 8, GL_LINE_LOOP);
	glPopMatrix();
	FingerGrey.end();
}