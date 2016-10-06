#include "headers/line.h"
#include <ctime>
#include <cstdlib>

#define srnd srand(time(NULL))

LINE::LINE(){
    srnd;
    x1 = rand() % 90;
    x2 = rand() % 45;
    y1 = rand() % 90;
    y2 = rand() % 45;
}

void LINE::setLine(){
    cout << "Enter 4(x1, y1, x2, y2) coords:" << endl;
    cin >> x1 >> x2 >> y1 >> y2;
}

void LINE::getLine(){
    cout << "x1: " << x1 << endl
        << "x2: " << x2 << endl
        << "y1: " << y1 << endl
        << "y2: " << y2 << endl;
}

void LINE::drawLine(COLOR clr){
    setLineWidth();
    glBegin(GL_LINES);
        glColor3d(clr.color3d[0], clr.color3d[1], clr.color3d[2]);
        glVertex3d(x1, y1, 0);
        glVertex3d(x2, y2, 0);
    glEnd();
}

void LINE::setLineWidth(){
    int x;
    cout << "Enter Line width:";
    cin >> x;
    glLineWidth(x);
}
