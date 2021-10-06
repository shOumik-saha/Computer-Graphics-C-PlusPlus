#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include<windows.h>
#include<mmsystem.h>
#define PI 3.14159265358979323846

using namespace std;
GLfloat positionSun = 0.0f;
GLfloat positionBoard1 = 0.0f;
void init(void)
{
gluOrtho2D(0,800,400,0);
glOrtho(0,800,500,0,1,-1);
}
void lighteningEye()
{

//NotunGhorWindow2LighteningEyes1
glPushMatrix();
//glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x10=-0.39; GLfloat y10=-0.12; GLfloat radius10 =0.011f;
int triangleAmount10 = 100; //# of triangles used to draw circle

GLfloat twicePi10 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0, 0.0, 0.0);
glVertex2f(x10, y10); // Center of circle
for(int i2 = 0; i2 <= triangleAmount10;i2++)
{
glVertex2f(
x10 + (radius10 * cos(i2 * twicePi10 / triangleAmount10)),
y10 + (radius10 * sin(i2 * twicePi10 / triangleAmount10))
);
}
glEnd();
glPopMatrix();
//NotunGhorWindow2LighteningEyes2
glPushMatrix();
//glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x11=-0.35; GLfloat y11=-0.12; GLfloat radius11 =0.011f;
int triangleAmount11 = 100; //# of triangles used to draw circle

