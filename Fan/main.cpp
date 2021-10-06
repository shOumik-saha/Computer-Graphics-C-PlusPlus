#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float x,y,i;
float counter=0.0,counter1=0.0;
void init(void)
{
	gluOrtho2D(0,800,400,0);
	glOrtho(0,800,500,0,1,-1);
}
void fan(void)
{
	glClearColor(0.75,0.7,1,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(10.0);
	glLoadIdentity();
	 glLoadIdentity();
	//glRotatef(counter,0.0,0.0,-1.0);
	//counter+=3;
     glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.9*sin(i);
			y=0.9*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
	glPushMatrix();
	glRotatef(counter,0.0,0.0,-1.0);
	counter+=3;
	glBegin(GL_POLYGON);

		glColor3ub(0,0,0);
          glVertex2f(0.67,-0.05);
          glVertex2f(0.8,0.0);
		glVertex2f(0.67,0.05);
          glVertex2f(0.0,0.0);

	glEnd();
	glPopMatrix();
	glPushMatrix();
	glRotatef(counter1,0.0,0.0,-1.0);
	counter1+=1;
	glBegin(GL_POLYGON);

		glColor3ub(0,0,0);
          glVertex2f(0.0,0.0);
          glVertex2f(0.1,0.55);
		glVertex2f(0.0,0.65);
          glVertex2f(-0.1,0.55);

	glEnd();
	glPopMatrix();

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(0,0,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.1*sin(i);
			y=0.1*cos(i);
			glVertex2f(x,y);
		}
	glEnd();


	glutSwapBuffers();
}
int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
	glutInitWindowPosition(-1,-1);
	glutInitWindowSize(640,640);
	glutCreateWindow("Clock");
	init();
	glutDisplayFunc(fan);
	glutIdleFunc(fan);
	glutMainLoop();
	return 0;
}
