#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
#include <cstddef>
#include <cmath>
#include "point.h"

using namespace std;

class Figure {
public:

    virtual size_t VertexesNumber() = 0;
    virtual double Area() = 0;
    virtual void Print() = 0;

};

#endif