GLfloat twicePi11 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0, 0.0, 0.0);
glVertex2f(x11, y11); // Center of circle
for(int i2 = 0; i2 <= triangleAmount11;i2++)
{
glVertex2f(
x11 + (radius11 * cos(i2 * twicePi11 / triangleAmount11)),
y11 + (radius11 * sin(i2 * twicePi11 / triangleAmount11))
);
}
glEnd();
glPopMatrix();
}
void sun()
{

 //sun (move)
glPushMatrix();
glTranslatef(0.0f,positionSun, 0.0f);
GLfloat x1=0.7; GLfloat y1=0.7; GLfloat radius1 =0.1f;
int triangleAmount = 100; //# of triangles used to draw circle

GLfloat twicePi = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 140, 0);
glVertex2f(x1, y1); // center of circle
for(int i1 = 0; i1 <= triangleAmount;i1++)
{
glVertex2f(
x1 + (radius1 * cos(i1 * twicePi / triangleAmount)),
y1 + (radius1 * sin(i1 * twicePi / triangleAmount))
);
}
glEnd();
glPopMatrix();
}
void steadyObjects()
{
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-1.0, -0.2); //spike1
glVertex2f(1.0, -0.2);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f); //spike2
glVertex2f(-1.0, -0.25);
glVertex2f(1.0, -0.25);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-1.0, -0.3); //spike3
glVertex2f(1.0, -0.3);
glEnd();
glBegin(GL_QUADS);
glColor3ub(192,192,192);
glVertex2f(0.3, -0.15);
glVertex2f(0.33, -0.15); //pillrer
glVertex2f(0.33, -0.35);
glVertex2f(0.3, -0.35);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.8, 0.06);
glVertex2f(-0.8, 0.4); //backbuilding1_border
glVertex2f(-0.557,0.4);
glVertex2f(-0.557, 0.06);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(193,190,189);
glVertex2f(-0.8, 0.06);
glVertex2f(-0.8, 0.4); //backbuilding1
glVertex2f(-0.56,0.4);
glVertex2f(-0.56, 0.06);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(128,128,128);
glVertex2f(-0.8, 0.06);
glVertex2f(-0.8, -0.4); //backbuilding2
glVertex2f(-0.56,-0.4);
glVertex2f(-0.56,0.06);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.8, 0.06); //building_border
glVertex2f(-0.56, 0.06);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(20,37,155);
glVertex2f(-0.83, 0.38);
glVertex2f(-0.53, 0.38); //back_buildingRoof
glVertex2f(-0.53, 0.43);
glVertex2f(-0.83, 0.43);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.788, 0.412);
glVertex2f(-0.788, -0.402); //Wall_border
glVertex2f(-0.952, -0.402);
glVertex2f(-0.952, 0.412);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(221,221,221);
glVertex2f(-0.79, 0.41);
glVertex2f(-0.79, -0.4); //Wall
glVertex2f(-0.95, -0.4);
glVertex2f(-0.95, 0.41);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.79, 0.31); //brick1
glVertex2f(-0.95, 0.31);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.79, 0.21); //brick2
glVertex2f(-0.95, 0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.79, 0.11); //brick3
glVertex2f(-0.95, 0.11);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.79, 0.01); //brick4
glVertex2f(-0.95, 0.01);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.79, -0.09); //brick5
glVertex2f(-0.95, -0.09);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.79, -0.19); //brick6
glVertex2f(-0.95, -0.19);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.79, -0.29); //brick7
glVertex2f(-0.95, -0.29);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.87, 0.41); //brick1
glVertex2f(-0.87, 0.31);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.83, 0.31); //brick2
glVertex2f(-0.83, 0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.91, 0.31); //brick2
glVertex2f(-0.91, 0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.87, 0.21); //brick3
glVertex2f(-0.87, 0.11);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.83, 0.11); //brick2
glVertex2f(-0.83, 0.01);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.91, 0.11); //brick2
glVertex2f(-0.91, 0.01);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.87, 0.01); //brick1
glVertex2f(-0.87, -0.09);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.83, -0.09); //brick2
glVertex2f(-0.83, -0.19);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.91, -0.09); //brick2
glVertex2f(-0.91, -0.19);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.87, -0.19); //brick1
glVertex2f(-0.87, -0.29);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.83, -0.29); //brick2
glVertex2f(-0.83, -0.4);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.91, -0.29); //brick2
glVertex2f(-0.91, -0.4);
glEnd();
glBegin(GL_QUADS);
glColor3ub(34,60,100);
glVertex2f(-0.6, 0.25);
glVertex2f(-0.6, 0.2); //back_building_Window
glVertex2f(-0.7, 0.2);
glVertex2f(-0.7, 0.25);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(179,165,161);
glVertex2f(-0.75, 0.7);
glVertex2f(-0.75, -0.4); //towerStand1
glVertex2f(-0.74,-0.4);
glVertex2f(-0.74,0.7);
glEnd();
glBegin(GL_QUADS);
glColor3ub(179,165,161);
glVertex2f(-0.65, 0.7);
glVertex2f(-0.65, -0.4); //towerStand2
glVertex2f(-0.64,-0.4);
glVertex2f(-0.64,0.7);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(114,90,82);
glVertex2f(-0.74, 0.7);
glVertex2f(-0.74, -0.4); //towerStand1
glVertex2f(-0.73,-0.4);
glVertex2f(-0.73,0.7);
glEnd();
glBegin(GL_QUADS);
glColor3ub(114,90,82);
glVertex2f(-0.64, 0.7);
glVertex2f(-0.64, -0.4); //towerStand2
glVertex2f(-0.63,-0.4);
glVertex2f(-0.63,0.7);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(114,90,82);
glVertex2f(-0.73, 0.27);
glVertex2f(-0.73, 0.3); //towerHolder1
glVertex2f(-0.65, 0.1);
glVertex2f(-0.65, 0.07);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(179,165,161);
glVertex2f(-0.64, 0.27);
glVertex2f(-0.64, 0.3); //towerHolder2
glVertex2f(-0.73, 0.1);
glVertex2f(-0.73, 0.07);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(114,90,82);
glVertex2f(-0.73, -0.27);
glVertex2f(-0.73, -0.3); //towerHolder3
glVertex2f(-0.65, -0.1);
glVertex2f(-0.65, -0.07);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(179,165,161);
glVertex2f(-0.64, -0.27);
glVertex2f(-0.64, -0.3); //towerHolder4
glVertex2f(-0.73, -0.1);
glVertex2f(-0.73, -0.07);
glEnd();

