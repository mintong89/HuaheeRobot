#include "Foot.h"
#include "ColorIntensity.h"
#include "Shape.h"
#include "GLTexture.h"

void Leg(GLfloat upperAngle) {
	ColorIntensity Green(21, 209, 134);
	ColorIntensity DarkGreen(21, 160, 104);
	ColorIntensity Black("000000");
	ColorIntensity White(255,255,255);

	// Middle
	glPushMatrix();
	glTranslatef(2.0, 12.0, 1.0);
	glRotatef(upperAngle, 1.0, 0.0, 0.0);

	GLTexture FootGreen("greenmetal.bmp");
	FootGreen.start();
	glPushMatrix();
	glRotatef(-45, 0.0, 1.0, 0.0);
	glRotatef(-5, 0.0, 0.0, 1.0);
	glRotatef(upperAngle + 180, 1.0, 0.0, 0.0);
	DarkGreen.call();
	Cuboid(-2.0, 2.0, 12.5, 0.0, 2.5, -2.5);
	Black.call();
	Cuboid(-2.0, 2.0, 12.5, 0.0, 2.5, -2.5, GL_LINE_LOOP);
	glPopMatrix();
	FootGreen.end();

	glPushMatrix();
	glTranslatef(-1.5, -24.0, -2.0);
	glRotatef(-30, 0.0, 1.0, 0.0);

	// Bottom
	GLTexture BottonFootGreen("diamond.bmp");
	BottonFootGreen.start();
	glPushMatrix();
	glTranslatef(2.0, 10.0, 0.0);
	Green.call();
	Cuboid(-2.0, 2.0, 3.5, -2.0, 2.5, -1.0);
	Black.call();
	Cuboid(-2.0, 2.0, 3.5, -2.0, 2.5, -1.0, GL_LINE_LOOP);
	glPopMatrix();
	BottonFootGreen.end();

	// Foot
	glPushMatrix();
	glScalef(0.75, 0.75, 0.75);
	Foot();
	glPopMatrix();

	glPopMatrix();

	glPopMatrix();
}