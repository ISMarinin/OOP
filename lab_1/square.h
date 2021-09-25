#ifndef SQUARE_H
#define SQUARE_H

#include "figure.h"

class Square : public Figure {
public:

    Square(istream &is);
    
    void Print();
    size_t VertexesNumber();
    double Area ();
    
private:
    Point a, b, c, d;
};

#endif