//{tower human}
glBegin(GL_POLYGON);
glColor3ub(46,72,35);
glVertex2f(-0.70, 0.56);
glVertex2f(-0.71, 0.56);
glVertex2f(-0.71, 0.61);
glVertex2f(-0.70, 0.61);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(89,134,56);
glVertex2f(-0.69, 0.59);
glVertex2f(-0.70, 0.59);
glVertex2f(-0.70, 0.61);
glVertex2f(-0.69, 0.61);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(174,181,80);
glVertex2f(-0.70, 0.59);
glVertex2f(-0.70, 0.56);
glVertex2f(-0.67, 0.56);
glVertex2f(-0.67, 0.59);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(174,181,80);
glVertex2f(-0.67, 0.59);
glVertex2f(-0.67, 0.575);
glVertex2f(-0.66, 0.575);
glVertex2f(-0.66, 0.59);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(239,201,143);
glVertex2f(-0.69, 0.59);
glVertex2f(-0.68, 0.59);
glVertex2f(-0.68, 0.64);
glVertex2f(-0.69, 0.64);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(46,72,35);
glVertex2f(-0.665, 0.64);
glVertex2f(-0.683, 0.67);
glVertex2f(-0.7, 0.64);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.68, 0.64);
glVertex2f(-0.669, 0.626);
glVertex2f(-0.674, 0.61);
glVertex2f(-0.68, 0.605);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(239,201,143);
glVertex2f(-0.68, 0.64);
glVertex2f(-0.67, 0.625);
glVertex2f(-0.675, 0.61);
glVertex2f(-0.68, 0.61);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.678, 0.63);
glVertex2f(-0.676, 0.63);
glEnd();
//{tower human end}
glBegin(GL_QUADS);
glColor3ub(114,90,82);
glVertex2f(-0.765, 0.56);
glVertex2f(-0.765, 0.46); //tower_base
glVertex2f(-0.615, 0.46);
glVertex2f(-0.615, 0.56);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(114,90,82);
glVertex2f(-0.78, 0.7);
glVertex2f(-0.69,0.85); //towerRoof
glVertex2f(-0.6, 0.7);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.563, 0.03);
glVertex2f(-0.563, -0.4); //building_Connector_border
glVertex2f(-0.443, -0.4);
glVertex2f(-0.443, 0.105);
glVertex2f(-0.563, 0.105);
glVertex2f(-0.583, 0.06);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(223,203,156);
glVertex2f(-0.56, 0.03);
glVertex2f(-0.56, -0.4); //building_Connector
glVertex2f(-0.45, -0.4);
glVertex2f(-0.45, 0.1);
glVertex2f(-0.56, 0.1);
glVertex2f(-0.58, 0.06);
glEnd();
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.56, 0.03);
glVertex2f(-0.45, 0.03);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.26, 0.465);
glVertex2f(-0.365,0.305); //NotunGhorChalBorder
glVertex2f(-0.155, 0.305);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(110,144,75);
glVertex2f(-0.26, 0.46);
glVertex2f(-0.36,0.3); //NotunGhorChal
glVertex2f(-0.16, 0.3);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.365,0.305);
glVertex2f(-0.405,0.25);
glVertex2f(-0.115,0.25); //NotunGhorChalErNicherQuadBorder
glVertex2f(-0.155, 0.305);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(110,144,75);
glVertex2f(-0.36,0.3);
glVertex2f(-0.40,0.25);
glVertex2f(-0.12,0.25); //NotunGhorChalErNicherQuad
glVertex2f(-0.16, 0.3);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.41,0.255);
glVertex2f(-0.115,0.255);
glVertex2f(-0.075,0.195); //Notun_GhorChal_Er_Nicher_Quad2Border
glVertex2f(-0.455,0.195);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(110,144,75);
glVertex2f(-0.41,0.25);
glVertex2f(-0.12,0.25);
glVertex2f(-0.08,0.2); //NotunGhor_Chal_ErNicher_Quad2
glVertex2f(-0.45,0.2);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.073,0.2); //NotunGhorborder
glVertex2f(-0.453,0.2);
glVertex2f(-0.453,-0.405);
glVertex2f(-0.073,-0.405);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(110,144,75);
glVertex2f(-0.08,0.195); //NotunGhor
glVertex2f(-0.45,0.195);
glVertex2f(-0.45,-0.4);
glVertex2f(-0.08,-0.4);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.2,0.15); //NotunGhorWindow1
glVertex2f(-0.3,0.15);
glVertex2f(-0.3,0.07);
glVertex2f(-0.2,0.07);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.43,-0.05); //NotunGhorWindow2
glVertex2f(-0.3,-0.05);
glVertex2f(-0.3,-0.17);
glVertex2f(-0.43,-0.17);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(-0.028,0.145); //right_wall_border
glVertex2f(-0.222,0.145);
glVertex2f(-0.222,-0.405);
glVertex2f(-0.028,-0.405);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(221,221,221);
glVertex2f(-0.03,0.14); //right_wall
glVertex2f(-0.22,0.14);
glVertex2f(-0.22,-0.4);
glVertex2f(-0.03,-0.4);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.03, 0.04); //right_brick
glVertex2f(-0.22, 0.04);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.03, 0.04); //right_brick1
glVertex2f(-0.22, 0.04);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.03, -0.06); //right_brick_lines_horizontal
glVertex2f(-0.22, -0.06);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.03, -0.16); //right_brick_lines_horizontal
glVertex2f(-0.22, -0.16);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.03, -0.26); //right_brick_lines_horizontal
glVertex2f(-0.22, -0.26);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.03, -0.36); //right_brick_lines_horizontal
glVertex2f(-0.22, -0.36);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.095, 0.14); //brick_line_1
glVertex2f(-0.095, 0.04);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.158, 0.14); //brick_line2
glVertex2f(-0.158, 0.04);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.127, 0.04); //brick_line3
glVertex2f(-0.127, -0.06);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.095, -0.06); //brick_line4
glVertex2f(-0.095, -0.16);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.158, -0.06); //brick_line5
glVertex2f(-0.158, -0.16);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.127, -0.16); //brick_line6
glVertex2f(-0.127, -0.26);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.095, -0.26); //brick_line7
glVertex2f(-0.095, -0.36);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.158, -0.26); //brick_line8
glVertex2f(-0.158, -0.36);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.127, -0.36); //brick_line9
glVertex2f(-0.127, -0.4);
glEnd();

}
void shootingBoard()
{

    //Shooting_Board_1 (move)
//start_from_here
glPushMatrix();
glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x2=-0.67; GLfloat y2=-0.2; GLfloat radius2 =0.03f;
int triangleAmount2 = 100; //# of triangles used to draw circle

GLfloat twicePi2 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(x2, y2); // center of circle
for(int i2 = 0; i2 <= triangleAmount2;i2++)
{
glVertex2f(
x2 + (radius2 * cos(i2 * twicePi2 / triangleAmount2)),
y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
);
}
glEnd();
glPopMatrix();
//Shooting Board(move)
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.73, -0.23);
glVertex2f(-0.61,-0.23);
glVertex2f(-0.61,-0.4);
glVertex2f(-0.73, -0.4);
glEnd();
//Shooting_Board_1 Inner circle Red
glPushMatrix();
glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x3=-0.67; GLfloat y3=-0.31; GLfloat radius3 =0.05f;
int triangleAmount3 = 100; //# of triangles used to draw circle

