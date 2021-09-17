#include "Shape.h"
#include "ColorIntensity.h"
#include "Fingers.h"
#include "GLTexture.h"

void UpperHand();

void Hand(GLfloat innerHandAngle = 0.0) {
	ColorIntensity White("FFFFFF");
	ColorIntensity Black(0, 0, 0);

	ColorIntensity Green(21, 209, 134);
	ColorIntensity DarkGreen(21, 160, 104);
	ColorIntensity Turquoise(25, 233, 202);
	ColorIntensity Red(216, 61, 8);
	ColorIntensity Yellow(216, 176, 28);
	ColorIntensity DarkBlue(28, 110, 216);
	ColorIntensity Gray(108, 110, 114);

	glPushMatrix();
	glRotatef(180, 0.0, 0.0, 1.0);
	UpperHand();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-4, -19, -9.0);
	glRotatef(50, 0.0, 1.0, 0.0);
	glRotatef(-50, 0.0, 0.0, 1.0);
	Fingers(innerHandAngle);
	glPopMatrix();
}

void UpperHand() {
	ColorIntensity White("FFFFFF");
	ColorIntensity Black(0, 0, 0);
	ColorIntensity DarkGreen(21, 160, 104);
	ColorIntensity DarkBlue(28, 110, 216);

	// Outer Hand
	GLdouble OHC[] = { -8, 8, -8, 0, 8, 4, 0 };

	GLTexture Blue("bluemetal.bmp");
	Blue.start();
	White.call();
	Prism(OHC[0], OHC[1], OHC[2], OHC[3], OHC[4], OHC[5], OHC[6]);
	Black.call();
	glLineWidth(1.5);
	Prism(OHC[0], OHC[1], OHC[2], OHC[3], OHC[4], OHC[5], OHC[6], GL_LINE_LOOP);
	Blue.end();


	// Inner Hand
	GLdouble INC[] = { -6, 6, -6, 0, 6, 8, 4 };

	glPushMatrix();
	glRotatef(180, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 0.0, 4);
	DarkGreen.call();
	Prism(INC[0], INC[1], INC[2], INC[3], INC[4], INC[5], INC[6]);
	Black.call();
	Prism(INC[0], INC[1], INC[2], INC[3], INC[4], INC[5], INC[6], GL_LINE_LOOP);
	glPopMatrix();


	// Middle Hand
	GLdouble MNC[] = { -4, 4, 16, 8, 6, -6 };
	Blue.start();
	glPushMatrix();
	glTranslatef(0.0, 0.0, -4);
	White.call();
	Cuboid(MNC[0], MNC[1], MNC[2], MNC[3], MNC[4], MNC[5]);
	Blue.end();

	Black.call();
	Cuboid(MNC[0], MNC[1], MNC[2], MNC[3], MNC[4], MNC[5], GL_LINE_LOOP);
	glPopMatrix();
}