#include "Shape.h"
#include "ColorIntensity.h"

void Head() {
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1, 2, 1.6);

	glVertex3f(3.2, 2.8,-3);
	glVertex3f(2.25, 2.8,-2.5);
	glVertex3f(1.0, 2.8,-1);
	glVertex3f(-1.0, 2.8,-1);
	glVertex3f(-2.25, 2.8,-2.25);
	glVertex3f(-3.2, 2.8,-3);

	glVertex3f(3.0, 3, -3);
	glVertex3f(2.05, 3, -2.5);
	glVertex3f(0.8, 3, -1);
	glVertex3f(-0.8, 3, -1);
	glVertex3f(-2.05, 3, -2.25);
	glVertex3f(-3.2, 3, -3);

	glVertex3f(2.8, 1, -3);
	glVertex3f(2.01, 1, -2.5);
	glVertex3f(0.6, 1, -1);
	glVertex3f(-0.6, 1, -1);
	glVertex3f(-2.25, 1, -2.25);
	glVertex3f(-3.2, 1, -3);

	glEnd();
	glPopMatrix();
}