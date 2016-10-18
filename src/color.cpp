#include "headers/color.h"

COLOR::COLOR(){
    FOR(0, 3)
        color3d[_i] = 0.0;
}

void COLOR::setColor3d(){
    cout << endl << "Enter 3-int colors:" << endl;
    for(int i = 0; i < 3; i++)
        cin >> color3d[i];
    cout << endl << "Color is set";
}

double COLOR::getColor3d(){
    return *color3d;
}
