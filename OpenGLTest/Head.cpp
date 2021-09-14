#include "Shape.h"
#include "ColorIntensity.h"

void Head() {
	ColorIntensity HeadGreen(0,160,62);
	ColorIntensity Black(0, 0, 0);

	glLineWidth(4);

	glPushMatrix();
	glRotatef(45, 0, 1, 0);
	GLdouble GHC[] = { -4,4,4,-4,4,-4 };
	HeadGreen.call();
	Cuboid(GHC[0], GHC[1], GHC[2], GHC[3], GHC[4], GHC[5]);
	Black.call();
	Cuboid(GHC[0], GHC[1], GHC[2], GHC[3], GHC[4], GHC[5],GL_LINE_LOOP);
	glPopMatrix();

	//right ear
	glPushMatrix();
	glBegin(GL_POLYGON);
	HeadGreen.call();
	glVertex3f(-6, 3, 2);
	glVertex3f(-6, -3, 2);
	glVertex3f(-8, -2, 2);
	glVertex3f(-8, 2, 2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	HeadGreen.call();
	glVertex3f(-6, 3, -2);
	glVertex3f(-6, -3, -2);
	glVertex3f(-8, -2, -2);
	glVertex3f(-8, 2, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_LINE_LOOP);
	Black.call();
	glVertex3f(-6, 3, 2);
	glVertex3f(-6, -3, 2);
	glVertex3f(-8, -2, 2);
	glVertex3f(-8, 2, 2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_LINE_LOOP);
	Black.call();
	glVertex3f(-6, 3, -2);
	glVertex3f(-6, -3, -2);
	glVertex3f(-8, -2, -2);
	glVertex3f(-8, 2, -2);
	glEnd();
	glPopMatrix();

	//left ear
	glPushMatrix();
	glBegin(GL_POLYGON);
	HeadGreen.call();
	glVertex3f(6, 3, 2);
	glVertex3f(6, -3, 2);
	glVertex3f(8, -2, 2);
	glVertex3f(8, 2, 2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_LINE_LOOP);
	Black.call();
	glVertex3f(6, 3, 2);
	glVertex3f(6, -3, 2);
	glVertex3f(8, -2, 2);
	glVertex3f(8, 2, 2);
	glEnd();
	glPopMatrix();

	//left ear
	glPushMatrix();
	glBegin(GL_POLYGON);
	HeadGreen.call();
	glVertex3f(6, 3, -2);
	glVertex3f(6, -3, -2);
	glVertex3f(8, -2, -2);
	glVertex3f(8, 2, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_LINE_LOOP);
	Black.call();
	glVertex3f(6, 3, -2);
	glVertex3f(6, -3, -2);
	glVertex3f(8, -2, -2);
	glVertex3f(8, 2, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_LINE_LOOP);
	Black.call();
	glVertex3f(6, 3, -2);
	glVertex3f(6, -3, -2);
	glVertex3f(8, -2, -2);
	glVertex3f(8, 2, -2);
	glEnd();
	glPopMatrix();

	//left mouth
	glPushMatrix();
	glColor3f(0, 0, 1);
	glBegin(GL_LINES);
	glVertex3f(5, 3, 4);
	glVertex3f(5, -3, 4);

	glVertex3f(-5, 3, 4);
	glVertex3f(-5, -3, 4);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glRotatef(90, 0, 1, 0);
	GLdouble LGHC[] = { -5,5,3,-3,1,1.5 };
	HeadGreen.call();
	Cuboid(LGHC[0], LGHC[1], LGHC[2], LGHC[3], LGHC[4], LGHC[5]);
	Black.call();
	Cuboid(LGHC[0], LGHC[1], LGHC[2], LGHC[3], LGHC[4], LGHC[5], GL_LINE_LOOP);
	glPopMatrix();
	
	//glPushMatrix();
	//glBegin(GL_LINE_LOOP);
	//glVertex3f(-3, 1, 4);
	//glVertex3f(-3, -4, 4);
	//glVertex3f(-6, -3, 0);
	//glVertex3f(-6, 3, 0);
	//glEnd();
	//glPopMatrix();

	//glPushMatrix();
	//glBegin(GL_LINE_LOOP);
	//glVertex3f(3, 1, 4);
	//glVertex3f(3, -4, 4);
	//glEnd();
	//glPopMatrix();


}