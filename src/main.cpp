/* -lGL -lGLU -lX11 -lglut */
#include "headers/point.h"
#include "headers/line.h"

int FLAG = 0;

void display(){
    if(FLAG) return;

    POINT point;
    LINE line;
    COLOR clrPoint,
        clrLine;

    glClear(GL_COLOR_BUFFER_BIT);
        clrPoint.setColor3d();
        point.drawPointmp(clrPoint);
        //clrLine.setColor3d();
        //line.drawLine(clrLine);
    glFlush();

    FLAG = 1;
}

int main(int argc, char **argv){
    cout << "Load..." << endl;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(300, 300);
    glutCreateWindow("Draw");
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 100.0, 0.0, 100.0, -1.0, 1.0);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
