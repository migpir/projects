/*
 * main.cpp
 *
 *  Created on: May 13, 2017
 *      Author: user
 */
#include <GL/glut.h>
#include <GL/freeglut.h>
#include <iostream>
#include <string>
#define WIDTH 1200
#define HEIGHT 600

int i;
struct Cube
{
	int all;
	float x1,y1,z1, x2,y2,z2, x3,y3,z3, x4,y4,z4,xOff,yOff,zOff;
};

Cube C[6];

void init()
{
	C[0].x1 = -0.2; C[0].y1 = -0.2; C[0].z1=1.0; //front
	C[0].x2 = -0.2; C[0].y2 =  0.2; C[0].z2=1.0;
	C[0].x3 = 0.2;  C[0].y3=  0.2;  C[0].z3=1.0;
	C[0].x4 = 0.2;  C[0].y4 = -0.2; C[0].z4=1.0;
	C[0].x4 = 0.2;  C[0].y4 = -0.2; C[0].z4=1.0;
	C[0].xOff = 0.0;  C[0].yOff = 0.0; C[0].zOff = 0.0;

	C[1].x1 = -0.2; C[1].y1 = -0.2; C[1].z1=1.5;
	C[1].x2 = -0.2; C[1].y2 =  0.2; C[1].z2=1.5;
	C[1].x3 =  0.2; C[1].y3 =  0.2; C[1].z3=1.5;
	C[1].x4 =  0.2; C[1].y4 = -0.2; C[1].z4=1.5;
    C[0].all = 2;



}

void drawFaces()
{
glBegin(GL_POLYGON);
glVertex2f(-0.1,-0.2);
glVertex2f(-0.2,0.2);
glVertex2f(0.3,0.2);
glVertex2f(0.4,-0.2);
glEnd();


}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT |GL_DEPTH_BUFFER_BIT);

    drawFaces();

    glFlush();
    glutSwapBuffers();


}


int main(int argc, char * argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutCreateWindow("My First OpenGL Program");
	init();
	glutDisplayFunc(display);
	glClearColor(0.3,0.3,0.3,5.0);
	glutMainLoop();
	return 0;
}

