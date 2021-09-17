#include "Shape.h"
#include "ColorIntensity.h"
#include "GLTexture.h"

void Sword() {
	ColorIntensity Black(0, 0, 0);
	ColorIntensity White(255, 255, 255);
	ColorIntensity Gold(255, 161, 10);
	ColorIntensity DarkGreen(16, 176, 63);
	ColorIntensity NewGreen(2, 225, 112);
	ColorIntensity NeoDarkGreen(2, 111, 34);
	ColorIntensity LightkGreen(0, 233, 239);
	ColorIntensity Grey(144, 144, 144);
	ColorIntensity NeoGrey(93, 93, 93);
	ColorIntensity BackYellow(253, 187, 0);
	ColorIntensity BackGreen(0, 193, 126);
	ColorIntensity ArmorGreen(0, 139, 91);
	ColorIntensity ShieldGreen(0, 67, 44);
	ColorIntensity UpShieldGreen(0, 255, 166);
	ColorIntensity Metal(48, 48, 48);

	glLineWidth(4);

	GLTexture SwordBlue("diamond.bmp");
	SwordBlue.start();
	glPushMatrix();
	White.call();
	Cuboid(-1, 1, 19, 0, 1, 0);
	glPopMatrix();
	SwordBlue.end();

	glPushMatrix();
	Black.call();
	Cuboid(-1, 1, 19, 0, 1, 0,GL_LINE_LOOP);
	glPopMatrix();

	SwordBlue.start();
	glPushMatrix();
	White.call();
	glBegin(GL_POLYGON);
	glVertex3f(0, 23, 0.5);
	glNormal3f(0, 23, 0.5);
	glVertex3f(-1, 19,1);
	glNormal3f(-1, 19, 1);
	glVertex3f(-1, 19, 0);
	glNormal3f(-1, 19, 0);
	glVertex3f(1, 19, 0);
	glNormal3f(1, 19, 0);
	glVertex3f(1, 19, 1);
	glNormal3f(1, 19, 1);
	glEnd();
	glPopMatrix();
	SwordBlue.end();

	glPushMatrix();
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(0, 23, 0.5);
	glNormal3f(0, 23, 0.5);
	glVertex3f(-1, 19, 1);
	glNormal3f(-1, 19, 1);
	glVertex3f(-1, 19, 0);
	glNormal3f(-1, 19, 0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(0, 23, 0.5);
	glNormal3f(0, 23, 0.5);
	glVertex3f(1, 19, 0);
	glNormal3f(1, 19, 0);
	glVertex3f(1, 19, 1);
	glNormal3f(1, 19, 1);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	DarkGreen.call();
	Cuboid(-5, 5, 0, -2, 2, -1);
	glPopMatrix();

	glPushMatrix();
	Black.call();
	Cuboid(-5, 5, 0, -2, 2, -1, GL_LINE_LOOP);
	glPopMatrix();

	GLTexture SwordYellow("yellow.bmp");
	SwordYellow.start();
	glPushMatrix();
	glTranslatef(0, -1, 1.7);
	White.call();
	Sphere(1);
	glPopMatrix();
	SwordYellow.end();

	SwordYellow.start();
	glPushMatrix();
	glTranslatef(0, -1, -0.6);
	White.call();
	Sphere(1);
	glPopMatrix();
	SwordYellow.end();

	glPushMatrix();
	NeoDarkGreen.call();
	glTranslatef(0, -2, 0.5);
	glRotatef(90, 1, 0, 0);
	Cylinder(1, 1, 8);
	glPopMatrix();

	SwordYellow.start();
	glPushMatrix();
	glTranslatef(0, -10, 0.5);
	White.call();
	Sphere(1);
	glPopMatrix();
	SwordYellow.end();
}