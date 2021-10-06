#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0);


    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
     glVertex2f(-0.71f, -0.25f);
    glVertex2f(-0.75f, -0.29f);
    glVertex2f(0.87f, -0.29f);
    glVertex2f(0.91f, -0.15f);
    glVertex2f(-0.9f, -0.15f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
     glVertex2f(-0.89f, -0.14f);
    glVertex2f(0.91f, -0.14f);
    glVertex2f(0.95f, -0.10f);
    glVertex2f(-0.65f, -0.10f);
    glVertex2f(-0.72f, -0.06f);
    glVertex2f(-1.0f, -0.06f);



    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
     glVertex2f(-0.05f, -0.08f); //fat pillar
    glVertex2f(0.2f, -0.08f);
    glVertex2f(0.2f, 0.1f);
    glVertex2f(0.16f, 0.2f);
    glVertex2f(-0.05f, 0.2f);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
     glVertex2f(0.65f, -0.08f);
    glVertex2f(0.72f, -0.08f);//small pillar
    glVertex2f(0.72f, 0.2f);
    glVertex2f(0.68f, 0.2f);
    glVertex2f(0.65f,0.17f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.75f, -0.08f);
    glVertex2f(0.85f, -0.08f); //last collumn
    glVertex2f(0.85f, -0.05f);
    glVertex2f(0.75f,-0.05f);


    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.75f, 0.005f);
    glVertex2f(0.85f, 0.005f); //last collumn
    glVertex2f(0.85f, -0.04f);
    glVertex2f(0.75f,-0.04f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.75f, 0.01f);
    glVertex2f(0.85f, 0.01f); //last collumn
    glVertex2f(0.85f, 0.05f);
    glVertex2f(0.75f,0.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.75f, 0.06f);
    glVertex2f(0.85f, 0.06f); //last collumn
    glVertex2f(0.85f, 0.1f);
    glVertex2f(0.75f,0.1f);
    glEnd();
 //2nd pillar
  glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.6f, -0.08f);
    glVertex2f(0.5f, -0.08f); //last collumn
    glVertex2f(0.5f, -0.05f);
    glVertex2f(0.6f,-0.05f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.6f, 0.005f);
    glVertex2f(0.5f, 0.005f); //last collumn
    glVertex2f(0.5f, -0.04f);
    glVertex2f(0.6f,-0.04f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.6f, 0.01f);
    glVertex2f(0.5f, 0.01f); //last collumn
    glVertex2f(0.5f, 0.05f);
    glVertex2f(0.6f,0.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.6f, 0.06f);
    glVertex2f(0.5f, 0.06f); //last collumn
    glVertex2f(0.5f, 0.1f);
    glVertex2f(0.6f,0.1f);
    glEnd();
