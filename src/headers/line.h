#ifndef LINE_H
#define LINE_H

#include "color.h"
#include <GL/glut.h>

class LINE : public COLOR{
protected:
    int lngth;
    int x[2];
    int y[2];
    int lineWidth;
public:
    LINE();
    void setLine();
    int getX();
    int getY();
    void getLine();
    void drawLine(COLOR);
    void setLineWidth();
};

#endif // LINE_H
