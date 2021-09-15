#include "Shape.h"
#include "ColorIntensity.h"

void ArmWheelCylinder();

void ArmWheel() {
	ColorIntensity Black(0, 0, 0);
	ColorIntensity DarkBlue(28, 110, 216);
	ColorIntensity DarkGreen(21, 160, 104);

	// Left Wheel
	glPushMatrix();
	glTranslatef(-5, 0.0, 0.0);
	ArmWheelCylinder();
	glPopMatrix();

	// Right Wheel
	glPushMatrix();
	glTranslatef(5, 0.0, 0.0);
	ArmWheelCylinder();
	glPopMatrix();

	// Bottom
	glPushMatrix();
	glRotatef(90, 0.0, 0.0, 1.0);
	glTranslatef(-1.8, 0.0, 0.0);
	DarkBlue.call();
	Prism(-0.0, 2.5, -2.5, -2.5, 0.5, 2.5, -2.5);
	Black.call();
	Prism(-0.0, 2.5, -2.5, -2.5, 0.5, 2.5, -2.5, GL_LINE_LOOP);
	glPopMatrix();

	// Middle
	glPushMatrix();
	DarkGreen.call();
	Cuboid(-2.5, 2.5, 4.33, -4.33, 0.0, -2.5);
	Black.call();
	Cuboid(-2.5, 2.5, 4.33, -4.33, 0.0, -2.5, GL_LINE_LOOP);
	glPopMatrix();

	// Top
	glPushMatrix();
	DarkBlue.call();
	Cuboid(-2.5, 2.5, 6.0, 4.0, 2.5, -2.5);
	Black.call();
	Cuboid(-2.5, 2.5, 6.0, 4.0, 2.5, -2.5, GL_LINE_LOOP);
	glPopMatrix();
}

void ArmWheelCylinder() {
	ColorIntensity Black(0, 0, 0);
	ColorIntensity DarkBlue(28, 110, 216);

	GLfloat wSize[] = { 5, 5, 5 };

	glTranslatef(-2.5, 0.0, 0.0);

	glRotatef(90, 0.0, 1.0, 0.0);
	DarkBlue.call();
	Cylinder(wSize[0], wSize[1], wSize[2]);

	// Front Circle
	DarkBlue.call();
	Circle(0.0, 0.0, wSize[0]);
	Black.call();
	Circle(0.0, 0.0, wSize[0], GL_LINE_LOOP);

	// Back Circle
	glTranslatef(0.0, 0.0, 5.0);
	DarkBlue.call();
	Circle(0.0, 0.0, wSize[0]);
	Black.call();
	Circle(0.0, 0.0, wSize[0], GL_LINE_LOOP);
}

