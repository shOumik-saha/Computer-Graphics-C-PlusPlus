#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0);

     glBegin(GL_POLYGON);

    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-0.3f, -0.1f);
    glVertex2f(0.3f, -0.1f);
    glVertex2f(0.3f, 0.2f);  //grey chest
    glVertex2f(-0.3f, 0.2f);


	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(-0.2f, 0.0f);   //dark chest
    glVertex2f(0.2f, 0.0f);
    glVertex2f(0.2f, 0.1f);
    glVertex2f(-0.2f, 0.1f);


	glEnd();

	glBegin(GL_POLYGON);

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.3f, -0.2f);
    glVertex2f(0.3f, -0.2f);
    glVertex2f(0.3f, -0.1f);
    glVertex2f(-0.3f, -0.1f); //yellow



	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.2f, 0.3f);
    glVertex2f(-0.2f, -0.2f);
    glVertex2f(-0.2f, -0.4f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.2f, -0.2f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.2f, 0.3f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.3f, -0.3f);
    glVertex2f(0.3f, -0.2f);
    glVertex2f(0.2f, -0.2f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.2f, 0.3f);
    glVertex2f(0.3f, -0.2f);
    glVertex2f(0.4f, -0.2f);
    glVertex2f(0.4f, -0.1f);
    glVertex2f(0.3f, -0.1f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.2f, 0.3f);
    glVertex2f(-0.3f, -0.2f);
    glVertex2f(-0.3f, -0.1f);
    glVertex2f(-0.4f, -0.1f);
    glVertex2f(-0.4f, -0.2f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.2f, 0.3f);
    glVertex2f(-0.1f, 0.3f);
    glVertex2f(0.1f, 0.3f);
    glVertex2f(0.1f, 0.5f);
    glVertex2f(-0.1f, 0.5f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.2f, 0.3f);
    glVertex2f(0.1f, 0.3f);
    glVertex2f(0.2f, 0.3f);
    glVertex2f(0.2f, 0.6f);
    glVertex2f(0.1f, 0.6f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.2f, 0.3f);
    glVertex2f(-0.2f, -0.7f);
    glVertex2f(-0.1f, -0.7f);
    glVertex2f(-0.1f, -0.6f);
    glVertex2f(-0.2f, -0.6f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.2f, 0.3f);
    glVertex2f(0.2f, -0.7f);
    glVertex2f(0.3f, -0.7f);
    glVertex2f(0.3f, -0.6f);
    glVertex2f(0.2f, -0.6f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-0.2f, -0.4f);
    glVertex2f(-0.2f, -0.6f);
    glVertex2f(-0.1f, -0.6f); //leg light
    glVertex2f(-0.1f, -0.4f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.2f, -0.6f);
    glVertex2f(0.3f, -0.6f);
    glVertex2f(0.3f, -0.3f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(-0.3f, -0.3f);
    glVertex2f(-0.3f, -0.7f);  //leg dark
    glVertex2f(-0.2f, -0.7f);
    glVertex2f(-0.2f, -0.3f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(0.1f, -0.4f);
    glVertex2f(0.1f, -0.7f);
    glVertex2f(0.2f, -0.7f);
    glVertex2f(0.2f, -0.4f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.4f, -0.2f);
    glVertex2f(-0.4f, -0.5f);
    glVertex2f(-0.3f, -0.5f);
    glVertex2f(-0.3f, -0.2f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.4f, -0.2f);
    glVertex2f(0.4f, -0.5f);
    glVertex2f(0.3f, -0.5f);
    glVertex2f(0.3f, -0.2f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.2f, 0.2f, 0.2f);
    glVertex2f(-0.1f, 0.3f);
    glVertex2f(-0.2f, 0.3f);
    glVertex2f(-0.2f, 0.6f);
    glVertex2f(-0.1f, 0.6f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.1f, -0.4f);
    glVertex2f(-0.1f, -0.5f);
    glVertex2f(0.1f, -0.5f);
    glVertex2f(0.1f, -0.4f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.2f, 0.2f, 0.2f);
    glVertex2f(-0.3f, -0.6f);
    glVertex2f(-0.3f, -0.7f);
    glVertex2f(-0.2f, -0.7f);
    glVertex2f(-0.2f, -0.6f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.2f, 0.2f, 0.2f);
    glVertex2f(0.1f, -0.6f);
    glVertex2f(0.1f, -0.7f);
    glVertex2f(0.2f, -0.7f);
    glVertex2f(0.2f, -0.6f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.2f, 0.2f, 0.2f);
    glVertex2f(-0.3f, -0.2f);
    glVertex2f(-0.3f, -0.3f);
    glVertex2f(-0.2f, -0.3f);
    glVertex2f(-0.2f, -0.2f);

	glEnd();
     glBegin(GL_POLYGON);

    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-0.4f, 0.0f);
    glVertex2f(-0.3f, 0.0f);
    glVertex2f(-0.3f, 0.1f);
    glVertex2f(-0.4f, 0.1f);


	glEnd();
     glBegin(GL_POLYGON);

    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.3f, 0.1f);
    glVertex2f(0.4f, 0.1f);


	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f(-0.4f, -0.1f);
    glVertex2f(-0.4f, -0.0f);
    glVertex2f(-0.3f, -0.0f);
    glVertex2f(-0.3f, -0.1f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f(0.4f, -0.1f);
    glVertex2f(0.4f, -0.0f);
    glVertex2f(0.3f, -0.0f);
    glVertex2f(0.3f, -0.1f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f(-0.1f, 0.2f);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.2f, 0.3f);
    glVertex2f(-0.1f, 0.3f);

	glEnd();
	glBegin(GL_POLYGON);

    glColor3f(0.8f, 0.4f, 0.0f);
    glVertex2f(-0.2f, 0.2f);
    glVertex2f(-0.1f,0.2f);
    glVertex2f(-0.1f, 0.3f);
    glVertex2f(-0.2f, 0.3f);

	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("BATMAN");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
