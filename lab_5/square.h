#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
#include <cmath>
#include "figure.h"
#include "point.h"

class Square : public Figure {
public:

    Square();
    Square(istream &is);
    Square(Point a, Point b, Point c, Point d);
    Square(shared_ptr<Square>& other);
    double Area();
    size_t VertexesNumber();
    virtual ~Square();
    Square& operator=(const Square& other);
    Square& operator==(const Square& other);
    friend ostream& operator<<(ostream& os, shared_ptr<Square>& h);
    
private:
    Point a, b, c, d;
};

#endif