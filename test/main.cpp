#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display()
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0);

	glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, -0.3f);
    glVertex2f(0.42f, -0.62f);
    glVertex2f(0.29f, -0.11f);
    glVertex2f(0.7f, 0.2f);
    glVertex2f(0.18f, 0.18f);
    glVertex2f(0.0f, 0.7f);
    glVertex2f(-0.18f, 0.18f);
    glVertex2f(-0.7f, 0.2f);
    glVertex2f(-0.29f, -0.11f);
    glVertex2f(-0.41f, -0.61f);

	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("Second Lab");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
