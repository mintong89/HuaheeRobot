#include "Shape.h"
#include "ColorIntensity.h"
#include "GLTexture.h"

void Head() {
	ColorIntensity HeadGreen(0,160,62);
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
	ColorIntensity MouthBlue(0, 0, 255);
	ColorIntensity Yellow(245, 246, 0);
	ColorIntensity White(255, 255, 255);

	glLineWidth(4);

	glPushMatrix();
	glTranslatef(0, 5, 0);
	glBegin(GL_POLYGON);
	Gold.call();
	glVertex3f(-4, 4, 5.75);
	glNormal3f(-4, 4, 5.75);
	glVertex3f(0, 1, 6);
	glNormal3f(0, 1, 6);
	glVertex3f(-1, 0, 6);
	glNormal3f(-1, 0, 6);
	glVertex3f(-1, 0, 5.5);
	glNormal3f(-1, 0, 5.5);
	glVertex3f(0,  1, 5.5);
	glNormal3f(0, 1, 5.5);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 5, 0);
	glBegin(GL_LINE_LOOP);
	Black.call();
	glVertex3f(-4, 4, 5.75);
	glNormal3f(-4, 4, 5.75);
	glVertex3f(0, 1, 6);
	glNormal3f(0, 1, 6);
	glVertex3f(-1, 0, 6);
	glNormal3f(-1, 0, 6);
	glVertex3f(-1, 0, 5.5);
	glNormal3f(-1, 0, 5.5);
	glVertex3f(0, 1, 5.5);
	glNormal3f(0, 1, 5.5);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 5, 0);
	glBegin(GL_POLYGON);
	Gold.call();
	glVertex3f(4, 4, 5.75);
	glNormal3f(4, 4, 5.75);
	glVertex3f(0, 1, 6);
	glNormal3f(0, 1, 6);
	glVertex3f(1, 0, 6);
	glNormal3f(1, 0, 6);
	glVertex3f(1, 0, 5.5);
	glNormal3f(1, 0, 5.5);
	glVertex3f(0, 1, 5.5);
	glNormal3f(0, 1, 5.5);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 5, 0);
	glBegin(GL_LINE_LOOP);
	Black.call();
	glVertex3f(4, 4, 5.75);
	glNormal3f(4, 4, 5.75);
	glVertex3f(0, 1, 6);
	glNormal3f(0, 1, 6);
	glVertex3f(1, 0, 6);
	glNormal3f(1, 0, 6);
	glVertex3f(1, 0, 5.5);
	glNormal3f(1, 0, 5.5);
	glVertex3f(0, 1, 5.5);
	glNormal3f(0, 1, 5.5);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0,5,0);
	Yellow.call();
	glBegin(GL_POLYGON);
	glVertex3f(0, 1, 6);
	glNormal3f(0, 1, 6);
	glVertex3f(1, 0, 6);
	glNormal3f(1, 0, 6);
	glVertex3f(0, -1, 6);
	glNormal3f(0, -1, 6);
	glVertex3f(-1, 0, 6);
	glNormal3f(-1, 0, 6);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 5, 0);
	Yellow.call();
	glBegin(GL_POLYGON);
	glVertex3f(0, 1, 5.5);
	glNormal3f(0, 1, 5.5);
	glVertex3f(1, 0, 5.5);
	glNormal3f(1, 0, 5.5);
	glVertex3f(0, -1, 5.5);
	glNormal3f(0, -1, 5.5);
	glVertex3f(-1, 0, 5.5);
	glNormal3f(-1, 0, 5.5);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 5, 0);
	Yellow.call();
	glBegin(GL_QUADS);
	glVertex3f(0, 1, 6);
	glNormal3f(0, 1, 6);
	glVertex3f(1, 0, 6);
	glNormal3f(1, 0, 6);
	glVertex3f(1, 0, 5.5);
	glNormal3f(1, 0, 5.5);
	glVertex3f(0, 1, 5.5);
	glNormal3f(0, 1, 5.5);

	glVertex3f(1, 0, 6);
	glNormal3f(1, 0, 6);
	glVertex3f(0, -1, 6);
	glNormal3f(0, -1, 6);
	glVertex3f(0, -1, 5.5);
	glNormal3f(0, -1, 5.5);
	glVertex3f(1, 0, 5.5);
	glNormal3f(1, 0, 5.5);

	glVertex3f(0, -1, 6);
	glNormal3f(0, -1, 6);
	glVertex3f(-1, 0, 6);
	glNormal3f(-1, 0, 6);
	glVertex3f(-1, 0, 5.5);
	glNormal3f(-1, 0, 5.5);
	glVertex3f(0, -1, 5.5);
	glNormal3f(0, -1, 5.5);

	glVertex3f(0, 1, 6);
	glNormal3f(0, 1, 6);
	glVertex3f(-1, 0, 6);
	glNormal3f(-1, 0, 6);
	glVertex3f(-1, 0, 5.5);
	glNormal3f(-1, 0, 5.5);
	glVertex3f(0, 1, 5.5);
	glNormal3f(0, 1, 5.5);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 5, 0);
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(0, 1, 6);
	glNormal3f(0, 1, 6);
	glVertex3f(1, 0, 6);
	glNormal3f(1, 0, 6);
	glVertex3f(1, 0, 5.5);
	glNormal3f(1, 0, 5.5);
	glVertex3f(0, 1, 5.5);
	glNormal3f(0, 1, 5.5);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 5, 0);
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(1, 0, 6);
	glNormal3f(1, 0, 6);
	glVertex3f(0, -1, 6);
	glNormal3f(0, -1, 6);
	glVertex3f(0, -1, 5.5);
	glNormal3f(0, -1, 5.5);
	glVertex3f(1, 0, 5.5);
	glNormal3f(1, 0, 5.5);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 5, 0);
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(0, -1, 6);
	glNormal3f(0, -1, 6);
	glVertex3f(-1, 0, 6);
	glNormal3f(-1, 0, 6);
	glVertex3f(-1, 0, 5.5);
	glNormal3f(-1, 0, 5.5);
	glVertex3f(0, -1, 5.5);
	glNormal3f(0, -1, 5.5);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 5, 0);
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(0, 1, 6);
	glNormal3f(0, 1, 6);
	glVertex3f(-1, 0, 6);
	glNormal3f(-1, 0, 6);
	glVertex3f(-1, 0, 5.5);
	glNormal3f(-1, 0, 5.5);
	glVertex3f(0, 1, 5.5);
	glNormal3f(0, 1, 5.5);
	glEnd();
	glPopMatrix();

	GLTexture GreenMetal("greenmetal.bmp");
	GreenMetal.start();
	glPushMatrix();
	glRotatef(45, 0, 1, 0);
	GLdouble GHC[] = { -4,4,4,-4,4,-4 };
	White.call();
	Cuboid(GHC[0], GHC[1], GHC[2], GHC[3], GHC[4], GHC[5]);
	Black.call();
	Cuboid(GHC[0], GHC[1], GHC[2], GHC[3], GHC[4], GHC[5],GL_LINE_LOOP);
	glPopMatrix();
	GreenMetal.end();

	GLTexture Blue("bluemetal.bmp");
	Blue.start();
	glPushMatrix();
	glRotatef(90, 1, 0, 0);
	GLdouble LMHC[] = { -4,-5,4,3,4,-1 };
	White.call();
	Cuboid(LMHC[0], LMHC[1], LMHC[2], LMHC[3], LMHC[4], LMHC[5]);
	Black.call();
	Cuboid(LMHC[0], LMHC[1], LMHC[2], LMHC[3], LMHC[4], LMHC[5], GL_LINE_LOOP);
	glPopMatrix();
	Blue.end();

	Blue.start();
	glPushMatrix();
	glRotatef(90, 1, 0, 0);
	GLdouble RMHC[] = { 4,5,4,3,4,-1 };
	White.call();
	Cuboid(RMHC[0], RMHC[1], RMHC[2], RMHC[3], RMHC[4], RMHC[5]);
	Black.call();
	Cuboid(RMHC[0], RMHC[1], RMHC[2], RMHC[3], RMHC[4], RMHC[5], GL_LINE_LOOP);
	glPopMatrix();
	Blue.end();

	////eye
	GLTexture EyeGold("yellow.bmp");
	EyeGold.start();
	glPushMatrix();
	GLdouble EHC[] = { 1,4,3,2,5,0 };
	Gold.call();
	Cuboid(EHC[0], EHC[1], EHC[2], EHC[3], EHC[4], EHC[5]);
	Black.call();
	Cuboid(EHC[0], EHC[1], EHC[2], EHC[3], EHC[4], EHC[5], GL_LINE_LOOP);
	glPopMatrix();
	EyeGold.end();

	EyeGold.start();
	glPushMatrix();
	GLdouble ELHC[] = { -1,-4,3,2,5,0 };
	Gold.call();
	Cuboid(ELHC[0], ELHC[1], ELHC[2], ELHC[3], ELHC[4], ELHC[5]);
	Black.call();
	Cuboid(ELHC[0], ELHC[1], ELHC[2], ELHC[3], ELHC[4], ELHC[5], GL_LINE_LOOP);
	glPopMatrix();
	EyeGold.end();

	GreenMetal.start();
	glPushMatrix();
	NewGreen.call();
	glTranslatef(0, 2, 0);
	glBegin(GL_POLYGON);
	glVertex3f(0, -2, 8);
	glNormal3f(0, -2, 8);
	glVertex3f(4, -1, 4);
	glNormal3f(4, -1, 4);
	glVertex3f(-4, -1, 4);
	glNormal3f(-4, -1, 4);
	glEnd();
	glPopMatrix();
	GreenMetal.end();

	glPushMatrix();
	Black.call();
	glTranslatef(0, 2, 0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(0, -2, 8);
	glNormal3f(0, -2, 8);
	glVertex3f(4, -1, 4);
	glNormal3f(4, -1, 4);
	glVertex3f(-4, -1, 4);
	glNormal3f(-4, -1, 4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	NewGreen.call();
	glTranslatef(0, -2, 0);
	glBegin(GL_POLYGON);
	glVertex3f(0, -2, 8);
	glNormal3f(0, -2, 8);
	glVertex3f(4, -1, 4);
	glNormal3f(4, -1, 4);
	glVertex3f(-4, -1, 4);
	glNormal3f(-4, -1, 4);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	Black.call();
	glTranslatef(0, -2, 0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(0, -2, 8);
	glNormal3f(0, -2, 8);
	glVertex3f(4, -1, 4);
	glNormal3f(4, -1, 4);
	glVertex3f(-4, -1, 4);
	glNormal3f(-4, -1, 4);
	glEnd();
	glPopMatrix();

	//other
	GLTexture HeadGrey("grey.bmp");
	HeadGrey.start();
	glPushMatrix();
	glTranslatef(0, -3, 0);
	White.call();
	glBegin(GL_POLYGON);
	glVertex3f(4, 4, 4);
	glNormal3f(4, 4, 4);
	glVertex3f(4, -1, 4);
	glNormal3f(4, -1, 4);
	glVertex3f(0, -2, 8);
	glNormal3f(0, -2, 8);
	glVertex3f(0, 3, 8);
	glNormal3f(0, 3, 8);
	glEnd();
	glPopMatrix();
	HeadGrey.end();

	glPushMatrix();
	glTranslatef(0, -3, 0);
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(4, 4, 4);
	glNormal3f(4, 4, 4);
	glVertex3f(4, -1, 4);
	glNormal3f(4, -1, 4);
	glVertex3f(0, -2, 8);
	glNormal3f(0, -2, 8);
	glVertex3f(0, 3, 8);
	glNormal3f(0, 3, 8);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, -3, 0);
	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(-4, 4, 4);
	glNormal3f(-4, 4, 4);
	glVertex3f(-4, -1, 4);
	glNormal3f(-4, -1, 4);
	glVertex3f(0, -2, 8);
	glNormal3f(0, -2, 8);
	glVertex3f(0, 3, 8);
	glNormal3f(0, 3, 8);
	glEnd();
	glPopMatrix();

	HeadGrey.start();
	glPushMatrix();
	glTranslatef(0, -3, 0);
	White.call();
	glBegin(GL_POLYGON);
	glVertex3f(-4, 4, 4);
	glNormal3f(-4, 4, 4);
	glVertex3f(-4, -1, 4);
	glNormal3f(-4, -1, 4);
	glVertex3f(0, -2, 8);
	glNormal3f(0, -2, 8);
	glVertex3f(0, 3, 8);
	glNormal3f(0, 3, 8);
	glEnd();
	glPopMatrix();
	HeadGrey.end();

	//right ear
	glPushMatrix();
	glBegin(GL_POLYGON);
	NeoDarkGreen.call();
	glVertex3f(-6, 3, 2);
	glNormal3f(-6, 3, 2);
	glVertex3f(-6, -3, 2);
	glNormal3f(-6, -3, 2);
	glVertex3f(-8, -2, 2);
	glNormal3f(-8, -2, 2);
	glVertex3f(-8, 2, 2);
	glNormal3f(-8, 2, 2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	NeoDarkGreen.call();
	glVertex3f(-6, 3, -2);
	glNormal3f(-6, 3, -2);
	glVertex3f(-6, -3, -2);
	glNormal3f(-6, -3, -2);
	glVertex3f(-8, -2, -2);
	glNormal3f(-8, -2, -2);
	glVertex3f(-8, 2, -2);
	glNormal3f(-8, 2, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_LINE_LOOP);
	Black.call();
	glVertex3f(-6, 3, 2);
	glNormal3f(-6, 3, 2);
	glVertex3f(-6, -3, 2);
	glNormal3f(-6, -3, 2);
	glVertex3f(-8, -2, 2);
	glNormal3f(-8, -2, 2);
	glVertex3f(-8, 2, 2);
	glNormal3f(-8, 2, 2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_LINE_LOOP);
	Black.call();
	glVertex3f(-6, 3, -2);
	glNormal3f(-6, 3, -2);
	glVertex3f(-6, -3, -2);
	glNormal3f(-6, -3, -2);
	glVertex3f(-8, -2, -2);
	glNormal3f(-8, -2, -2);
	glVertex3f(-8, 2, -2);
	glNormal3f(-8, 2, -2);
	glEnd();
	glPopMatrix();

	//left ear
	glPushMatrix();
	glBegin(GL_POLYGON);
	NeoDarkGreen.call();
	glVertex3f(6, 3, 2);
	glNormal3f(6, 3, 2);
	glVertex3f(6, -3, 2);
	glNormal3f(6, -3, 2);
	glVertex3f(8, -2, 2);
	glNormal3f(8, -2, 2);
	glVertex3f(8, 2, 2);
	glNormal3f(8, 2, 2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_LINE_LOOP);
	Black.call();
	glVertex3f(6, 3, 2);
	glNormal3f(6, 3, 2);
	glVertex3f(6, -3, 2);
	glNormal3f(6, -3, 2);
	glVertex3f(8, -2, 2);
	glNormal3f(8, -2, 2);
	glVertex3f(8, 2, 2);
	glNormal3f(8, 2, 2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	NeoDarkGreen.call();
	glVertex3f(6, 3, -2);
	glNormal3f(6, 3, -2);
	glVertex3f(6, -3, -2);
	glNormal3f(6, -3, -2);
	glVertex3f(8, -2, -2);
	glNormal3f(8, -2, -2);
	glVertex3f(8, 2, -2);
	glNormal3f(8, 2, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_LINE_LOOP);
	Black.call();
	glVertex3f(6, 3, -2);
	glNormal3f(6, 3, -2);
	glVertex3f(6, -3, -2);
	glNormal3f(6, -3, -2);
	glVertex3f(8, -2, -2);
	glNormal3f(8, -2, -2);
	glVertex3f(8, 2, -2);
	glNormal3f(8, 2, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	NeoDarkGreen.call();
	glVertex3f(6, 3, 2);
	glNormal3f(6, 3, 2);
	glVertex3f(8, 2, 2);
	glNormal3f(8, 2, 2);
	glVertex3f(8, 2, -2);
	glNormal3f(8, 2, -2);
	glVertex3f(6, 3, -2);
	glNormal3f(6, 3, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_LINE_LOOP);
	Black.call();
	glVertex3f(6, 3, 2);
	glNormal3f(6, 3, 2);
	glVertex3f(8, 2, 2);
	glNormal3f(8, 2, 2);
	glVertex3f(8, 2, -2);
	glNormal3f(8, 2, -2);
	glVertex3f(6, 3, -2);
	glNormal3f(6, 3, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	NeoDarkGreen.call();
	glVertex3f(6, -3, 2);
	glNormal3f(6, -3, 2);
	glVertex3f(8, -2, 2);
	glNormal3f(8, -2, 2);
	glVertex3f(8, -2, -2);
	glNormal3f(8, -2, -2);
	glVertex3f(6, -3, -2);
	glNormal3f(6, -3, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_LINE_LOOP);
	Black.call();
	glVertex3f(6, -3, 2);
	glNormal3f(6, -3, 2);
	glVertex3f(8, -2, 2);
	glNormal3f(8, -2, 2);
	glVertex3f(8, -2, -2);
	glNormal3f(8, -2, -2);
	glVertex3f(6, -3, -2);
	glNormal3f(6, -3, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	NeoDarkGreen.call();
	glVertex3f(-6, -3, 2);
	glNormal3f(-6, -3, 2);
	glVertex3f(-8, -2, 2);
	glNormal3f(-8, -2, 2);
	glVertex3f(-8, -2, -2);
	glNormal3f(-8, -2, -2);
	glVertex3f(-6, -3, -2);
	glNormal3f(-6, -3, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_LINE_LOOP);
	Black.call();
	glVertex3f(-6, -3, 2);
	glNormal3f(-6, -3, 2);
	glVertex3f(-8, -2, 2);
	glNormal3f(-8, -2, 2);
	glVertex3f(-8, -2, -2);
	glNormal3f(-8, -2, -2);
	glVertex3f(-6, -3, -2);
	glNormal3f(-6, -3, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	NeoDarkGreen.call();
	glVertex3f(-6, 3, 2);
	glNormal3f(-6, 3, 2);
	glVertex3f(-8, 2, 2);
	glNormal3f(-8, 2, 2);
	glVertex3f(-8, 2, -2);
	glNormal3f(-8, 2, -2);
	glVertex3f(-6, 3, -2);
	glNormal3f(-6, 3, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_LINE_LOOP);
	Black.call();
	glVertex3f(-6, 3, 2);
	glNormal3f(-6, 3, 2);
	glVertex3f(-8, 2, 2);
	glNormal3f(-8, 2, 2);
	glVertex3f(-8, 2, -2);
	glNormal3f(-8, 2, -2);
	glVertex3f(-6, 3, -2);
	glNormal3f(-6, 3, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	NeoDarkGreen.call();
	glVertex3f(6, 3, 2);
	glNormal3f(6, 3, 2);
	glVertex3f(8, 2, 2);
	glNormal3f(8, 2, 2);
	glVertex3f(8, 2, -2);
	glNormal3f(8, 2, -2);
	glVertex3f(6, 3, -2);
	glNormal3f(6, 3, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_LINE_LOOP);
	Black.call();
	glVertex3f(6, 3, 2);
	glNormal3f(6, 3, 2);
	glVertex3f(8, 2, 2);
	glNormal3f(8, 2, 2);
	glVertex3f(8, 2, -2);
	glNormal3f(8, 2, -2);
	glVertex3f(6, 3, -2);
	glNormal3f(6, 3, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	NeoDarkGreen.call();
	glVertex3f(8, -2, 2);
	glNormal3f(8, -2, 2);
	glVertex3f(8, 2, 2);
	glNormal3f(8, 2, 2);
	glVertex3f(8, 2, -2);
	glNormal3f(8, 2, -2);
	glVertex3f(8, -2, -2);
	glNormal3f(8, -2, -2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	NeoDarkGreen.call();
	glVertex3f(-8, -2, 2);
	glNormal3f(-8, -2, 2);
	glVertex3f(-8, 2, 2);
	glNormal3f(-8, 2, 2);
	glVertex3f(-8, 2, -2);
	glNormal3f(-8, 2, -2);
	glVertex3f(-8, -2, -2);
	glNormal3f(-8, -2, -2);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glRotatef(90, 0, 1, 0);
	glTranslatef(0, 0, 4);
	GLdouble RGHC[] = { -6,5,5,-4,1,2 };
	HeadGreen.call();
	Cuboid(RGHC[0], RGHC[1], RGHC[2], RGHC[3], RGHC[4], RGHC[5]);
	Black.call();
	Cuboid(RGHC[0], RGHC[1], RGHC[2], RGHC[3], RGHC[4], RGHC[5], GL_LINE_LOOP);
	glPopMatrix();
	
	glPushMatrix();
	glRotatef(90, 0, 1, 0);
	glTranslatef(0, 0, -4);
	GLdouble LGHC[] = { -6,5,5,-4,-1,-2 };
	HeadGreen.call();
	Cuboid(LGHC[0], LGHC[1], LGHC[2], LGHC[3], LGHC[4], LGHC[5]);
	Black.call();
	Cuboid(LGHC[0], LGHC[1], LGHC[2], LGHC[3], LGHC[4], LGHC[5], GL_LINE_LOOP);
	glPopMatrix();

	glPushMatrix();
	GLdouble BHC[] = { -7,7,6,5,5,-4 };
	Grey.call();
	Cuboid(BHC[0], BHC[1], BHC[2], BHC[3], BHC[4], BHC[5]);
	Black.call();
	Cuboid(BHC[0], BHC[1], BHC[2], BHC[3], BHC[4], BHC[5], GL_LINE_LOOP);
	glPopMatrix();

	glPushMatrix();
	glRotatef(-90, 0, 1, 0);
	glTranslatef(3, 0, 0);
	GLdouble BBHC[] = { -7,-9,6,-4,7,-7 };
	Grey.call();
	Cuboid(BBHC[0], BBHC[1], BBHC[2], BBHC[3], BBHC[4], BBHC[5]);
	Black.call();
	Cuboid(BBHC[0], BBHC[1], BBHC[2], BBHC[3], BBHC[4], BBHC[5], GL_LINE_LOOP);
	glPopMatrix();


}