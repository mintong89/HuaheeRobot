#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>

#pragma once
void Cuboid(GLdouble left, GLdouble right, GLdouble top, GLdouble bottom, GLdouble front, GLdouble back, GLenum mode = GL_POLYGON);
void Pyramid(GLfloat back, GLfloat front, GLfloat left, GLfloat right, GLfloat top, GLenum mode = GL_POLYGON);
void Prism(GLfloat back, GLfloat front, GLfloat left, GLfloat middle, GLfloat right, GLfloat top, GLfloat bottom, GLenum mode = GL_POLYGON);
void Cylinder(GLdouble baseRadius, GLdouble topRadius, GLdouble height, boolean isTexture = false, GLenum mode = GLU_FILL);
void Sphere(GLdouble radius, boolean isTexture = false, GLenum mode = GLU_FILL);
void Curve(GLfloat x[4], GLfloat y[4], GLenum mode = GL_POLYGON);
void Circle(GLfloat cx, GLfloat cy, GLfloat r, GLenum mode = GL_TRIANGLE_FAN);