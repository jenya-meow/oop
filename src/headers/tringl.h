#ifndef TRINGL_H
#define TRINGL_H

#include "color.h"
#include <GL/glut.h>

class TRINGL : public COLOR{
protected:
    int xCoords[3];
    int yCoords[3];
    int length;
public:
    TRINGL();
    void drawTringl(COLOR);
};

#endif // TRINGL_H
