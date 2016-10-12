#ifndef MOVE_H
#define MOVE_H

#include <GL/glut.h>
#include "line.h"
#include "point.h"
#include "tringl.h"

class MOVE{
protected:
	
public:
	MOVE(LINE, POINT, TRINGL);
	void moveFig();
};

#endif // MOVE_H