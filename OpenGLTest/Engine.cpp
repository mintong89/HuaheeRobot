#include "Shape.h"
#include "ColorIntensity.h"

void EnginePart();

void Engine() {

	// Right Bottom
	EnginePart();

	// Left Bottom
	glPushMatrix();
	glTranslatef(8.0, 0.0, 0.0);
	EnginePart();
	glPopMatrix();

	// Right Top
	glPushMatrix();
	glTranslatef(0.0, 0.0, -5.0);
	glRotatef(90, 1.0, 0.0, 0.0);
	EnginePart();
	glPopMatrix();

	// Left Top
	glPushMatrix();
	glTranslatef(8.0, 0.0, -5.0);
	glRotatef(90, 1.0, 0.0, 0.0);
	EnginePart();
	glPopMatrix();
}

void EnginePart() {
	ColorIntensity Grey(144, 144, 144);

	glPushMatrix();
	glTranslatef(-4.0, -1.0, -4.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	Grey.call();
	Cylinder(1.0, 0.0, 2.0);
	glPopMatrix();
}