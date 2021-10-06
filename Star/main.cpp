#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display()
{
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0);

    glBegin(GL_POLYGON);

    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(0.0f, -0.67f);
    glVertex2f(0.07f, -0.71f);
     glVertex2f(0.04f, -0.64f);
    glVertex2f(0.1f, -0.6f);
    glVertex2f( 0.02f, -0.6f);
    glVertex2f(-0.0f, -0.5f);
    glVertex2f(-0.02f, -0.6f);
    glVertex2f(-0.1f, -0.6f);
    glVertex2f(-0.04f, -0.64f);
    glVertex2f(-0.07f, -0.71f);

    glEnd();

     glBegin(GL_POLYGON);

    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(0.32f, -0.57f);
    glVertex2f(0.4f, -0.61f);
     glVertex2f(0.36f, -0.54f);
    glVertex2f(0.43f, -0.5f);
    glVertex2f( 0.35f, -0.5f);
    glVertex2f(0.32f, -0.42f);
    glVertex2f(0.3f, -0.5f);
    glVertex2f(0.22f, -0.5f);
    glVertex2f(0.3f, -0.54f);
    glVertex2f(0.26f, -0.61f);

    glEnd();
        glBegin(GL_POLYGON);

    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(0.0f, 0.67f);
    glVertex2f(-0.07f, 0.71f);
     glVertex2f(-0.04f,0.64f);
    glVertex2f(-0.1f, 0.6f);
    glVertex2f(-0.02f, 0.6f);
    glVertex2f(0.0f, 0.5f);
    glVertex2f(0.02f, 0.6f);
    glVertex2f(0.1f, 0.6f);
    glVertex2f(0.04f, 0.64f);
    glVertex2f(0.07f, 0.71f);

    glEnd();
     glBegin(GL_POLYGON);

    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(-0.32f, -0.57f);
    glVertex2f(-0.4f, -0.61f);
     glVertex2f(-0.36f, -0.54f);
    glVertex2f(-0.43f, -0.5f);
    glVertex2f( -0.35f, -0.5f);
    glVertex2f(-0.32f, -0.42f);
    glVertex2f(-0.3f, -0.5f);
    glVertex2f(-0.22f, -0.5f);
    glVertex2f(-0.3f, -0.54f);
    glVertex2f(-0.26f, -0.61f);

    glEnd();
         glBegin(GL_POLYGON);

    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(0.58f, -0.35f);
    glVertex2f(0.63f, -0.39f);
     glVertex2f(0.62f, -0.31f);
    glVertex2f(0.68f, -0.28f);
    glVertex2f( 0.6f, -0.28f);
     glVertex2f(0.58f, -0.2f);
    glVertex2f(0.56f, -0.28f);
    glVertex2f(0.48f, -0.28f);
    glVertex2f(0.54f, -0.31f);
    glVertex2f(0.51f, -0.39f);

    glEnd();
     glBegin(GL_POLYGON);

    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(-0.58f, -0.35f);
    glVertex2f(-0.63f, -0.39f);
     glVertex2f(-0.62f, -0.31f);
    glVertex2f(-0.68f, -0.28f);
    glVertex2f(-0.6f, -0.28f);
     glVertex2f(-0.58f, -0.2f);
    glVertex2f(-0.56f, -0.28f);
    glVertex2f(-0.48f, -0.28f);
    glVertex2f(-0.54f, -0.31f);
    glVertex2f(-0.51f, -0.39f);

    glEnd();
         glBegin(GL_POLYGON);

    glColor3f(1.0, 1.0, 0.0);
     glVertex2f(0.68f, -0.01f);
     glVertex2f(0.74f, -0.05f);
    glVertex2f(0.72f, 0.03f);
    glVertex2f(0.78f, 0.08f);
    glVertex2f(0.7f, 0.08f);
     glVertex2f(0.68f, 0.16f);
    glVertex2f(0.66f, 0.08f);
    glVertex2f(0.58f, 0.08f);
    glVertex2f(0.64f, 0.02f);
    glVertex2f(0.62f, -0.05f);

    glEnd();
             glBegin(GL_POLYGON);

    glColor3f(1.0, 1.0, 0.0);
     glVertex2f(-0.68f, -0.01f);
     glVertex2f(-0.74f, -0.05f);
    glVertex2f(-0.72f, 0.03f);
    glVertex2f(-0.78f, 0.08f);
    glVertex2f(-0.7f, 0.08f);
     glVertex2f(-0.68f, 0.16f);
    glVertex2f(-0.66f, 0.08f);
    glVertex2f(-0.58f, 0.08f);
    glVertex2f(-0.64f, 0.02f);
    glVertex2f(-0.62f, -0.05f);

    glEnd();
     glBegin(GL_POLYGON);

    glColor3f(1.0, 1.0, 0.0);
     glVertex2f(0.58f, 0.32f);
     glVertex2f(0.64f, 0.28f);
    glVertex2f(0.62f, 0.35f);
    glVertex2f(0.68f, 0.4f);
    glVertex2f(0.6f, 0.4f);
     glVertex2f(0.58f, 0.48f);
    glVertex2f(0.56f, 0.4f);
    glVertex2f(0.48f, 0.4f);
    glVertex2f(0.54f, 0.35f);
    glVertex2f(0.52f, 0.28f);

    glEnd();
         glBegin(GL_POLYGON);

    glColor3f(1.0, 1.0, 0.0);
     glVertex2f(-0.58f, 0.32f);
     glVertex2f(-0.64f, 0.28f);
    glVertex2f(-0.62f, 0.35f);
    glVertex2f(-0.68f, 0.4f);
    glVertex2f(-0.6f, 0.4f);
     glVertex2f(-0.58f, 0.48f);
    glVertex2f(-0.56f, 0.4f);
    glVertex2f(-0.48f, 0.4f);
    glVertex2f(-0.54f, 0.35f);
    glVertex2f(-0.52f, 0.28f);

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(0.32f, 0.57f);
    glVertex2f(0.4f, 0.61f);
     glVertex2f(0.36f, 0.54f);
    glVertex2f(0.43f, 0.5f);
    glVertex2f( 0.35f, 0.5f);
    glVertex2f(0.32f, 0.42f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.22f, 0.5f);
    glVertex2f(0.3f, 0.54f);
    glVertex2f(0.26f, 0.61f);

    glEnd();
        glBegin(GL_POLYGON);

    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(-0.32f, 0.57f);
    glVertex2f(-0.4f, 0.61f);
     glVertex2f(-0.36f, 0.54f);
    glVertex2f(-0.43f, 0.5f);
    glVertex2f(-0.35f, 0.5f);
    glVertex2f(-0.32f, 0.42f);
    glVertex2f(-0.3f, 0.5f);
    glVertex2f(-0.22f, 0.5f);
    glVertex2f(-0.3f, 0.54f);
    glVertex2f(-0.26f, 0.61f);

    glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("First Lab");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
