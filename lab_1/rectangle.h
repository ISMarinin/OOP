#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"

class Rectangle : public Figure {
public:

    Rectangle(istream &is);

    void Print();
    size_t VertexesNumber();
    double Area();

private:
    Point a, b, c, d;

};

#endif