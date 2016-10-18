#ifndef CIRCL_H
#define CIRCL_H

#include <GL/glut.h>
#include "color.h"

class CIRCL : public COLOR{
protected:
    float x;
    float y;
public:
    CIRCL():x(20 + rand() % 50),y(20 + rand() % 50)
    {};
    void drawCircl(COLOR);

};

#endif // CIRCL_H
