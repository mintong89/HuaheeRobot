#include "Shape.h"
#include "ColorIntensity.h"
#include "Fingers.h"

void UpperHand();

void Hand() {
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
	glTranslatef(3.0, -19, -10.0);
	glRotatef(-50, 0.0, 0.0, 1.0);
	Fingers();
	glPopMatrix();
}

void UpperHand() {
	ColorIntensity Black(0, 0, 0);
	ColorIntensity DarkGreen(21, 160, 104);
	ColorIntensity DarkBlue(28, 110, 216);

	// Outer Hand
	GLdouble OHC[] = { -8, 8, -8, 0, 8, 4, 0 };

	DarkBlue.call();
	Prism(OHC[0], OHC[1], OHC[2], OHC[3], OHC[4], OHC[5], OHC[6]);
	Black.call();
	glLineWidth(1.5);
	Prism(OHC[0], OHC[1], OHC[2], OHC[3], OHC[4], OHC[5], OHC[6], GL_LINE_LOOP);


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

	glPushMatrix();
	glTranslatef(0.0, 0.0, -4);
	DarkBlue.call();
	Cuboid(MNC[0], MNC[1], MNC[2], MNC[3], MNC[4], MNC[5]);

	Black.call();
	Cuboid(MNC[0], MNC[1], MNC[2], MNC[3], MNC[4], MNC[5], GL_LINE_LOOP);
	glPopMatrix();
}