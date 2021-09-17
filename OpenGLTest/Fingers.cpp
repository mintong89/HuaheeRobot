#include "Shape.h"
#include "ColorIntensity.h"
#include "GLTexture.h"

void Finger(GLfloat x, GLfloat y, GLfloat z);

void Fingers() {
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
	glRotatef(50, 0.0, 0.0, 1.0);
	Cuboid(-7, -5, 0, -5, 10, 8);
	Black.call();
	Cuboid(-7, -5, 0, -5, 10, 8, GL_LINE_LOOP);
	glPopMatrix();
	FingerGrey.end();

	Finger(4.5, 1.0, 0.0);
	Finger(4.5, 1.0, -2.0);
	Finger(4.5, 1.0, -4.0);
	Finger(4.5, 1.0, -6.0);
}

void Finger(GLfloat x, GLfloat y, GLfloat z) {
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
	glTranslatef(x + 3.75, y - 2.5, z);
	Cuboid(-3, -1, 0, -6, 10, 8);
	Black.call();
	Cuboid(-3, -1, 0, -6, 10, 8, GL_LINE_LOOP);
	glPopMatrix();
	FingerGrey.end();
}