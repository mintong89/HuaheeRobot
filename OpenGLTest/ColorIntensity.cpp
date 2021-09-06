#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <string>
#include "ColorIntensity.h"

ColorIntensity::ColorIntensity() {
	this->r = 1.0;
	this->g = 1.0;
	this->b = 1.0;
	this->a = 1.0;
}

ColorIntensity::ColorIntensity(GLdouble r, GLdouble g, GLdouble b) {
	this->r = r;
	this->g = g;
	this->b = b;
	this->a = 1.0;
}

ColorIntensity::ColorIntensity(GLdouble r, GLdouble g, GLdouble b, GLdouble a) {
	this->r = r;
	this->g = g;
	this->b = b;
	this->a = a;
}

ColorIntensity::ColorIntensity(int Lr, int Lg, int Lb) {
	this->r = Lr / 255.0;
	this->g = Lg / 255.0;
	this->b = Lb / 255.0;
	this->a = 1.0;
}

ColorIntensity::ColorIntensity(int Lr, int Lg, int Lb, int La) {
	this->r = Lr / 255.0;
	this->g = Lg / 255.0;
	this->b = Lb / 255.0;
	this->a = La / 255.0;
}

ColorIntensity::ColorIntensity(string hex) {
	int Lr = 255, Lg = 255, Lb = 255;
	sscanf_s(hex.c_str(), "%02x%02x%02x", &Lr, &Lg, &Lb);

	this->r = Lr / 255.0;
	this->g = Lg / 255.0;
	this->b = Lb / 255.0;
	this->a = 1.0;
}

void ColorIntensity::call() {
	glColor4d(r, g, b, a);
}

GLdouble* ColorIntensity::getVector() {
	GLdouble result[] = { r, g, b };

	return result;
}

GLdouble* ColorIntensity::getVectorWithAlpha() {
	GLdouble result[] = { r, g, b, a };

	return result;
}