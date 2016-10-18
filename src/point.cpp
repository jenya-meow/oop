#include "headers/point.h"

POINT::POINT(){
    srand(time(NULL));
    x = 10 + rand() % 80;
    y = 10 + rand() % 80;
}

void POINT::setPointmp(){
    cout << "Enter coords point x, y:";
    cin >> x >> y;
}

void POINT::getPointmp(){
    cout << endl << "x: " << x << endl
        << "y: " << y << endl;
}

void POINT::drawPointmp(COLOR clr){
    glPointSize(20);
    glBegin(GL_POINTS);
        glColor3d(clr.color3d[0], clr.color3d[1], clr.color3d[2]);
        glVertex2i(x, y);
    glEnd();
    cout << endl << "Point is drawing" << endl;
}
