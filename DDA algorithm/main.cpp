#include <GL/glut.h>
#include<stdio.h>>
#include <math.h>
#include <stdlib.h>

float X1, Y1, X2, Y2;

void setplot(GLint X, GLint Y)
{
  glBegin(GL_POINTS);
  glVertex2i(X, Y);
  glEnd();
  glFlush();
}

void DDA(int X1, int Y1, int X2, int Y2)
{
  int I;
  float Length;
  float X, Y, Xinc, Yinc;
  Length = abs(X2 - X1);
  if (abs(Y2 - Y1) > Length)
    Length = abs(Y2 - Y1);
  Xinc = (X2 - X1) / (Length);
  Yinc = (Y2 - Y1) / (Length);
  X = X1+0.5;
  Y = Y1+0.5;
  for (I = 0; I < Length; I++)
  {
    setplot((X + 0.5), (Y + 0.5));
    X = X + Xinc;
    Y = Y + Yinc;
  }
}

void drawline()
{
     DDA(X1, Y1, X2, Y2);
}

void init(void)
{
  glClearColor(1.0, 1.0, 1.0, 0.0);
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(0.0, 300.0, 0.0, 300.0);
}
int main(int argc, char **argv)
{
  printf("DDA\nEnter co-ordinates to draw line(Co-ordinates in between (0 -300))");
  printf("X1 = ");
  scanf("%f", &X1);
  printf("Y1 = ");
  scanf("%f", &Y1);
  printf("X2 = ");
  scanf("%f", &X2);
  printf("Y2 = ");
  scanf("%f", &Y2);
  glutInit(&argc, argv);
  glutInitWindowSize(800,800);
  glutCreateWindow("DDA");
  init();
  glutDisplayFunc(drawline);
  glutMainLoop();
  return 0;
}
