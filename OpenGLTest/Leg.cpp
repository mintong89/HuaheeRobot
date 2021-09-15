#include "Foot.h"
#include "ColorIntensity.h"
#include "Shape.h"

void Leg() {
	ColorIntensity Green(21, 209, 134);
	ColorIntensity DarkGreen(21, 160, 104);
	ColorIntensity Black("000000");

	glTranslatef(0.0, -10.0, 0.0);

	// Bottom
	glPushMatrix();
	glTranslatef(2.0, 10.0, 0.0);
	glRotatef(45, 0.0, 1.0, 1.0);
	Green.call();
	Cuboid(-2.0, 2.0, 3.5, -2.0, 2.5, -1.0);
	Black.call();
	Cuboid(-2.0, 2.0, 3.5, -2.0, 2.5, -1.0, GL_LINE_LOOP);
	glPopMatrix();

	// Middle
	glPushMatrix();
	glTranslatef(-0.0, 12.0, 2.5);
	glRotatef(-15, 0.0, 1.0, 1.0);
	DarkGreen.call();
	Cuboid(-2.0, 2.0, 10.0, -2.5, 2.5, -2.5);
	Black.call();
	Cuboid(-2.0, 2.0, 10.0, -2.5, 2.5, -2.5, GL_LINE_LOOP);
	glPopMatrix();

	glScalef(0.75, 0.75, 0.75);
	Foot();
}