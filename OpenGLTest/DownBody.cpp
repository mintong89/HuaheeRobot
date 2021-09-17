#include "Shape.h"
#include "ColorIntensity.h"
#include "GLTexture.h"

void DownBody() {
	ColorIntensity White(255, 255, 255);
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

	glLineWidth(4);

	GLTexture GreyMetal("grey.bmp");
	GreyMetal.start();
	GLdouble FHC4[] = { -5,5,-1,-4,3,-1 };
	glPushMatrix();
	White.call();
	Cuboid(FHC4[0], FHC4[1], FHC4[2], FHC4[3], FHC4[4], FHC4[5]);
	Black.call();
	Cuboid(FHC4[0], FHC4[1], FHC4[2], FHC4[3], FHC4[4], FHC4[5], GL_LINE_LOOP);
	glPopMatrix();
	GreyMetal.end();

	glPushMatrix();
	GLdouble IHC[] = { -1.5,1.5,-1,-8.5,4.5,3 };
	Grey.call();
	Cuboid(IHC[0], IHC[1], IHC[2], IHC[3], IHC[4], IHC[5]);
	Black.call();
	Cuboid(IHC[0], IHC[1], IHC[2], IHC[3], IHC[4], IHC[5], GL_LINE_LOOP);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0, 0, -6);
	GLdouble BHC[] = { -1.5,1.5,-1,-6.5,4.5,3 };
	Grey.call();
	Cuboid(BHC[0], BHC[1], BHC[2], BHC[3], BHC[4], BHC[5]);
	Black.call();
	Cuboid(BHC[0], BHC[1], BHC[2], BHC[3], BHC[4], BHC[5], GL_LINE_LOOP);
	glPopMatrix();


	GreyMetal.start();
	glPushMatrix();
	glTranslatef(0, 0, -6);
	GLdouble LBHC[] = { -2.0,-4.5,-1,-9,4.5,3 };
	White.call();
	Cuboid(LBHC[0], LBHC[1], LBHC[2], LBHC[3], LBHC[4], LBHC[5]);
	Black.call();
	Cuboid(LBHC[0], LBHC[1], LBHC[2], LBHC[3], LBHC[4], LBHC[5], GL_LINE_LOOP);
	glPopMatrix();
	GreyMetal.end();

	GreyMetal.start();
	glPushMatrix();
	glTranslatef(0, 0, -6);
	GLdouble RBHC[] = { 2.0,4.5,-1,-9,4.5,3 };
	White.call();
	Cuboid(RBHC[0], RBHC[1], RBHC[2], RBHC[3], RBHC[4], RBHC[5]);
	Black.call();
	Cuboid(RBHC[0], RBHC[1], RBHC[2], RBHC[3], RBHC[4], RBHC[5], GL_LINE_LOOP);
	glPopMatrix();
	GreyMetal.end();

	GreyMetal.start();
	glPushMatrix();
	GLdouble FHC[] = { -1,1,-1,-3,5.5,4.5 };
	White.call();
	Cuboid(FHC[0], FHC[1], FHC[2], FHC[3], FHC[4], FHC[5]);
	Black.call();
	Cuboid(FHC[0], FHC[1], FHC[2], FHC[3], FHC[4], FHC[5], GL_LINE_LOOP);
	glPopMatrix();
	GreyMetal.end();

	GLTexture YellowDia("yellow.bmp");
	YellowDia.start();
	glPushMatrix();
	White.call();
	glTranslatef(6,-2.5,1.5);
	Sphere(1.5);
	glPopMatrix();
	YellowDia.end();

	GreyMetal.start();
	glPushMatrix();
	GLdouble LHC[] = { -6.5,-5.5,-4.5,-9.5, 4,1 };
	glTranslatef(0, 1, -1.4);
	White.call();
	Cuboid(LHC[0], LHC[1], LHC[2], LHC[3], LHC[4], LHC[5]);
	Black.call();
	Cuboid(LHC[0], LHC[1], LHC[2], LHC[3], LHC[4], LHC[5], GL_LINE_LOOP);
	glPopMatrix();
	GreyMetal.end();

	GreyMetal.start();
	glPushMatrix();
	GLdouble RHC[] = { 6.5,5.5,-4.5,-9.5, 4,1 };
	glTranslatef(0, 1, -1.4);
	Grey.call();
	Cuboid(RHC[0], RHC[1], RHC[2], RHC[3], RHC[4], RHC[5]);
	Black.call();
	Cuboid(RHC[0], RHC[1], RHC[2], RHC[3], RHC[4], RHC[5], GL_LINE_LOOP);
	glPopMatrix();
	GreyMetal.end();

	YellowDia.start();
	glPushMatrix();
	BackYellow.call();
	glTranslatef(-6, -2.5, 1.55);
	Sphere(1.5);
	glPopMatrix();
	YellowDia.end();

}