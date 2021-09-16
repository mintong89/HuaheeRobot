#include "ColorIntensity.h"
#include "Shape.h"

void FootShape(GLdouble* leftTopBack,
	GLdouble* rightTopBack,
	GLdouble* rightBottomBack,
	GLdouble* leftBottomBack,
	GLdouble* middleMiddleMiddle,
	GLdouble* middleBottomFront,
	GLenum mode);

void PyramidThree(
	GLdouble* leftTopBack,
	GLdouble* rightTopBack,
	GLdouble* middleMiddleMiddle,
	GLdouble* pyramidTop,
	GLenum mode
);

void Foot() {
	ColorIntensity DarkGreen(21, 160, 104);
	ColorIntensity Turquoise(25, 233, 202);
	ColorIntensity Black(0, 0, 0);

	GLdouble
		leftTopBack[] = { -2.5, 3.0, -2.5 },
		rightTopBack[] = { 2.5, 3.0, -2.5 },
		rightBottomBack[] = { 2.5, -1.0, -2.5 },
		leftBottomBack[] = { -2.5, -1.0, -2.5 },
		middleMiddleMiddle[] = { 1.0, 2.0, 3.0 },
		middleBottomFront[] = { 1.0, -1.0, 7.5 };

	glPushMatrix();
	glRotatef(-35, 0.0, 1.0, 0.0);

	// Bottom
	glPushMatrix();
	glTranslatef(1.0, 0.0, 1.5);
	Turquoise.call();
	FootShape(leftTopBack, rightTopBack, rightBottomBack, leftBottomBack, middleMiddleMiddle, middleBottomFront, GL_POLYGON);
	Black.call();
	FootShape(leftTopBack, rightTopBack, rightBottomBack, leftBottomBack, middleMiddleMiddle, middleBottomFront, GL_LINE_LOOP);
	glPopMatrix();

	// Middle
	glPushMatrix();
	GLdouble pyramidTop[] = { 1.0, 8.0, -1.0 };
	glTranslatef(1.0, 0.0, 1.5);
	DarkGreen.call();
	PyramidThree(leftTopBack, rightTopBack, middleMiddleMiddle, pyramidTop, GL_POLYGON);
	Black.call();
	PyramidThree(leftTopBack, rightTopBack, middleMiddleMiddle, pyramidTop, GL_LINE_LOOP);
	glPopMatrix();

	glPopMatrix();

	// Top
	glPushMatrix();
	glRotatef(-90, 1.0, 0.0, 0.0);
	glTranslatef(1.5, -0.8, 3.5);
	Turquoise.call();
	Pyramid(-3.0, 1.0, -3.0, 3.0, 8.0);
	Black.call();
	Pyramid(-3.0, 1.0, -3.0, 3.0, 8.0, GL_LINE_LOOP);
	glPopMatrix();

	glPushMatrix();
	glRotatef(-270, 1.0, 0.0, 0.0);
	glTranslatef(1.5, 1.55, -13.5);
	Turquoise.call();
	Pyramid(-3.0, 1.0, -3.0, 3.0, 8.0);
	Black.call();
	Pyramid(-3.0, 1.0, -3.0, 3.0, 8.0, GL_LINE_LOOP);
	glPopMatrix();
}

void FootShape(
	GLdouble* leftTopBack,
	GLdouble* rightTopBack,
	GLdouble* rightBottomBack,
	GLdouble* leftBottomBack,
	GLdouble* middleMiddleMiddle,
	GLdouble* middleBottomFront,
	GLenum mode
) {
	// Top Face
	glBegin(mode);
	glNormal3dv(leftTopBack);
	glNormal3dv(rightTopBack);
	glNormal3dv(middleMiddleMiddle);

	glVertex3dv(leftTopBack);
	glVertex3dv(rightTopBack);
	glVertex3dv(middleMiddleMiddle);
	glEnd();

	// Back Face
	glBegin(mode);
	glNormal3dv(leftTopBack);
	glNormal3dv(leftBottomBack);
	glNormal3dv(rightBottomBack);
	glNormal3dv(rightTopBack);

	glVertex3dv(leftTopBack);
	glVertex3dv(leftBottomBack);
	glVertex3dv(rightBottomBack);
	glVertex3dv(rightTopBack);
	glEnd();

	// Left Face
	glBegin(mode);
	glNormal3dv(leftTopBack);
	glNormal3dv(leftBottomBack);
	glNormal3dv(middleBottomFront);
	glNormal3dv(middleMiddleMiddle);

	glVertex3dv(leftTopBack);
	glVertex3dv(leftBottomBack);
	glVertex3dv(middleBottomFront);
	glVertex3dv(middleMiddleMiddle);
	glEnd();

	// Right Face
	glBegin(mode);
	glNormal3dv(rightTopBack);
	glNormal3dv(rightBottomBack);
	glNormal3dv(middleBottomFront);
	glNormal3dv(middleMiddleMiddle);

	glVertex3dv(rightTopBack);
	glVertex3dv(rightBottomBack);
	glVertex3dv(middleBottomFront);
	glVertex3dv(middleMiddleMiddle);
	glEnd();

	// Bottom Face
	glBegin(mode);
	glNormal3dv(leftBottomBack);
	glNormal3dv(rightBottomBack);
	glNormal3dv(middleBottomFront);

	glVertex3dv(leftBottomBack);
	glVertex3dv(rightBottomBack);
	glVertex3dv(middleBottomFront);
	glEnd();
}

void PyramidThree(
	GLdouble* leftTopBack,
	GLdouble* rightTopBack,
	GLdouble* middleMiddleMiddle,
	GLdouble* pyramidTop,
	GLenum mode
) {
	glPushMatrix();
	// Bottom Face
	glBegin(mode);
	glNormal3dv(leftTopBack);
	glNormal3dv(middleMiddleMiddle);
	glNormal3dv(pyramidTop);

	glVertex3dv(leftTopBack);
	glVertex3dv(middleMiddleMiddle);
	glVertex3dv(pyramidTop);
	glEnd();

	// Left Face
	glBegin(mode);
	glNormal3dv(leftTopBack);
	glNormal3dv(middleMiddleMiddle);
	glNormal3dv(pyramidTop);

	glVertex3dv(leftTopBack);
	glVertex3dv(middleMiddleMiddle);
	glVertex3dv(pyramidTop);
	glEnd();

	// Right Face
	glBegin(mode);
	glNormal3dv(leftTopBack);
	glNormal3dv(rightTopBack);
	glNormal3dv(pyramidTop);

	glVertex3dv(leftTopBack);
	glVertex3dv(rightTopBack);
	glVertex3dv(pyramidTop);
	glEnd();

	// Front Face
	glBegin(mode);
	glNormal3dv(pyramidTop);
	glNormal3dv(rightTopBack);
	glNormal3dv(middleMiddleMiddle);

	glVertex3dv(pyramidTop);
	glVertex3dv(rightTopBack);
	glVertex3dv(middleMiddleMiddle);
	glEnd();
	glPopMatrix();
}