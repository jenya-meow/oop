#ifndef LINE_H
#define LINE_H

#include "color.h"
#include <GL/glut.h>

class LINE : public COLOR{
protected:
    int x1,
        x2;
    int y1,
        y2;
    int lineWidth;
public:
    LINE();
    void setLine();
    void getLine();
    void drawLine(COLOR);
    void setLineWidth();
};

#endif // LINE_H
