#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>


GLfloat position1 = 0.0f,position2=0.0f,position3=0.0f;
GLfloat speed = 0.009f;

void update(int value)
{

    if(position1 > 1.0)
        position1 = -1.2f;
     if(position2 < -1.0)
          position2 = 1.2f;
     if(position3 < -1.0)
          position3 = 0.8f;
    position1 += speed;
    position2 -= speed;
    position3 -= speed;

	glutPostRedisplay();
	glutTimerFunc(100, update, 0);
}
void init()
{
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void handleMouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speed += 0.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}

	glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y)
{

switch (key)
{

case 'a':
    position1 -= 0.1f;
    break;
case 'd':
    position1 += 0.1f;
    break;


glutPostRedisplay();
}

}
void display()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();
   glPushMatrix();
glTranslatef(position1,0.0f, 0.0f);
   glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.1f, -1.0f);
      glVertex2f( 0.1f, -1.0f);
      glVertex2f( 0.1f,  -0.9f);
      glVertex2f(-0.1f,  -0.9f);
   glEnd();
   glBegin(GL_TRIANGLES);
   glColor3f(0.0f, 0.0f, 1.0f);
   glVertex2f(-0.1f,-0.9f);
   glVertex2f(0.1f, -0.9f);
   glVertex2f(0.0f, -0.8f);
   glEnd();


glPopMatrix();

glPushMatrix();
glTranslatef(0.0f,position2,0.0f);

   glBegin(GL_TRIANGLES);
   glColor3f(1.0f, 0.0f, 0.0f);
   glVertex2f(-0.9f,0.9f);
   glVertex2f(-0.8f,0.8f);
   glVertex2f(-0.7f,0.9f);
   glEnd();

glPopMatrix();
glPushMatrix();
glTranslatef(0.0f,position2,0.0f);

   glBegin(GL_TRIANGLES);
   glColor3f(1.0f, 0.0f, 0.0f);
   glVertex2f(-0.6f,0.6f);
   glVertex2f(-0.5f,0.5f);
   glVertex2f(-0.4f,0.6f);
   glEnd();

glPopMatrix();
glPushMatrix();
glTranslatef(0.0f,position2,0.0f);

   glBegin(GL_TRIANGLES);
   glColor3f(1.0f, 0.0f, 0.0f);
   glVertex2f(0.9f,0.9f);
   glVertex2f(0.8f,0.8f);
   glVertex2f(0.7f,0.9f);
   glEnd();

glPopMatrix();
glPushMatrix();
glTranslatef(0.0f,position2,0.0f);

   glBegin(GL_TRIANGLES);
   glColor3f(1.0f, 0.0f,0.0f);
   glVertex2f(0.6f,0.6f);
   glVertex2f(0.5f,0.5f);
   glVertex2f(0.4f,0.6f);
   glEnd();

glPopMatrix();
glPushMatrix();
glTranslatef(0.0f,-position3,0.0f);

   glBegin(GL_QUADS);
   glColor3f(1.0f, 1.0f,1.0f);
   glVertex2f(-0.05f,-0.8f);
   glVertex2f(0.05f, -0.8f);
   glVertex2f(0.05f, -0.7f);
      glVertex2f(-0.05f, -0.7f);
   glEnd();

glPopMatrix();
   glFlush();
}


int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}
