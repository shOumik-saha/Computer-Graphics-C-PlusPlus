#include <cstdio>
#include<iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include<cmath>
using namespace std;

int choice,pick;
int edges;
int X1,X2,X3,X4, Y1, Y2, Y3, Y4;
float Tx,Ty, Sx, Sy,theta;


void Translation()
{
    glBegin(GL_QUADS);
    glVertex2i(X1,Y1);
     glVertex2i(X2,Y2);
      glVertex2i(X3,Y3);
       glVertex2i(X4,Y4);
       glEnd();

       //After Translating
       glColor3ub (255, 0, 0);
          glBegin(GL_QUADS);
    glVertex2i(X1+Tx,Y1+Ty);
     glVertex2i(X2+Tx,Y2+Ty);
      glVertex2i(X3+Tx,Y3+Ty);
       glVertex2i(X4+Tx,Y4+Ty);
       glEnd();
}

void Scaling()
{
    glBegin(GL_QUADS);
    glVertex2i(X1,Y1);
     glVertex2i(X2,Y2);
      glVertex2i(X3,Y3);
       glVertex2i(X4,Y4);
       glEnd();

       //After Translating
       glColor3ub (0, 255, 0);
          glBegin(GL_QUADS);
    glVertex2i(X1*Sx,Y1*Sy);
     glVertex2i(X2*Sx,Y2*Sy);
      glVertex2i(X3*Sx,Y3*Sy);
       glVertex2i(X4*Sx,Y4*Sy);
       glEnd();
}
void rotation()
{
     if(pick==1)
     {
    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2i(X1*cos(theta)-Y1*sin(theta),X1*sin(theta)+Y1*cos(theta));
    glVertex2i(X2*cos(theta)-Y2*sin(theta),X2*sin(theta)+Y2*cos(theta));
    glVertex2i(X3*cos(theta)-Y3*sin(theta),X3*sin(theta)+Y3*cos(theta));
    glVertex2i(X4*cos(theta)-Y4*sin(theta),X4*sin(theta)+Y4*cos(theta));

    glColor3f(0.0f,0.0f,1.0f);

    glVertex2i(X1,Y1);
    glVertex2i(X1,Y2);
    glVertex2i(X3,Y3);
    glVertex2i(X4,Y4);
    glEnd();
     }
     else if(pick== 2)
     {
    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2i(X1*cos(theta)-Y1*sin(theta),X1*sin(theta)+Y1*cos(theta));
    glVertex2i(X2*cos(theta)+Y2*sin(theta),X2*sin(theta)-Y2*cos(theta));
    glVertex2i(X3*cos(theta)+Y3*sin(theta),X3*sin(theta)-Y3*cos(theta));
    glVertex2i(X4*cos(theta)+Y4*sin(theta),X4*sin(theta)-Y4*cos(theta));

    glColor3f(0.0f,0.0f,1.0f);

    glVertex2i(X1,Y1);
    glVertex2i(X1,Y2);
    glVertex2i(X3,Y3);
    glVertex2i(X4,Y4);
    glEnd();
     }
}

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);

if(choice == 1)
{
    Translation();
}
else if(choice == 2)
{
    Scaling();
}
else if(choice == 3)
{
     rotation();
}
else
{
     cout<<"wrong!!!";
}

glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}





int main(int argc, char** argv)
{

    cout<<"Enter your choice: ";
    cin>>choice;
    if(choice == 1)
    {
        //This is for Translation
        cout<<"Enter the no. of edges: ";
        cin>>edges;

        cout<<"Enter the co-ordinates of vertex 1: ";
        cin>>X1>>Y1;
        cout<<"Enter the co-ordinates of vertex 2: ";
        cin>>X2>>Y2;
        cout<<"Enter the co-ordinates of vertex 3: ";
        cin>>X3>>Y3;
        cout<<"Enter the co-ordinates of vertex 4: ";
        cin>>X4>>Y4;
        cout<<"Enter the Translation factor for x and y: ";
        cin>>Tx>>Ty;
    }
    else if (choice == 2)
    {
        //This is for scaling
        cout<<"Enter the no. of edges: ";
        cin>>edges;

        cout<<"Enter the co-ordinates of vertex 1: ";
        cin>>X1>>Y1;
        cout<<"Enter the co-ordinates of vertex 2: ";
        cin>>X2>>Y2;
        cout<<"Enter the co-ordinates of vertex 3: ";
        cin>>X3>>Y3;
        cout<<"Enter the co-ordinates of vertex 4: ";
        cin>>X4>>Y4;
        cout<<"Enter the Scaling factor for x and y: ";
        cin>>Sx>>Sy;
        cout<<"Enter the Mood: 1 for clockwise, 2 for anticlockwise: ";

    }
    else if (choice == 3)
    {
         //this is for rotation
        cout<<"Enter the no. of edges: ";
        cin>>edges;

        cout<<"Enter the co-ordinates of vertex 1: ";
        cin>>X1>>Y1;
        cout<<"Enter the co-ordinates of vertex 2: ";
        cin>>X2>>Y2;
        cout<<"Enter the co-ordinates of vertex 3: ";
        cin>>X3>>Y3;
        cout<<"Enter the co-ordinates of vertex 4: ";
        cin>>X4>>Y4;
        cout<<"Enter the degree: ";
        cin>>theta;
        cout<<"Enter the Mood: 1 for clockwise, 2 for anticlockwise: ";
        cin>>pick;
    }
    else
    {
         cout<<"wrong input";
    }

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
