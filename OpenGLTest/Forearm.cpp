#include "Shape.h"
#include "ColorIntensity.h"
#include "Hand.h"
#include "ArmWheel.h"
#include "GLTexture.h"

void LowerArm();
void UpperArm();

void Forearm(GLfloat lowerAngle, GLfloat upperAngle, GLfloat innerHandAngle = 0.0) {
	ColorIntensity Yellow(216, 176, 28);
	ColorIntensity White(255, 255, 255);

	// Upper Arm Ball
	glPushMatrix();
	Yellow.call();
	glTranslatef(0.0, 17.5, 0.0);
	Sphere(3.0);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.0, 16.5, 0.0);
	glRotatef(upperAngle, 1.0, 0.0, 0.0);

	// Upper Arm
	glPushMatrix();
	glRotatef(180, 1.0, 0.0, 0.0);
	UpperArm();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, -8, 0.0);
	glRotatef(lowerAngle, 1.0, 0.0, 0.0);

	// Lower Arm
	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.0);
	glRotatef(180, 1.0, 0.0, 0.0);
	LowerArm();
	glPopMatrix();

	// Arm Wheel
	glPushMatrix();
	glScalef(0.25, 0.25, 0.25);
	glTranslatef(0.0, -18.0, 0.0);
	ArmWheel();
	glPopMatrix();

	// Hand
	glPushMatrix();
	glScalef(0.5, 0.5, 0.5);
	glRotatef(-65, 0.0, 1.0, 0.0);
	glTranslatef(1.5, -12.0, 3.0);
	Hand(innerHandAngle);
	glPopMatrix();

	glPopMatrix();
	glPopMatrix();
}

void LowerArm() {
	ColorIntensity DarkBlue(28, 110, 216);
	ColorIntensity Black(0, 0, 0);
	ColorIntensity White(255, 255, 255);

	GLTexture ArmBlue("bluemetal.bmp");
	ArmBlue.start();
	glPushMatrix();
	DarkBlue.call();
	Cuboid(-2, 2, 8, 0, 2.5, -2.5);
	Black.call();
	Cuboid(-2, 2, 8, 0, 2.5, -2.5, GL_LINE_LOOP);
	glPopMatrix();
	ArmBlue.end();
}

void UpperArm() {
	ColorIntensity DarkBlue(28, 110, 216);
	ColorIntensity Black(0, 0, 0);
	ColorIntensity White(255, 255, 255);

	GLTexture ArmBlue("bluemetal.bmp");
	ArmBlue.start();
	glPushMatrix();
	White.call();
	Cuboid(-2.5, 2.5, 8, 0, 2.5, -2.5);
	Black.call();
	Cuboid(-2.5, 2.5, 8, 0, 2.5, -2.5, GL_LINE_LOOP);
	glPopMatrix();
	ArmBlue.end();
}