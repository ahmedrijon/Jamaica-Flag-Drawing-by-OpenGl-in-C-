#include<windows.h>
#include<GL/glut.h>
void Draw()
{

//background white color start
glClear(GL_COLOR_BUFFER_BIT);

glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//white
glBegin(GL_QUADS);
glVertex2d(15.0,10.0);
glVertex2d(15.0,-10.0);
glVertex2d(-15.0,-10.0);
glVertex2d(-15.0,10.0);
glEnd();
glFlush();
//background white color END


//right-Black start
glColor3f(0.0f, 0.0f, 0.0f);//Black
glBegin(GL_TRIANGLES);
glVertex2f(16.0,10.0);
glVertex2f(16.0,-10.0);

glVertex2f(1,0.0);
glVertex2f(-16.0,4.0);
glEnd();
glFlush();

// right-Black END

//left-Black start
glColor3f(0.0f, 0.0f, 0.0f);//Black
glBegin(GL_TRIANGLES);
glVertex2f(-16.0,10.0);
glVertex2f(-16.0,-10.0);

glVertex2f(-1,0.0);
glVertex2f(16.0,4.0);
glEnd();
glFlush();

// left-Black END

//bottom-Black start
glColor3f(0.0f, 1.0f, 0.0f);//Green
glBegin(GL_TRIANGLES);
glVertex2f(-14.0,-10.0);//left side
glVertex2f(14.0,-10.0);//right site

glVertex2f(0.0,-1);//matha
glVertex2f(-15.0,10.0);
glEnd();
glFlush();

// bottom-Black END


//top-Black start
glColor3f(0.0f, 1.0f, 0.0f);//Green
glBegin(GL_TRIANGLES);
glVertex2f(-14.0,10.0);//left side
glVertex2f(14.0,10.0);//right site

glVertex2f(0.0,1);//matha
glVertex2f(-15.0,10.0);
glEnd();
glFlush();

// top-Black END



}


void Initialize()
{
glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-25.0, 25.0, -25.0, 25.0, -25.0, 25.0);
}
int main(int Argc, char** Argv)
{
glutInit(&Argc, Argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(600,400);
glutInitWindowPosition(300,300);
glutCreateWindow("Jamaica");
Initialize();
glutDisplayFunc(Draw);
glutMainLoop();
return 0;
}
