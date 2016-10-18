#include "headers/circl.h"
#include <cmath>

void CIRCL::drawCircl(COLOR clr){
    glBegin(GL_LINES);
        for(int i(0); i < 36; i++){
            glColor3d(clr.color3d[0], clr.color3d[1], clr.color3d[2]);
            float xx = 10 * cos(i * M_PI / 18);
            float yy = 10 * sin(i * M_PI / 18);
            glVertex2d(xx + x, yy + y);
            xx = 10 * cos((i+1) * M_PI / 18);
            yy = 10 * sin((i+1) * M_PI / 18);
            glVertex2d(xx + x, yy + y);
        }
    glEnd();
}