GLfloat twicePi3 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0, 0.0, 0.0);
glVertex2f(x3, y3); // Center of circle
for(int i2 = 0; i2 <= triangleAmount3;i2++)
{
glVertex2f(
x3 + (radius3 * cos(i2 * twicePi3 / triangleAmount3)),
y3 + (radius3 * sin(i2 * twicePi3 / triangleAmount3))
);
}
glEnd();
glPopMatrix();
//ShootingBoard_1_Inner circle White
glPushMatrix();
glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x4=-0.67; GLfloat y4=-0.31; GLfloat radius4 =0.03f;
int triangleAmount4 = 100; //# of triangles used to draw circle

GLfloat twicePi4 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0, 1.0, 1.0);
glVertex2f(x4, y4); //center of circle
for(int i2 = 0; i2 <= triangleAmount4;i2++)
{
glVertex2f(
x4 + (radius4 * cos(i2 * twicePi4 / triangleAmount4)),
y4 + (radius4 * sin(i2 * twicePi4 / triangleAmount4))
);
}
glEnd();
glPopMatrix();
//ShootingBoard_1_Inner circle black
glPushMatrix();
glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x5=-0.67; GLfloat y5=-0.31; GLfloat radius5 =0.02f;
int triangleAmount5 = 100; //# of triangles used to draw circle