//3rd collumn

  glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.34f, -0.08f);
    glVertex2f(0.24f, -0.08f); //last collumn
    glVertex2f(0.24f, -0.05f);
    glVertex2f(0.34f,-0.05f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.34f, 0.005f);
    glVertex2f(0.24f, 0.005f); //last collumn
    glVertex2f(0.24f, -0.04f);
    glVertex2f(0.34f,-0.04f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.34f, 0.01f);
    glVertex2f(0.24f, 0.01f); //last collumn
    glVertex2f(0.24f, 0.05f);
    glVertex2f(0.34f,0.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.34f, 0.06f);
    glVertex2f(0.24f, 0.06f); //last collumn
    glVertex2f(0.24f, 0.1f);
    glVertex2f(0.34f,0.1f);
    glEnd();
    //4th
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.47f, -0.08f);
    glVertex2f(0.37f, -0.08f); //last collumn
    glVertex2f(0.37f, -0.05f);
    glVertex2f(0.47f,-0.05f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.47f, 0.005f);
    glVertex2f(0.37f, 0.005f); //last collumn
    glVertex2f(0.37f, -0.04f);
    glVertex2f(0.47f,-0.04f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.47f, 0.01f);
    glVertex2f(0.37f, 0.01f); //last collumn
    glVertex2f(0.37f, 0.05f);
    glVertex2f(0.47f,0.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.47f, 0.06f);
    glVertex2f(0.37f, 0.06f); //last collumn
    glVertex2f(0.37f, 0.1f);
    glVertex2f(0.47f,0.1f);
    glEnd();
    //5th pillar
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.10f, -0.08f);
    glVertex2f(-0.2f, -0.08f); //last collumn
    glVertex2f(-0.2f, -0.05f);
    glVertex2f(-0.10f,-0.05f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.10f, 0.005f);
    glVertex2f(-0.2f, 0.005f); //last collumn
    glVertex2f(-0.2f, -0.04f);
    glVertex2f(-0.10f,-0.04f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.10, 0.01f);
    glVertex2f(-0.2f, 0.01f); //last collumn
    glVertex2f(-0.2f, 0.05f);
    glVertex2f(-0.10f,0.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.10f, 0.06f);
    glVertex2f(-0.2f, 0.06f);
    glVertex2f(-0.2f, 0.1f);
    glVertex2f(-0.10f,0.1f);
    glEnd();
    //6th

     glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.34f, -0.08f);
    glVertex2f(-0.44f, -0.08f);
    glVertex2f(-0.44f, -0.05f);
    glVertex2f(-0.34f,-0.05f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.34f, 0.005f);
    glVertex2f(-0.44f, 0.005f);
    glVertex2f(-0.44f, -0.04f);
    glVertex2f(-0.34f,-0.04f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.34f, 0.01f);
    glVertex2f(-0.44f, 0.01f);
    glVertex2f(-0.44f, 0.05f);
    glVertex2f(-0.34f,0.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.34f, 0.06f);
    glVertex2f(-0.44f, 0.06f);
    glVertex2f(-0.44f, 0.1f);
    glVertex2f(-0.34f,0.1f);
    glEnd();
    //7th one
     glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.22f, -0.08f);
    glVertex2f(-0.32f, -0.08f);
    glVertex2f(-0.32f, -0.05f);
    glVertex2f(-0.22f,-0.05f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.22f, 0.005f);
    glVertex2f(-0.32f, 0.005f);
    glVertex2f(-0.32f, -0.04f);
    glVertex2f(-0.22f,-0.04f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.22f, 0.01f);
    glVertex2f(-0.32f, 0.01f);
    glVertex2f(-0.32f, 0.05f);
    glVertex2f(-0.22f,0.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.22f, 0.06f);
    glVertex2f(-0.32f, 0.06f);
    glVertex2f(-0.32f, 0.1f);
    glVertex2f(-0.22f,0.1f);
    glEnd();
    //8th one
      glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.34f, -0.08f);
    glVertex2f(-0.44f, -0.08f);
    glVertex2f(-0.44f, -0.05f);
    glVertex2f(-0.34f,-0.05f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.34f, 0.005f);
    glVertex2f(-0.44f, 0.005f);
    glVertex2f(-0.44f, -0.04f);
    glVertex2f(-0.34f,-0.04f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.34f, 0.01f);
    glVertex2f(-0.44f, 0.01f);
    glVertex2f(-0.44f, 0.05f);
    glVertex2f(-0.34f,0.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.34f, 0.06f);
    glVertex2f(-0.44f, 0.06f);
    glVertex2f(-0.44f, 0.1f);
    glVertex2f(-0.34f,0.1f);
    glEnd();
   //9th one
     glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.46f, -0.08f);
    glVertex2f(-0.56f, -0.08f);
    glVertex2f(-0.56f, -0.05f);
    glVertex2f(-0.46f,-0.05f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.46f, 0.005f);
    glVertex2f(-0.56f, 0.005f);
    glVertex2f(-0.56f, -0.04f);
    glVertex2f(-0.46f,-0.04f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.46f, 0.01f);
    glVertex2f(-0.56f, 0.01f);
    glVertex2f(-0.56f, 0.05f);
    glVertex2f(-0.46f,0.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.46f, 0.06f);
    glVertex2f(-0.56f, 0.06f);
    glVertex2f(-0.56f, 0.1f);
    glVertex2f(-0.46f,0.1f);
    glEnd();
    //10th
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.58f, -0.08f);
    glVertex2f(-0.68f, -0.08f);
    glVertex2f(-0.68f, -0.05f);
    glVertex2f(-0.58f,-0.05f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.58f, 0.005f);
    glVertex2f(-0.68f, 0.005f);
    glVertex2f(-0.68f, -0.04f);
    glVertex2f(-0.58f,-0.04f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.58f, 0.01f);
    glVertex2f(-0.68f, 0.01f);
    glVertex2f(-0.68f, 0.05f);
    glVertex2f(-0.58f,0.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.58f, 0.06f);
    glVertex2f(-0.68f, 0.06f);
    glVertex2f(-0.68f, 0.1f);
    glVertex2f(-0.58f,0.1f);
    glEnd();
    //11th


    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.70f, 0.005f);
    glVertex2f(-0.80f, 0.005f);
    glVertex2f(-0.80f, -0.04f);
    glVertex2f(-0.70f,-0.04f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.70f, 0.01f);
    glVertex2f(-0.80f, 0.01f);
    glVertex2f(-0.80f, 0.05f);
    glVertex2f(-0.70f,0.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.70f, 0.06f);
    glVertex2f(-0.80f, 0.06f);
    glVertex2f(-0.80f, 0.1f);
    glVertex2f(-0.70f,0.1f);
    glEnd();
        glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-0.70f, 0.06f);
    glVertex2f(-0.80f, 0.06f);
    glVertex2f(-0.80f, 0.1f);
    glVertex2f(-0.70f,0.1f);
    glEnd();



	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("test-1");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
