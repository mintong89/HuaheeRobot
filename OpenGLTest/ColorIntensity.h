#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <string>
using namespace std;

#pragma once
#ifndef COLORINTENSITY_H
#define COLORINTENSITY_H

class ColorIntensity {
public:
	double r, g, b, a;

	// empty declaration.
	ColorIntensity();

	// color intensity declaration.
	ColorIntensity(GLdouble r, GLdouble g, GLdouble b);
	ColorIntensity(GLdouble r, GLdouble g, GLdouble b, GLdouble a);

	// rgb light color declaration.
	ColorIntensity(int Lr, int Lg, int Lb);
	ColorIntensity(int Lr, int Lg, int Lb, int La);

	// hex declaration.
	// example: "0000FF"
	ColorIntensity(string hex);

	void call();
	GLdouble* getVector();
	GLdouble* getVectorWithAlpha();
};

#endif // !GLTEXTURE_H
