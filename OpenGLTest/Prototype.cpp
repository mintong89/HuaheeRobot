
#include <Windows.h>
#include <gl/GL.h>
#include <math.h>
#include <gl/GLU.h>
#include "Shape.h"
#include "ColorIntensity.h"
#include "Forearm.h"
#include "Head.h"
#include "UpBody.h"
#include "Shield.h"
#include "DownBody.h"
#include "Leg.h"
#include "Wings.h"
#include "Engine.h"

#pragma comment (lib, "OpenGL32.lib")
#pragma comment (lib, "GLU32.lib")

#define WINDOW_TITLE "OpenGL Window"

ColorIntensity Background(190, 76, 100);
ColorIntensity LightPoint("FFFFFF");

GLfloat rotateX = 0.0, rotateY = 0.0, rotateZ = 0.0;
GLfloat translateX = 0.0, translateY = 0.0, translateZ = 0.0;
GLfloat rotateSpeed = 5.0, translateSpeed = 0.2;
GLfloat cameraInit = 15.0;

GLfloat lightPosX = 1, lightPosY = 1, lightPosZ = 1;
GLfloat amb[] = { 0.5, 0.5, 0.5, 1 };
GLfloat diff[] = { 0.25, 0.25, 0.25, 1 };
GLfloat spe[] = { 1, 1, 1, 1 };
GLfloat pos[] = { lightPosX, lightPosY, lightPosZ, 0.5 };
boolean lightOn = true;
boolean persepective = false;

// 1
GLfloat rotateHeadAngle = 0;
boolean rotateHeadToggle = false, rotateHeadIsUp = false;

// 2
GLfloat leftHandUpperAngle = 0, leftHandLowerAngle = 0;
boolean leftHandToggle = false;

// 3
GLfloat rightHandUpperAngle = 0, rightHandLowerAngle = 0;
boolean rightHandToggle = false;

LRESULT WINAPI WindowProcedure(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch(msg)
	{
		case WM_DESTROY:
			PostQuitMessage(0);
			break;

		case WM_KEYDOWN:
			switch (wParam) {
				case VK_ESCAPE: PostQuitMessage(0); break;

				case 'A': rotateX -= rotateSpeed; break;
				case 'D': rotateX += rotateSpeed; break;

				case 'S': rotateY -= rotateSpeed; break;
				case 'W': rotateY += rotateSpeed; break;

				case 'Q': rotateZ -= rotateSpeed; break;
				case 'E': rotateZ += rotateSpeed; break;

				case VK_LEFT: translateX -= translateSpeed; break;
				case VK_RIGHT: translateX += translateSpeed; break;

				case VK_DOWN: translateY -= translateSpeed; break;
				case VK_UP: translateY += translateSpeed; break;

				case 'Z': translateZ -= translateSpeed; break;
				case 'C': translateZ += translateSpeed; break;

				case 'J': lightPosX -= 1; break;
				case 'L': lightPosX += 1; break;

				case 'K': lightPosY -= 1; break;
				case 'I': lightPosY += 1; break;

				case 'U': lightPosZ -= 1; break;
				case 'O': lightPosZ += 1; break;

				case VK_SPACE:
					rotateX = 0.0;
					rotateY = 0.0;
					rotateZ = 0.0;
					translateX = 0.0;
					translateY = 0.0;
					translateZ = 0.0;
					break;

				case 'M':
					persepective = !persepective; break;

				case 'P':
					if (lightOn) {
						amb[0] = 1;
						amb[1] = 1;
						amb[2] = 1;
						amb[3] = 1;

						diff[0] = 0;
						diff[1] = 0;
						diff[2] = 0;
						diff[3] = 0;
					}
					else {
						amb[0] = 0.5;
						amb[1] = 0.5;
						amb[2] = 0.5;
						amb[3] = 1;

						diff[0] = 0.25;
						diff[1] = 0.25;
						diff[2] = 0.25;
						diff[3] = 1;
					}
					lightOn = !lightOn; break;

				case '1': rotateHeadToggle = !rotateHeadToggle; break;
				case '2': leftHandToggle = !leftHandToggle; break;
				case '3': rightHandToggle = !rightHandToggle; break;
			}
			break;

		default: break;
	}

	return DefWindowProc(hWnd, msg, wParam, lParam);
}
//--------------------------------------------------------------------