GLfloat twicePi5= 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(x5, y5); //center of circle
for(int i1 = 0; i1 <= triangleAmount5;i1++)
{
glVertex2f(
x5 + (radius5* cos(i1 * twicePi5 / triangleAmount5)),
y5 + (radius5* sin(i1 * twicePi5 / triangleAmount5))
);
}
glEnd();
glPopMatrix();
//shooting board_1 ends here!!

//another shooting board!
//Shooting_Board_2 (move)
//start_from_here
glPushMatrix();
glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x6=-0.45; GLfloat y6=-0.25; GLfloat radius6 =0.028f;
int triangleAmount6 = 100; //# of triangles used to draw circle

GLfloat twicePi6 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(x6, y6); // center of circle
for(int i2 = 0; i2 <= triangleAmount6;i2++)
{
glVertex2f(
x6 + (radius6 * cos(i2 * twicePi6 / triangleAmount6)),
y6 + (radius6 * sin(i2 * twicePi6 / triangleAmount6))
);
}
glEnd();
glPopMatrix();
//Shooting Board(move)

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.41, -0.278);
glVertex2f(-0.49,-0.278);
glVertex2f(-0.49,-0.41);
glVertex2f(-0.41, -0.41);
glEnd();
//Shooting_Board_2 Inner circle Red
glPushMatrix();
glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x7=-0.45; GLfloat y7=-0.34; GLfloat radius7 =0.034f;
int triangleAmount7 = 100; //# of triangles used to draw circle

GLfloat twicePi7 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0, 0.0, 0.0);
glVertex2f(x7, y7); // Center of circle
for(int i2 = 0; i2 <= triangleAmount7;i2++)
{
glVertex2f(
x7 + (radius7 * cos(i2 * twicePi7 / triangleAmount7)),
y7 + (radius7 * sin(i2 * twicePi7 / triangleAmount7))
);
}
glEnd();
glPopMatrix();
//ShootingBoard_2_Inner circle White
glPushMatrix();
glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x8=-0.45; GLfloat y8=-0.34; GLfloat radius8 =0.023f;
int triangleAmount8 = 100; //# of triangles used to draw circle

GLfloat twicePi8 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0, 1.0, 1.0);
glVertex2f(x8, y8); // Center of circle
for(int i2 = 0; i2 <= triangleAmount7;i2++)
{
glVertex2f(
x8 + (radius8 * cos(i2 * twicePi8 / triangleAmount8)),
y8 + (radius8 * sin(i2 * twicePi8 / triangleAmount8))
);
}
glEnd();
glPopMatrix();
//ShootingBoard_1_Inner circle black
glPushMatrix();
glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x9=-0.45; GLfloat y9=-0.34; GLfloat radius9 =0.015f;
int triangleAmount9 = 100; //# of triangles used to draw circle

GLfloat twicePi9 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(x9, y9); // Center of circle
for(int i2 = 0; i2 <= triangleAmount9;i2++)
{
glVertex2f(
x9 + (radius9 * cos(i2 * twicePi9 / triangleAmount9)),
y9 + (radius9 * sin(i2 * twicePi9 / triangleAmount9))
);
}
glEnd();
glPopMatrix();
//shooting board_2 ends here!! */
}
void display(void)
{
glClearColor(1,1,1,1);
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(10.0);
glLoadIdentity();
steadyObjects();
lighteningEye();
shootingBoard();
sun();
glLineWidth(1.5);
glutSwapBuffers();
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
glutInitWindowPosition(-1,-1);
glutInitWindowSize(1200,800);
glutCreateWindow("project");
init();
glutDisplayFunc(display);
glutIdleFunc(display);
glutMainLoop();
return 0;
}
