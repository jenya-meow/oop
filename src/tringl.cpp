#include "headers/tringl.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cmath>

#define FOR(_x, _n) for(int _i = _x; _i < _n; _i++)
#define srnd srand(time(NULL))

TRINGL::TRINGL(){
    srnd;
    lngth = 6;
    FOR(0, 3){
        xCoords[_i] = 20 + rand() % 50;
        yCoords[_i] = 20 + rand() % 80;
    }

}

void TRINGL::drawTringl(COLOR clr){
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glPointSize(3);
    glBegin(GL_TRIANGLES);
        glColor3d(clr.color3d[0], clr.color3d[1], clr.color3d[2]);
        glVertex3d(xCoords[0], yCoords[0], 0);
        glVertex3d(xCoords[1], yCoords[1], 0);
        glVertex3d(xCoords[2], yCoords[2], 0);
    glEnd();
    std::cout << "Triangle is drawing" << std::endl;
}
