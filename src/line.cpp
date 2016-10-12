#include "headers/line.h"
#include <ctime>
#include <cstdlib>

#define srnd srand(time(NULL))

LINE::LINE(){
    srnd;
    lngth = 4;
    x[0] = rand() % 90;
    x[1] = rand() % 45;
    y[0] = rand() % 90;
    y[1] = rand() % 45;
}

int LINE::getX(){
    return this -> x;
}

int LINE::getY(){
    return this -> y;
}

void LINE::setLine(){
    cout << "Enter 4(x1, y1, x2, y2) coords:" << endl;
    cin >> x[0] >> x[1] >> y[0] >> y[1];
}

void LINE::getLine(){
    cout << "x1: " << x[0] << endl
        << "x2: " << x[1] << endl
        << "y1: " << y[0] << endl
        << "y2: " << y[1] << endl;
}

void LINE::drawLine(COLOR clr){
    setLineWidth();
    glBegin(GL_LINES);
        glColor3d(clr.color3d[0], clr.color3d[1], clr.color3d[2]);
        glVertex3d(x[0], y[0], 0);
        glVertex3d(x[1], y[1], 0);
    glEnd();
}

void LINE::setLineWidth(){
    int x;
    cout << "Enter Line width:";
    cin >> x;
    glLineWidth(x);
}
