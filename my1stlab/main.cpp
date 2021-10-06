#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display() {
	//glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glPointSize(5.0);
	// Draw a Red 1x1 Square centered at origin

    glBegin(GL_POLYGONS);

    //glColor3f(1.65, 0.0, 0.0);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(0.0f,  1.0f);
    glVertex2f(0.0f,  1.0f);

    //glColor3f(1.0f, 0.0f, 0.0f);


    glEnd();


glFlush();  // Render now
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("First L"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
