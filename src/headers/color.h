#ifndef COLOR_H
#define COLOR_H

#include <iostream>

#define FOR(_x, _n) for(int _i = _x; _i < _n; _i++)

using namespace std;

class COLOR{
public:
    double color3d[3];
    COLOR();
    void setColor3d();
    double getColor3d();
};

#endif // COLOR_H