void glScaleA(GLfloat ratio) {
	glScalef(ratio, ratio, ratio);
}

bool initPixelFormat(HDC hdc)
{
	PIXELFORMATDESCRIPTOR pfd;
	ZeroMemory(&pfd, sizeof(PIXELFORMATDESCRIPTOR));
 
	pfd.cAlphaBits = 8;
	pfd.cColorBits = 32;
	pfd.cDepthBits = 24;
	pfd.cStencilBits = 0;

	pfd.dwFlags = PFD_DOUBLEBUFFER | PFD_SUPPORT_OPENGL | PFD_DRAW_TO_WINDOW;

	pfd.iLayerType = PFD_MAIN_PLANE;
	pfd.iPixelType = PFD_TYPE_RGBA;
	pfd.nSize = sizeof(PIXELFORMATDESCRIPTOR);
	pfd.nVersion = 1;
 
	// choose pixel format returns the number most similar pixel format available
	int n = ChoosePixelFormat(hdc, &pfd);

	// set pixel format returns whether it sucessfully set the pixel format
	if (SetPixelFormat(hdc, n, &pfd))
	{
		return true;
	}
	else
	{
		return false;
	}
}
//--------------------------------------------------------------------

void display()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if (!persepective) {
		glOrtho(-cameraInit - translateX,
			cameraInit - translateX,
			-cameraInit - translateY,
			cameraInit - translateY,
			-cameraInit - 10.0f - translateZ,
			cameraInit + 10.0f - translateZ);
	}
	else {
		glFrustum(-1 - translateX * 0.1,
			1 - translateX * 0.1,
			-1 - translateY * 0.1,
			1 - translateY * 0.1,
			1 - translateZ * 0.1,
			40 - translateZ * 0.1);
		glTranslatef(0, 0, -20);
	}
	glMatrixMode(GL_MODELVIEW);
	glEnable(GL_DEPTH_TEST);

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	pos[0] = lightPosX;
	pos[1] = lightPosY;
	pos[2] = lightPosZ;
	glLightfv(GL_LIGHT1, GL_AMBIENT, amb);
	glLightfv(GL_LIGHT1, GL_DIFFUSE, diff);
	glLightfv(GL_LIGHT1, GL_SPECULAR, spe);
	glLightfv(GL_LIGHT1, GL_POSITION, pos);
	glEnable(GL_LIGHT1);
	glEnable(GL_LIGHTING);
	glEnable(GL_COLOR_MATERIAL);

	glLoadIdentity();
