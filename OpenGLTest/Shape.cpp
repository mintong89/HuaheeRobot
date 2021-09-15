#include <Windows.h>
#include <gl/GL.h>
#include <math.h>
#include <gl/GLU.h>

GLfloat bezierCurve(float t, GLfloat v[4]);

void Cuboid(GLdouble left, GLdouble right, GLdouble top, GLdouble bottom, GLdouble front, GLdouble back, GLenum mode = GL_POLYGON) {
	GLdouble leftTopFront[] = { left, top, front };
	GLdouble leftBottomFront[] = { left, bottom, front };
	GLdouble leftTopBack[] = { left, top, back };
	GLdouble leftBottomBack[] = { left, bottom, back }; 
	GLdouble rightTopFront[] = { right, top, front };
	GLdouble rightBottomFront[] = { right, bottom, front };
	GLdouble rightTopBack[] = { right, top, back };
	GLdouble rightBottomBack[] = { right, bottom, back };

	// Front Face
	glBegin(mode);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3dv(leftTopFront);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3dv(leftBottomFront);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3dv(rightBottomFront);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3dv(rightTopFront);
	glEnd();

	// Back Face
	glBegin(mode);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3dv(leftTopBack);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3dv(leftBottomBack);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3dv(rightBottomBack);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3dv(rightTopBack);
	glEnd();

	// Left Face
	glBegin(mode);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3dv(leftTopBack);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3dv(leftBottomBack);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3dv(leftBottomFront);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3dv(leftTopFront);
	glEnd();

	// Right Face
	glBegin(mode);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3dv(rightTopBack);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3dv(rightBottomBack);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3dv(rightBottomFront);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3dv(rightTopFront);
	glEnd();

	// Top Face
	glBegin(mode);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3dv(leftTopBack);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3dv(leftTopFront);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3dv(rightTopFront);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3dv(rightTopBack);
	glEnd();

	// Bottom Face
	glBegin(mode);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3dv(leftBottomBack);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3dv(leftBottomFront);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3dv(rightBottomFront);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3dv(rightBottomBack);
	glEnd();
}

void Pyramid(GLfloat back, GLfloat front, GLfloat left, GLfloat right, GLfloat top, GLenum mode = GL_POLYGON) {
	glPushMatrix();

	GLdouble backLeft[] = { left, back, 0 };
	GLdouble backRight[] = { right, back, 0 };
	GLdouble frontLeft[] = { left, front, 0 };
	GLdouble frontRight[] = { right, front, 0 };
	GLdouble topPoint[] = { 0, 0, top };

	// Front Triangle
	glBegin(mode);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3dv(backLeft);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3dv(backRight);
	glTexCoord2f(1.0f, 0.5f);
	glVertex3dv(topPoint);
	glEnd();

	// Left Triangle
	glBegin(mode);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3dv(backLeft);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3dv(frontLeft);
	glTexCoord2f(1.0f, 0.5f);
	glVertex3dv(topPoint);
	glEnd();

	// Back Triangle
	glBegin(mode);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3dv(frontLeft);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3dv(frontRight);
	glTexCoord2f(1.0f, 0.5f);
	glVertex3dv(topPoint);
	glEnd();

	// Right Triangle
	glBegin(mode);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3dv(backRight);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3dv(frontRight);
	glTexCoord2f(1.0f, 0.5f);
	glVertex3dv(topPoint);
	glEnd();

	// Base
	glBegin(mode);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3dv(backLeft);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3dv(backRight);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3dv(frontLeft);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3dv(frontRight);
	glEnd();

	glPopMatrix();
}

void Prism(GLfloat back, GLfloat front, GLfloat left, GLfloat middle, GLfloat right, GLfloat top, GLfloat bottom, GLenum mode = GL_POLYGON) {
	glPushMatrix();

	GLdouble leftTopBack[] = { left, top, back };
	GLdouble leftBottomBack[] = { left, bottom, back };
	GLdouble rightBottomBack[] = { right, bottom, back };
	GLdouble rightTopBack[] = { right, top, back };
	GLdouble middleBottomFront[] = { middle, bottom, front };
	GLdouble middleTopFront[] = { middle, top, front };


	// Front Face
	glBegin(mode);
	glVertex3dv(leftTopBack);
	glVertex3dv(leftBottomBack);
	glVertex3dv(rightBottomBack);
	glVertex3dv(rightTopBack);
	glEnd();

	// Left Face
	glBegin(mode);
	glVertex3dv(leftTopBack);
	glVertex3dv(leftBottomBack);
	glVertex3dv(middleBottomFront);
	glVertex3dv(middleTopFront);
	glEnd();

	// Right Face
	glBegin(mode);
	glVertex3dv(middleTopFront);
	glVertex3dv(middleBottomFront);
	glVertex3dv(rightBottomBack);
	glVertex3dv(rightTopBack);
	glEnd();

	// Top Face
	glBegin(mode);
	glVertex3dv(leftTopBack);
	glVertex3dv(middleTopFront);
	glVertex3dv(rightTopBack);
	glEnd();

	// Bottom Face
	glBegin(mode);
	glVertex3dv(leftBottomBack);
	glVertex3dv(middleBottomFront);
	glVertex3dv(rightBottomBack);
	glEnd();

	glPopMatrix();
}

void Cylinder(GLdouble baseRadius, GLdouble topRadius, GLdouble height, boolean isTexture = false, GLenum mode = GLU_FILL) {
	GLUquadricObj* cylinder = NULL;
	cylinder = gluNewQuadric();
	
	if (isTexture) {
		gluQuadricTexture(cylinder, true);
	}
	else {
		gluQuadricDrawStyle(cylinder, mode);
	}

	gluCylinder(cylinder, baseRadius, topRadius, height, 30, 30);
	gluDeleteQuadric(cylinder);
}

void Sphere(GLdouble radius, boolean isTexture = false, GLenum mode = GLU_FILL) {
	GLUquadricObj* sphere = NULL;
	sphere = gluNewQuadric();

	if (isTexture) {
		gluQuadricTexture(sphere, true);
	}
	else {
		gluQuadricDrawStyle(sphere, mode);
	}

	gluSphere(sphere, radius, 30, 30);
	gluDeleteQuadric(sphere);
}

void Curve(GLfloat x[4], GLfloat y[4], GLenum mode = GL_POLYGON) {
	GLfloat xt[401], yt[401];

	int i;
	float t;
	for (i = 0, t = 0; t <= 1; i++, t += 0.0025)
	{
		xt[i] = bezierCurve(t, x);
		yt[i] = bezierCurve(t, y);
	}

	glBegin(mode);
	for (int i = 0; i < 400; i++) {
		glVertex2f(xt[i], yt[i]);
	}
	glEnd();
}

void Circle(GLfloat cx, GLfloat cy, GLfloat r, GLenum mode = GL_TRIANGLE_FAN) {
	float num_segments = 360;

	glBegin(mode);
	if (!(mode == GL_LINE_STRIP || mode == GL_LINE_LOOP)) {
		glVertex2f(cx, cy);
	}
	for (int ii = 0; ii <= num_segments; ii++) {
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);
		float x = r * cosf(theta);
		float y = r * sinf(theta);
		glVertex2f(x + cx, y + cy);
	}
	glEnd();
}

GLfloat bezierCurve(float t, GLfloat v[4]) {
	return (pow(1 - t, 3) * v[0]) +
		(3 * t * pow(1 - t, 2) * v[1]) +
		(3 * pow(t, 2) * (1 - t) * v[2]) +
		(pow(t, 3) * v[3]);
}