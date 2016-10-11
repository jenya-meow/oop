/* -lGL -lGLU -lX11 -lglut */
#include "headers/point.h"
#include "headers/line.h"
#include "headers/tringl.h"

#define FOR(_x, _n) for(int _i = _x; _i < _n; _i++)

int FLAG = 0;

void display(){
    if(FLAG) return;

    POINT point;
    LINE line;
    TRINGL tringl;
    COLOR clrPoint,
        clrLine,
        clrTringl,
        clr;

    glClear(GL_COLOR_BUFFER_BIT);
        /* ТОЧКИ */
        //clrPoint.setColor3d();
        //point.drawPointmp(clrPoint);

        /* ЛИНИИ */
        //clrLine.setColor3d();
        //line.drawLine(clrLine);

        /* ТРЕУГОЛЬНИК */
        //clrTringl.setColor3d();
        tringl.drawTringl(clrTringl);
        //clr.setColor3d();

    glFlush();

    FLAG = 1;
}

void timer(int = 0){
    display();
    glutTimerFunc(10, timer, 0);
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
    timer();
    glutMainLoop();

    return 0;
}
