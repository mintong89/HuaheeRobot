#include "Shape.h"
#include "ColorIntensity.h"
#include "GLTexture.h"

void Cloak() {
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

	GLTexture WingBlue("diamond.bmp");
	WingBlue.start();
	glPushMatrix();
	White.call();
	glBegin(GL_POLYGON);
	glVertex3f(0,3,0);
	glNormal3f(0, 3, 0);
	glVertex3f(-4, 7, 0);
	glNormal3f(-4, 7, 0);
	glVertex3f(-11, 7, 0);
	glNormal3f(-11, 7, 0);
	glEnd();
	glPopMatrix();
	WingBlue.end();

	glPushMatrix();
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(0, 3, 0);
	glNormal3f(0, 3, 0);
	glVertex3f(-4, 7, 0);
	glNormal3f(-4, 7, 0);
	glVertex3f(-11, 7, 0);
	glNormal3f(-11, 7, 0);
	glEnd();
	glPopMatrix();

	WingBlue.start();
	glPushMatrix();
	White.call();
	glBegin(GL_POLYGON);
	glVertex3f(0, 0, 0);
	glNormal3f(0, 0, 0);
	glVertex3f(-6, -2, 0);
	glNormal3f(-6, -2, 0);
	glVertex3f(-11, -11, 0);
	glNormal3f(-11, -11, 0);
	glEnd();
	glPopMatrix();
	WingBlue.end();

	glPushMatrix();
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(0, 0, 0);
	glNormal3f(0, 0, 0);
	glVertex3f(-6, -2, 0);
	glNormal3f(-6, -2, 0);
	glVertex3f(-11, -11, 0);
	glNormal3f(-11, -11, 0);
	glEnd();
	glPopMatrix();
}