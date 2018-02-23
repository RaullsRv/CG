#include <GL/glut.h>

void screen(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.9,0.6,0.6);
    glBegin(GL_POLYGON);
    glVertex3f(2.0,2.0,0.0);
    glVertex3f(8.0,2.0,0.0);
    glVertex3f(8.0,8.0,0.0);
    glVertex3f(2.0,8.0,0.0);
    glEnd();
    glFlush();

    glColor3f(1.0,0.2,0.1);
    glBegin(GL_TRIANGLES);
    glVertex3f(-8.0,2.0,0.0);
    glVertex3f(-2.0,2.0,0.0);
    glVertex3f(-5.0,8.0,0.0);
    glEnd();
    glFlush();

    glColor3f(0.9,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-5.0,-2.0,0.0);
    glVertex3f(-8.0,-5.0,0.0);
    glVertex3f(-8.0,-8.0,0.0);
    glVertex3f(-2.0,-8.0,0.0);
    glVertex3f(-2.0,-5.0,0.0);
    glEnd();
    glFlush();


	glColor3f(0.0,1.0,0.6);
    glBegin(GL_POLYGON);
    glVertex3f(3.0,-2.0,0.0);
    glVertex3f(1.0,-5.0,0.0);
    glVertex3f(3.0,-8.0,0.0);
    glVertex3f(8.0,-8.0,0.0);
    glVertex3f(10.0,-5.0,0.0);
    glVertex3f(8.0,-2.0,0.0);

    glEnd();
    glFlush();
    
    glColor3f(0.9,1.0,0.6);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-10,0,0.0);
    glVertex3f(10,0,0.0);
    
    glEnd();
    glFlush();
    
    glColor3f(0.9,1.0,0.6);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0,10,0.0);
    glVertex3f(0,-10,0.0);
    
    glEnd();
    glFlush();
	
}
void main1(void)
{
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-10,10,-10,10);
    glClearColor(0.0,0.0,0.0,0.0);
}


int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize (500, 500); 
   glutInitWindowPosition (100, 100);
   glutCreateWindow ("Practica 1");
   main1();
   glutDisplayFunc(screen); 
   glutMainLoop();
   return 0;   
}
