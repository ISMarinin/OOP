#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "figure.h"

class Trapezoid : public Figure {
public:

    Trapezoid(istream &is);

    void Print();
    size_t VertexesNumber();
    double Area();

private:
    Point a, b, c, d;

};

#endif