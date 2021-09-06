#include <string>

#pragma once
typedef struct RGBDEC {
	double r;
	double g;
	double b;
};

GLfloat rgbToDec(GLfloat color);
RGBDEC HEXtoDEC(string color);