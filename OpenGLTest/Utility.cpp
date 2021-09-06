#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <string>
#include "Utility.h"
using namespace std;

GLfloat rgbToDec(GLfloat color) {
	return color / 255.0;
}

RGBDEC RGBtoDEC (int r, int g, int b) {
	RGBDEC result{};

	result.r = r / 255.0;
	result.g = g / 255.0;
	result.b = b / 255.0;

	return result;
}

// example: "0000FF"
RGBDEC HEXtoDEC(string color) {
	int r, g, b;
	sscanf(color.c_str(), "%02x%02x%02x", &r, &g, &b);

	return RGBtoDEC(r, g, b);
}