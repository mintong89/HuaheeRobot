#include "Shape.h"
#include "ColorIntensity.h"
#include "Hand.h"
#include "ArmWheel.h"

void UpperArm();

void Forearm() {
	ColorIntensity Yellow(216, 176, 28);

	// Upper Arm Ball
	glPushMatrix();
	Yellow.call();
	glTranslatef(0.0, 17.5, 0.0);
	Sphere(3.0);
	glPopMatrix();

	// Upper Arm
	glPushMatrix();
	glTranslatef(0.0, 5.0, 0.0);
	UpperArm();
	glPopMatrix();

	// Arm Wheel
	glPushMatrix();
	glScalef(0.25, 0.25, 0.25);
	glTranslatef(0.0, 5.0, 0.0);
	ArmWheel();
	glPopMatrix();

	// Hand
	glPushMatrix();
	glScalef(0.5, 0.5, 0.5);
	glRotatef(-65, 0.0, 1.0, 0.0);
	glTranslatef(1.5, 0.25, 3.0);
	Hand();
	glPopMatrix();
}

void UpperArm() {
	ColorIntensity DarkBlue(28, 110, 216);
	ColorIntensity Black(0, 0, 0);

	glPushMatrix();
	DarkBlue.call();
	Cuboid(-2, 2, 4, -4, 2.5, -2.5);
	Black.call();
	Cuboid(-2, 2, 4, -4, 2.5, -2.5, GL_LINE_LOOP);
	glPopMatrix();

	glPushMatrix();
	DarkBlue.call();
	Cuboid(-2.5, 2.5, 12, 4, 2.5, -2.5);
	Black.call();
	Cuboid(-2.5, 2.5, 12, 4, 2.5, -2.5, GL_LINE_LOOP);
	glPopMatrix();
}