//--------------------------------
//	OpenGL drawing
//--------------------------------
	glClearColor(Background.r, Background.g, Background.b, Background.a);
	glScaled(0.75, 0.75, 0.75);

	glPointSize(10.0f);
	LightPoint.call();
	glBegin(GL_POINTS);
	glVertex3f(lightPosX, lightPosY, lightPosZ);
	glEnd();

	glPushMatrix();

	glRotatef(rotateY, 1.0, 0.0, 0.0);
	glRotatef(rotateZ, 0.0, 1.0, 0.0);
	glRotatef(rotateX, 0.0, 0.0, 1.0);
	glLineWidth(1.5);

	// Head
	glPushMatrix();
	glTranslatef(0.0, 7.0, -2.0);
	if (rotateHeadToggle) {
		glRotatef(rotateHeadAngle, 0.0, 1.0, 0.0);
	}
	glScaleA(0.55);
	Head();
	glPopMatrix();

	//Upper body
	UpBody();
	Engine();
	//Wings();

	// Bottom body
	DownBody();

	// Left Hand
	glPushMatrix();
	glTranslatef(-8.0, -9.0, 0.0);
	glRotatef(-180, 0.0, 1.0, 0.0);
	glScaleA(0.6);
	Forearm(leftHandLowerAngle, leftHandUpperAngle);
	glPopMatrix();

	// Right Hand
	glPushMatrix();
	glTranslatef(8.0, -9.0, 0.0);
	glScaleA(0.6);
	Forearm(-rightHandLowerAngle, -rightHandUpperAngle);
	glPopMatrix();

	// Left leg
	glPushMatrix();
	glTranslatef(-5.0, -15.0, 0.0);
	glRotatef(30, 0.0, 1.0, 0.0);
	glScaleA(0.75);
	Leg();
	glPopMatrix();

	// Right leg
	glPushMatrix();
	glTranslatef(5.0, -15.0, 0.0);
	glRotatef(-30, 0.0, 1.0, 0.0);
	glScalef(-1, 1, 1);
	glScaleA(0.75);
	Leg();
	glPopMatrix();

	/*Shield();*/
	glPopMatrix();

	// 1
	if (rotateHeadToggle) {
		rotateHeadIsUp ? rotateHeadAngle -= 0.1 : rotateHeadAngle += 0.1;
		if (rotateHeadAngle <= -70 || rotateHeadAngle >= 70) {
			rotateHeadIsUp = !rotateHeadIsUp;
		}
	}
	else {
		if (rotateHeadAngle < 0) {
			rotateHeadAngle += 0.1;
		}
		else {
			rotateHeadAngle -= 0.1;
		}
	}

	// 2
	if (leftHandToggle) {
		if (leftHandLowerAngle + leftHandUpperAngle <= 180) {
			leftHandLowerAngle += 0.1;
			leftHandUpperAngle += 0.1;
		}
	}
	else {
		if (leftHandLowerAngle + leftHandUpperAngle >= 0) {
			leftHandLowerAngle -= 0.1;
			leftHandUpperAngle -= 0.1;
		}
	}

	// 3
	if (rightHandToggle) {
		if (rightHandLowerAngle + rightHandUpperAngle <= 180) {
			rightHandLowerAngle += 0.1;
			rightHandUpperAngle += 0.1;
		}
	}
	else {
		if (rightHandLowerAngle + rightHandUpperAngle >= 0) {
			rightHandLowerAngle -= 0.1;
			rightHandUpperAngle -= 0.1;
		}
	}

//--------------------------------
//	End of OpenGL drawing
//--------------------------------
}
//--------------------------------------------------------------------

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE, LPSTR, int nCmdShow)
{
	WNDCLASSEX wc;
	ZeroMemory(&wc, sizeof(WNDCLASSEX));

	wc.cbSize			= sizeof(WNDCLASSEX);
	wc.hInstance		= GetModuleHandle(NULL);
	wc.lpfnWndProc		= WindowProcedure;
	wc.lpszClassName	= WINDOW_TITLE;
    wc.style			= CS_HREDRAW | CS_VREDRAW;

	if (!RegisterClassEx(&wc)) return false;

	HWND hWnd = CreateWindow(	WINDOW_TITLE, WINDOW_TITLE, WS_OVERLAPPEDWINDOW,
								CW_USEDEFAULT, CW_USEDEFAULT, 800, 800,
								NULL, NULL, wc.hInstance, NULL );
	
	//--------------------------------
	//	Initialize window for OpenGL
	//--------------------------------

	HDC hdc = GetDC(hWnd);

	//	initialize pixel format for the window
	initPixelFormat(hdc);

	//	get an openGL context
	HGLRC hglrc = wglCreateContext(hdc);

	//	make context current
	if (!wglMakeCurrent(hdc, hglrc)) return false;

	//--------------------------------
	//	End initialization
	//--------------------------------

	ShowWindow(hWnd, nCmdShow);
	
	MSG msg;
	ZeroMemory(&msg, sizeof(msg));

	while(true)
	{
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			if (msg.message == WM_QUIT) break;

			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}

		display();
		
		SwapBuffers(hdc);
	}

	UnregisterClass(WINDOW_TITLE, wc.hInstance);
	
	return true;
}
//--------------------------------------------------------------------