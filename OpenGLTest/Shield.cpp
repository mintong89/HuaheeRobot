#include "Shape.h"
#include "ColorIntensity.h"

void Shield() {
	ColorIntensity Black(0, 0, 0);
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

	glPushMatrix();
	glTranslatef(0, -4, 1.2);
	GLdouble BSHC[] = { -1.2,1.2,3.2,4.2,1.3,1 };
	NeoGrey.call();
	Cuboid(BSHC[0], BSHC[1], BSHC[2], BSHC[3], BSHC[4], BSHC[5]);
	Black.call();
	Cuboid(BSHC[0], BSHC[1], BSHC[2], BSHC[3], BSHC[4], BSHC[5], GL_LINE_LOOP);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, -4, 1.3);
	GLdouble LSHC[] = { -1,1,3.5,4,1.5,1 };
	Metal.call();
	Cuboid(LSHC[0], LSHC[1], LSHC[2], LSHC[3], LSHC[4], LSHC[5]);
	Black.call();
	Cuboid(LSHC[0], LSHC[1], LSHC[2], LSHC[3], LSHC[4], LSHC[5], GL_LINE_LOOP);
	glPopMatrix();

	glPushMatrix();
	NeoGrey.call();
	glTranslatef(0, 0, 0.1);
	glBegin(GL_POLYGON);
	glVertex3f(-2, 1.5, 1);
	glVertex3f(-3.5, -1.5, 1 );
	glVertex3f(-3.5, -2, 1);
	glVertex3f(-2, -8.5, 1);
	glVertex3f(2, -8.5, 1);
	glVertex3f(3.5, -2, 1);
	glVertex3f(3.5, -1.5, 1);
	glVertex3f(2, 1.5, 1);
	glEnd();
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(-2, 1.5, 1);
	glVertex3f(-3.5, -1.5, 1);
	glVertex3f(-3.5, -2, 1);
	glVertex3f(-2, -8.5, 1);
	glVertex3f(2, -8.5, 1);
	glVertex3f(3.5, -2, 1);
	glVertex3f(3.5, -1.5, 1);
	glVertex3f(2, 1.5, 1);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	UpShieldGreen.call();
	glBegin(GL_POLYGON);
	glVertex3f(-2, 1.5, 1);
	glVertex3f(-3.5, -2, 1);
	glVertex3f(-3.5, -2, 0.3);
	glVertex3f(-2, 1.5, 0.3);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(-2, 1.5, 1);
	glVertex3f(-3.5, -2, 1);
	glVertex3f(-3.5, -2, 0.3);
	glVertex3f(-2, 1.5, 0.3);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	UpShieldGreen.call();
	glBegin(GL_POLYGON);
	glVertex3f(2, 1.5, 1);
	glVertex3f(3.5, -2, 1);
	glVertex3f(3.5, -2, 0.3);
	glVertex3f(2, 1.5, 0.3);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(2, 1.5, 1);
	glVertex3f(3.5, -2, 1);
	glVertex3f(3.5, -2, 0.3);
	glVertex3f(2, 1.5, 0.3);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	NeoGrey.call();
	glTranslatef(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 1, 1);
	glVertex3f(-2.5, -1, 1);
	glVertex3f(-2.5, -1.5, 1);
	glVertex3f(-1, -8, 1);
	glVertex3f(1, -8, 1);
	glVertex3f(2.5, -1.5, 1);
	glVertex3f(2.5, -1, 1);
	glVertex3f(1, 1, 1);
	glEnd();
	UpShieldGreen.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(-1, 1, 1);
	glVertex3f(-2.5, -1, 1);
	glVertex3f(-2.5, -1.5, 1);
	glVertex3f(-1, -8, 1);
	glVertex3f(1, -8, 1);
	glVertex3f(2.5, -1.5, 1);
	glVertex3f(2.5, -1, 1);
	glVertex3f(1, 1, 1);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	ShieldGreen.call();
	glBegin(GL_POLYGON);
	glVertex3f(-3.5, -2, 1.1);
	glVertex3f(-2, -8.5, 1.1);
	glVertex3f(-1, -8, 2);
	glVertex3f(-2.5, -1.5, 2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	ShieldGreen.call();
	glBegin(GL_POLYGON);
	glVertex3f(-3.5, -2, 0.3);
	glVertex3f(-2, -8.5, 0.3);
	glVertex3f(-3.5, -11, 0.3);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	UpShieldGreen.call();
	glBegin(GL_POLYGON);
	glVertex3f(-3.7, -2, 0.2);
	glVertex3f(-2.2, -8.5, 0.2);
	glVertex3f(-3.7, -11, 0.2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	ShieldGreen.call();
	glBegin(GL_POLYGON);
	glVertex3f(3.5, -2, 0.3);
	glVertex3f(2, -8.5, 0.3);
	glVertex3f(3.5, -11, 0.3);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	UpShieldGreen.call();
	glBegin(GL_POLYGON);
	glVertex3f(3.7, -2, 0.2);
	glVertex3f(2.2, -8.5, 0.2);
	glVertex3f(3.7, -11, 0.2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(-3.5, -2, 0.3);
	glVertex3f(-2, -8.5, 0.3);
	glVertex3f(-3.5, -11, 0.3);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(3.5, -2, 0.3);
	glVertex3f(2, -8.5, 0.3);
	glVertex3f(3.5, -11, 0.3);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(-3.5, -2, 1.1);
	glVertex3f(-2, -8.5, 1.1);
	glVertex3f(-1, -8, 2);
	glVertex3f(-2.5, -1.5, 2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	ShieldGreen.call();
	glBegin(GL_POLYGON);
	glVertex3f(2, -8.5, 1.1);
	glVertex3f(3.5, -2, 1.1);
	glVertex3f(2.5, -1.5, 2);
	glVertex3f(1, -8, 2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(2, -8.5, 1.1);
	glVertex3f(3.5, -2, 1.1);
	glVertex3f(3.5, -2, 0.3);
	glVertex3f(2,-8.5,0.3);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	UpShieldGreen.call();
	glBegin(GL_POLYGON);
	glVertex3f(2, -8.5, 1.1);
	glVertex3f(3.5, -2, 1.1);
	glVertex3f(3.5, -2, 0.3);
	glVertex3f(2,-8.5,0.3);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(-2, -8.5, 1.1);
	glVertex3f(-3.5, -2, 1.1);
	glVertex3f(-3.5, -2, 0.3);
	glVertex3f(-2, -8.5, 0.3);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	UpShieldGreen.call();
	glBegin(GL_POLYGON);
	glVertex3f(-2, -8.5, 1.1);
	glVertex3f(-3.5, -2, 1.1);
	glVertex3f(-3.5, -2, 0.3);
	glVertex3f(-2, -8.5, 0.3);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(2, -8.5, 1.1);
	glVertex3f(3.5, -2, 1.1);
	glVertex3f(2.5, -1.5, 2);
	glVertex3f(1, -8, 2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	ShieldGreen.call();
	glBegin(GL_POLYGON);
	glVertex3f(-2, -8.5, 1.1);
	glVertex3f(2, -8.5, 1.1);
	glVertex3f(1, -8, 2);
	glVertex3f(-1, -8, 2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	UpShieldGreen.call();
	glBegin(GL_POLYGON);
	glVertex3f(-2, 1.5, 1.1);
	glVertex3f(2, 1.5, 1.1);
	glVertex3f(1, 1, 2);
	glVertex3f(-1, 1, 2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(-2, 1.5, 1.1);
	glVertex3f(2, 1.5, 1.1);
	glVertex3f(1, 1, 2);
	glVertex3f(-1, 1, 2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	UpShieldGreen.call();
	glBegin(GL_POLYGON);
	glVertex3f(-2, 1.5, 1.1);
	glVertex3f(2, 1.5, 1.1);
	glVertex3f(1, 1, 2);
	glVertex3f(-1, 1, 2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	UpShieldGreen.call();
	glBegin(GL_POLYGON);
	glVertex3f(-3.5, -1.5, 1.1);
	glVertex3f(-3.5, -2, 1.1);
	glVertex3f(-2.5, -1.5, 2);
	glVertex3f(-2.5, -1, 2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(-3.5, -1.5, 1.1);
	glVertex3f(-3.5, -2, 1.1);
	glVertex3f(-2.5, -1.5, 2);
	glVertex3f(-2.5, -1, 2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(3.5, -2, 1.1);
	glVertex3f(3.5, -1.5, 1.1);
	glVertex3f(2.5, -1, 2);
	glVertex3f(2.5, -1.5, 2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	UpShieldGreen.call();
	glBegin(GL_POLYGON);
	glVertex3f(3.5, -2, 1.1);
	glVertex3f(3.5, -1.5, 1.1);
	glVertex3f(2.5, -1, 2);
	glVertex3f(2.5, -1.5, 2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 2.7, 1.7);
	GLdouble DHC[] = { -3,3,-2,-4,0,-0.4 };
	NeoDarkGreen.call();
	Cuboid(DHC[0], DHC[1], DHC[2], DHC[3], DHC[4], DHC[5]);
	UpShieldGreen.call();
	Cuboid(DHC[0], DHC[1], DHC[2], DHC[3], DHC[4], DHC[5], GL_LINE_LOOP);
	glPopMatrix();
}