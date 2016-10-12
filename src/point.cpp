#include "headers/point.h"

POINT::POINT(){
    srand(time(NULL));
    lngth = 2; // просто так
    this -> x = 10 + rand() % 80;
    this -> y = 10 + rand() % 80;
}

int POINT::getX(){
    return this -> x;
}

int POINT::getY(){
    return this -> y;
}

void POINT::setPointmp(){
    cout << "Enter coords point x, y:";
    do{
        cin >> x >> y;
    }while(x != y);
}

void POINT::getPointmp(){
    cout << endl << "x: " << x << endl
        << "y: " << y << endl;
}

void POINT::drawPointmp(COLOR clr){
    glPointSize(5);
    glBegin(GL_POINTS);
        glColor3d(clr.color3d[0], clr.color3d[1], clr.color3d[2]);
        glVertex2i(x, y);
    glEnd();
    cout << endl << "Point is drawing" << endl;
}