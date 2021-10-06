#include<stdio.h>
#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>


void Translation(void)
{
   int i,n;
   printf("Enter the number of edges: ");
   scanf("%d",&n);
   n=n*2;
   int arr[n-1];
   for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
   glClearColor(1.0, 1.0, 1.0, 1.0);
   glClear (GL_COLOR_BUFFER_BIT);
   glPointSize(1.0);
   glBegin(GL_POLYGON);
   glColor3ub(255, 0, 0);
   for(i=0;i<n;i++)
   {
      glVertex2i(arr[i],arr[i+1]);
   }
      int x,y;
   printf("Enter Translation factor for x and y: ");
   scanf("%d%d",&x,&y);
   for(i=0;i<n;i++)
   {
      arr[i]=arr[i] +x;
      i++;
      arr[i]=arr[i] +y;
   }
   for(i=0;i<n;i++)
   {
      glVertex2i(arr[i],arr[i+1]);
   }
   glEnd();
   glFlush ();
}

void Scaling(void)
   {
   int i,n;
   printf("Enter the number of edges: ");
   scanf("%d",&n);
   n=n*2;
   int arr[n-1];
   for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   glClearColor(1.0, 1.0, 1.0, 1.0);
   glClear (GL_COLOR_BUFFER_BIT);
   glPointSize(1.0);
   glBegin(GL_POLYGON);
   glColor3ub(255, 0, 0);
   for(i=0;i<n;i++)
   {
    glVertex2i(arr[i],arr[i+1]);
   }
   glEnd();
   int x,y;
   printf("Enter Scaling factors x and y: ");
   scanf("%d%d",&x,&y);
   for(i=0;i<n;i++)
   {
    arr[i]=arr[i] *x;
    i++;
    arr[i]=arr[i] *y;
   }
   for(i=0;i<n;i++)
   {
    glVertex2i(arr[i],arr[i+1]);
   }
   glEnd();
   glFlush ();
}



void myInit (void)
{
   glClearColor(0.0, 0.0, 0.0, 0.0);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluOrtho2D(0.0, 480.0, 0.0, 600.0);
}


int main(int argc, char** argv)
{
   int choice;
   printf("Enter your choice\n1. Translation\n2. Scaling \n3. Exit \n");
   scanf("%d",&choice);

   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize (700, 650);
   glutInitWindowPosition (100, 150);
   glutCreateWindow ("Translation and Scaling");
   if(choice==1)
   {
    glutDisplayFunc(Translation);
   }
   else if(choice==2)
   {
    glutDisplayFunc(Scaling);
   }
   else if(choice==3)
   {
    printf("Function Executed\n");
   }
   else
   {
    scanf("Wrong Input");
   }
   myInit ();
   glutMainLoop();
}
