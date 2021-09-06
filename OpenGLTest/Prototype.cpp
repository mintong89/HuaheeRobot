
#include <Windows.h>
#include <gl/GL.h>
#include <math.h>
#include <gl/GLU.h>
#include "Shape.h"
#include "Utility.h"

#pragma comment (lib, "OpenGL32.lib")
#pragma comment (lib, "GLU32.lib")

#define WINDOW_TITLE "OpenGL Window"

GLfloat rotateX = 0.0, rotateY = 0.0, rotateZ = 0.0;
GLfloat translateX = 0.0, translateY = 0.0, translateZ = 0.0;
GLfloat rotateSpeed = 5.0, translateSpeed = 0.2;
GLfloat cameraInit = 15.0;

boolean isBridgeOpen = false, persepective = false;
GLfloat bridgeAngle = 0;

LRESULT WINAPI WindowProcedure(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch(msg)
	{
		case WM_DESTROY:
			PostQuitMessage(0);
			break;

		case WM_KEYDOWN:
			switch (wParam) {
				case VK_ESCAPE:
					PostQuitMessage(0);
					break;

				case 'A':
					rotateX -= rotateSpeed;
					break;
				case 'D':
					rotateX += rotateSpeed;
					break;

				case 'S':
					rotateY -= rotateSpeed;
					break;
				case 'W':
					rotateY += rotateSpeed;
					break;

				case 'Q':
					rotateZ -= rotateSpeed;
					break;
				case 'E':
					rotateZ += rotateSpeed;
					break;

				case VK_LEFT:
					translateX -= translateSpeed;
					break;
				case VK_RIGHT:
					translateX += translateSpeed;
					break;

				case VK_DOWN:
					translateY -= translateSpeed;
					break;
				case VK_UP:
					translateY += translateSpeed;
					break;

				case 'Z':
					translateZ -= translateSpeed;
					break;
				case 'C':
					translateZ += translateSpeed;
					break;

				case VK_SPACE:
					rotateX = 0.0;
					rotateY = 0.0;
					rotateZ = 0.0;
					translateX = 0.0;
					translateY = 0.0;
					translateZ = 0.0;
					break;

				case 'O':
					isBridgeOpen = !isBridgeOpen;
					break;

				case 'P':
					persepective = !persepective;
			}
			break;

		default: break;
	}

	return DefWindowProc(hWnd, msg, wParam, lParam);
}
//--------------------------------------------------------------------

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
			-cameraInit - 0.5f - translateY,
			cameraInit - 0.5f - translateY,
			-cameraInit - 10.0f - translateZ,
			cameraInit + 10.0f - translateZ);
	}
	else {
		glFrustum(-cameraInit - translateX,
			cameraInit - translateX,
			-cameraInit - translateY,
			cameraInit - translateY,
			5 - translateZ,
			100 - translateZ);
	}

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glEnable(GL_DEPTH_TEST);
//--------------------------------
//	OpenGL drawing
//--------------------------------
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_DEPTH_TEST);
	glClearColor(rgbToDec(227), rgbToDec(232), rgbToDec(242), 1.0);

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