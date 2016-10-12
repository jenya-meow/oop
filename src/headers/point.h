#ifndef POINT_H
#define POINT_H

#include "color.h"
#include <ctime>
#include <cstdlib>
#include <GL/glut.h>

class POINT : public COLOR{
protected:
	int lngth;
    int x;
    int y;
public:
    POINT();
    void setPointmp();
    void getPointmp();
    void drawPointmp(COLOR);
    int getX();
    int getY();
};

#endif // POINT_H
