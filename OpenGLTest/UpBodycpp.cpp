#include "Shape.h"
#include "ColorIntensity.h"
#include "GLTexture.h"

void UpBody() {
	ColorIntensity Black(0, 0, 0);
	ColorIntensity Gold(255, 161, 10);
	ColorIntensity DarkGreen(16, 176, 63);
	ColorIntensity NewGreen(2, 225, 112);
	ColorIntensity NeoDarkGreen(2, 111, 34);
	ColorIntensity LightkGreen(0, 233, 239);
	ColorIntensity Grey(144,144,144);
	ColorIntensity NeoGrey(93, 93, 93);
	ColorIntensity BackYellow(253, 187, 0);
	ColorIntensity BackGreen(0, 193, 126);
	ColorIntensity ArmorGreen(0, 139, 91);
	ColorIntensity White("FFFFFF");

	glLineWidth(4);

	glPushMatrix();
	NewGreen.call();
	glBegin(GL_POLYGON);
	glVertex3f(-7, 3, 3);
	glNormal3f(-7, 3, 3);
	glVertex3f(-7, 5, 0);
	glNormal3f(-7, 5, 0);
	glVertex3f(-7, 5, -3);
	glNormal3f(-7, 5, -3);
	glVertex3f(7, 5, -3);
	glNormal3f(7, 5, -3);
	glVertex3f(7, 5, 0);
	glNormal3f(7, 5, 0);
	glVertex3f(7, 3, 3);
	glNormal3f(7, 3, 3);
	glEnd();

	NewGreen.call();
	glBegin(GL_POLYGON);
	glVertex3f(-7, 3, 3);
	glNormal3f(-7, 3, 3);
	glVertex3f(-7, 5, 0);
	glNormal3f(-7, 5, 0);
	glVertex3f(-7, 5, -3);
	glNormal3f(-7, 5, -3);
	glVertex3f(-7, 3, -3);
	glNormal3f(-7, 3, -3);
	glEnd();

	NewGreen.call();
	glBegin(GL_POLYGON);
	glVertex3f(7, 3, 3);
	glNormal3f(7, 3, 3);
	glVertex3f(7, 5, 0);
	glNormal3f(7, 5, 0);
	glVertex3f(7, 5, -3);
	glNormal3f(7, 5, -3);
	glVertex3f(7, 3, -3);
	glNormal3f(7, 3, -3);
	glEnd();

	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(-7, 3, 3);
	glNormal3f(-7, 3, 3);
	glVertex3f(-7, 5, 0);
	glNormal3f(-7, 5, 0);
	glVertex3f(-7, 5, -3);
	glNormal3f(-7, 5, -3);
	glVertex3f(7, 5, -3);
	glNormal3f(7, 5, -3);
	glVertex3f(7, 5, 0);
	glNormal3f(7, 5, 0);
	glVertex3f(7, 3, 3);
	glNormal3f(7, 3, 3);
	glEnd();

	Black.call();
	glBegin(GL_LINES);
	glVertex3f(-7, 5, 0);
	glNormal3f(-7, 5, 0);
	glVertex3f(7, 5, 0);
	glNormal3f(7, 5, 0);
	glVertex3f(7, 5, -3);
	glNormal3f(7, 5, -3);
	glVertex3f(7, 3, -3);
	glNormal3f(7, 3, -3);
	glVertex3f(-7, 5, -3);
	glNormal3f(-7, 5, -3);
	glVertex3f(-7, 3, -3);
	glNormal3f(-7, 3, -3);
	glVertex3f(-7, 3, -3);
	glNormal3f(-7, 3, -3);
	glVertex3f(-7, 3, 3);
	glNormal3f(-7, 3, 3);
	glVertex3f(7, 3, -3);
	glNormal3f(7, 3, -3);
	glVertex3f(7, 3, 3);
	glNormal3f(7, 3, 3);
	glEnd();
	glPopMatrix();

	GLTexture Yellow("yellow.bmp");
	Yellow.start();
	glPushMatrix();
	White.call();
	GLdouble BHC[] = { -7,7,7,0,-3,-4 };
	Cuboid(BHC[0], BHC[1], BHC[2], BHC[3], BHC[4], BHC[5]);
	Black.call();
	Cuboid(BHC[0], BHC[1], BHC[2], BHC[3], BHC[4], BHC[5], GL_LINE_LOOP);
	glPopMatrix();
	Yellow.end();

	glPushMatrix();
	BackGreen.call();
	GLdouble GHC[] = { -5,5,7,0,-4,-5 };
	Cuboid(GHC[0], GHC[1], GHC[2], GHC[3], GHC[4], GHC[5]);
	Black.call();
	Cuboid(GHC[0], GHC[1], GHC[2], GHC[3], GHC[4], GHC[5], GL_LINE_LOOP);
	glPopMatrix();

	glPushMatrix();
	Grey.call();
	glBegin(GL_POLYGON);
	glVertex3f(-4, 7, -5.2);
	glNormal3f(-4, 7, -5.2);
	glVertex3f(4, 7, -5.2);
	glNormal3f(4, 7, -5.2);
	glVertex3f(5, 3.5, -5.2);
	glNormal3f(5, 3.5, -5.2);
	glVertex3f(4, 0, -5.2);
	glNormal3f(4, 0, -5.2);
	glVertex3f(-4, 0, -5.2);
	glNormal3f(-4, 0, -5.2);
	glVertex3f(-5, 3.5, -5.2);
	glNormal3f(-5, 3.5, -5.2);
	glEnd();

	Black.call();
	glBegin(GL_LINE_LOOP);
	glVertex3f(-4, 7, -5.2);
	glNormal3f(-4, 7, -5.2);
	glVertex3f(4, 7, -5.2);
	glNormal3f(4, 7, -5.2);
	glVertex3f(5, 3.5, -5.2);
	glNormal3f(5, 3.5, -5.2);
	glVertex3f(4, 0, -5.2);
	glNormal3f(4, 0, -5.2);
	glVertex3f(-4, 0, -5.2);
	glNormal3f(-4, 0, -5.2);
	glVertex3f(-5, 3.5, -5.2);
	glNormal3f(-5, 3.5, -5.2);
	glEnd();
	glPopMatrix();

	GLTexture Green("greenmetal.bmp");
	Green.start();
	glPushMatrix();
	White.call();
	GLdouble ULHC[] = { -7.5,-5,0,8.5,-4,-5 };
	Cuboid(ULHC[0], ULHC[1], ULHC[2], ULHC[3], ULHC[4], ULHC[5]);
	Black.call();
	Cuboid(ULHC[0], ULHC[1], ULHC[2], ULHC[3], ULHC[4], ULHC[5], GL_LINE_LOOP);
	glPopMatrix();
	Green.end();

	Green.start();
	glPushMatrix();
	White.call();
	GLdouble URHC[] = { 7.5,5,0,8.5,-4,-5 };
	Cuboid(URHC[0], URHC[1], URHC[2], URHC[3], URHC[4], URHC[5]);
	Black.call();
	Cuboid(URHC[0], URHC[1], URHC[2], URHC[3], URHC[4], URHC[5], GL_LINE_LOOP);
	glPopMatrix();
	Green.end();
	
	Green.start();
	glPushMatrix();
	White.call();
	GLdouble OHC[] = { -7,7,3,0,3,-3 };
	Cuboid(OHC[0], OHC[1], OHC[2], OHC[3], OHC[4], OHC[5]);
	Black.call();
	Cuboid(OHC[0], OHC[1], OHC[2], OHC[3], OHC[4], OHC[5],GL_LINE_LOOP);
	Green.end();

	glPushMatrix();
	NeoDarkGreen.call();
	GLdouble SHC[] = { -5,5,0,-2,3,-3 };
	Cuboid(SHC[0], SHC[1], SHC[2], SHC[3], SHC[4], SHC[5]);
	Black.call();
	Cuboid(SHC[0], SHC[1], SHC[2], SHC[3], SHC[4], SHC[5], GL_LINE_LOOP);
	glPopMatrix();

	NeoGrey.call();
	GLdouble UHC[] = { -4.5,4.5,-2,-3,2.5,-2.5 };
	Cuboid(UHC[0], UHC[1], UHC[2], UHC[3], UHC[4], UHC[5]);
	Black.call();
	Cuboid(UHC[0], UHC[1], UHC[2], UHC[3], UHC[4], UHC[5], GL_LINE_LOOP);

	NeoGrey.call();
	GLdouble UHC1[] = { -4,4,-3,-4,2.3,-2.3 };
	Cuboid(UHC1[0], UHC1[1], UHC1[2], UHC1[3], UHC1[4], UHC1[5]);
	Black.call();
	Cuboid(UHC1[0], UHC1[1], UHC1[2], UHC1[3], UHC1[4], UHC1[5], GL_LINE_LOOP);

	NeoGrey.call();
	GLdouble UHC2[] = { -3.5,3.5,-4,-5,2.3,-2.3 };
	Cuboid(UHC2[0], UHC2[1], UHC2[2], UHC2[3], UHC2[4], UHC2[5]);
	Black.call();
	Cuboid(UHC2[0], UHC2[1], UHC2[2], UHC2[3], UHC2[4], UHC2[5], GL_LINE_LOOP);

	NeoGrey.call();
	GLdouble UHC3[] = { -3,3,-5,-6,2,-2 };
	Cuboid(UHC3[0], UHC3[1], UHC3[2], UHC3[3], UHC3[4], UHC3[5]);
	Black.call();
	Cuboid(UHC3[0], UHC3[1], UHC3[2], UHC3[3], UHC3[4], UHC3[5], GL_LINE_LOOP);
	glPopMatrix();

	GLTexture GreenDiamond("diamond.bmp");
	GreenDiamond.start();
	glPushMatrix();
	glTranslatef(0, 0, 4);
	White.call();
	Sphere(2,true);
	glPopMatrix();
	GreenDiamond.end();

	GLTexture YellowDiamond1("yellow.bmp");
	YellowDiamond1.start();
	glPushMatrix();
	glTranslatef(0, 0, 4.1);
	White.call();
	Cylinder(2, 2, 1.5,true);
	glPopMatrix();
	YellowDiamond1.end();

	GLTexture YellowDiamond("yellow.bmp");
	YellowDiamond.start();
	glPushMatrix();
	glTranslatef(0, 0, 5.3);
	White.call();
	Circle(0, 0, 1.9);
	glPopMatrix();
	YellowDiamond.end();

	GLTexture GreyMetal("grey.bmp");
	GLdouble FHC[] = { -3.5,3.5,3.5,-3.5,3,2.5 };
	glPushMatrix();
	glRotatef(45, 0, 0, 1);
	glTranslatef(0, 0, 0.5);
	White.call();
	Cuboid(FHC[0], FHC[1], FHC[2], FHC[3], FHC[4], FHC[5]);
	Black.call();
	Cuboid(FHC[0], FHC[1], FHC[2], FHC[3], FHC[4], FHC[5], GL_LINE_LOOP);
	glPopMatrix();
	GreyMetal.end();

	glPushMatrix();
	glRotatef(-45, 0, 0, 1);
	glTranslatef(0, 0, 0.5);
	glBegin(GL_LINES);
	glVertex3f(-3.5, 3.5, 3.2);
	glNormal3f(-3.5, 3.5, 3.2);
	glVertex3f(3.5, -3.5, 3.2);
	glNormal3f(3.5, -3.5, 3.2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glRotatef(45, 0, 0, 1);
	glTranslatef(0, 0, 0.5);
	glBegin(GL_LINES);
	glVertex3f(-3.5, 3.5, 3.2);
	glNormal3f(-3.5, 3.5, 3.2);
	glVertex3f(3.5, -3.5, 3.2);
	glNormal3f(3.5, -3.5, 3.2);
	glEnd();
	glPopMatrix();

	GreyMetal.start();
	GLdouble FHC2[] = { -3,3,3,-3,3,2.5 };
	glPushMatrix();
	glRotatef(45, 0, 0, 1);
	glTranslatef(0, 0, 1);
	White.call();
	Cuboid(FHC2[0], FHC2[1], FHC2[2], FHC2[3], FHC2[4], FHC2[5]);
	Black.call();
	Cuboid(FHC2[0], FHC2[1], FHC2[2], FHC2[3], FHC2[4], FHC2[5], GL_LINE_LOOP);
	glPopMatrix();
	GreyMetal.end();

	glPushMatrix();
	glRotatef(-45, 0, 0, 1);
	glTranslatef(0, 0, 1);
	glBegin(GL_LINES);
	glVertex3f(-3, 3, 3.2);
	glNormal3f(-3, 3, 3.2);
	glVertex3f(3, -3, 3.2);
	glNormal3f(3, -3, 3.2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glRotatef(45, 0, 0, 1);
	glTranslatef(0, 0, 1);
	glBegin(GL_LINES);
	glVertex3f(3, -3, 3.2);
	glNormal3f(3, -3, 3.2);
	glVertex3f(-3, 3, 3.2);
	glNormal3f(-3, 3, 3.2);
	glEnd();
	glPopMatrix();

	GreyMetal.start();
	GLdouble FHC3[] = { -2.5,2.5,2.5,-2.5,3,2.5 };
	glPushMatrix();
	glRotatef(45, 0, 0, 1);
	glTranslatef(0, 0, 1.5);
	White.call();
	Cuboid(FHC3[0], FHC3[1], FHC3[2], FHC3[3], FHC3[4], FHC3[5]);
	Black.call();
	Cuboid(FHC3[0], FHC3[1], FHC3[2], FHC3[3], FHC3[4], FHC3[5], GL_LINE_LOOP);
	glPopMatrix();
	GreyMetal.end();

	glPushMatrix();
	glRotatef(-45, 0, 0, 1);
	glTranslatef(0, 0, 1.5);
	glBegin(GL_LINES);
	glVertex3f(-2.5, 2.5, 3.2);
	glNormal3f(-2.5, 2.5, 3.2);
	glVertex3f(2.5, -2.5, 3.2);
	glNormal3f(2.5, -2.5, 3.2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glRotatef(-45, 0, 0, 1);
	glTranslatef(0, 0, 1.5);
	glBegin(GL_LINES);
	glVertex3f(2.5, -2.5, 3.2);
	glNormal3f(2.5, -2.5, 3.2);
	glVertex3f(-2.5, 2.5, 3.2);
	glNormal3f(-2.5, 2.5, 3.2);
	glEnd();
	glPopMatrix();

	GreyMetal.start();
	GLdouble FHC4[] = { -2,2,2,-2,3,2.5 };
	glPushMatrix();
	glRotatef(45, 0, 0, 1);
	glTranslatef(0, 0, 2);
	White.call();
	Cuboid(FHC4[0], FHC4[1], FHC4[2], FHC4[3], FHC4[4], FHC4[5]);
	Black.call();
	Cuboid(FHC4[0], FHC4[1], FHC4[2], FHC4[3], FHC4[4], FHC4[5], GL_LINE_LOOP);
	glPopMatrix();
	GreyMetal.end();

	glPushMatrix();
	glRotatef(-45, 0, 0, 1);
	glTranslatef(0, 0, 1.5);
	glBegin(GL_LINES);
	glVertex3f(-2.5, 2.5, 3.2);
	glNormal3f(-2.5, 2.5, 3.2);
	glVertex3f(2.5, -2.5, 3.2);
	glNormal3f(2.5, -2.5, 3.2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glRotatef(45, 0, 0, 1);
	glTranslatef(0, 0, 1.5);
	glBegin(GL_LINES);
	glVertex3f(2.5, -2.5, 3.2);
	glNormal3f(2.5, -2.5, 3.2);
	glVertex3f(-2.5, 2.5, 3.2);
	glNormal3f(-2.5, 2.5, 3.2);
	glEnd();
	glPopMatrix();


	GLTexture GreenDiamond1("diamond.bmp");
	GreenDiamond1.start();
	glPushMatrix();
	glTranslatef(0, 3.5, -5);
	LightkGreen.call();
	Sphere(2,true);
	glPopMatrix();
	GreenDiamond1.end();

}