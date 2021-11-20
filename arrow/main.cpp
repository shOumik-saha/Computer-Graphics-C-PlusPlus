#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0);

glBegin(GL_POLYGON);

    glColor3ub(0,150,0);
    glVertex2f(-0.4f, -0.2f);
    glVertex2f(0.4f, -0.2f);
    glVertex2f(0.4f, 0.2f);  //rectangle
    glVertex2f(-0.4f, 0.2f);


	glEnd();

     glBegin(GL_POLYGON);

    glColor3ub(255,165,0);
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.7f, 0.3f);
    glVertex2f(0.7f, -0.3f);  //triangle


	glEnd();
     glBegin(GL_LINES);

    glColor3ub(255,0,0);
    glVertex2f(-0.2f, 0.15f);
    glVertex2f(0.0f, 0.15f); //first_line_of_arrow


	glEnd();
	     glBegin(GL_LINES);

    glColor3ub(255,0,0);
    glVertex2f(0.0f, 0.15f);
    glVertex2f(0.0f, -0.1f); //second_line_of_arrow


	glEnd();
		     glBegin(GL_LINES);

    glColor3ub(255,0,0);
    glVertex2f(0.0f, -0.1f);
    glVertex2f(0.13f, -0.1f); //third_line_of_arrow


	glEnd();
    glBegin(GL_POLYGON);

    glColor3ub(255,0,0);
    glVertex2f(0.13f, -0.13f);
     glVertex2f(0.15f, -0.1f);
    glVertex2f(0.13f, -0.07f); //triangle_of_arrow




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
