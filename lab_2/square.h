#ifndef HEXAGON_H
#define HEXAGON_H
#include <iostream>
#include "figure.h"
#include "point.h"


class Square : public Figure {
public:
    Square();
    Square(istream &is);
    Square(Point a, Point b, Point c, Point d);
    Square(Square &other);
    double Area();
    size_t VertexesNumber();
    virtual ~Square();
    Square& operator=(const Square& other);
    Square& operator==(const Square& other);
    friend ostream& operator<<(ostream& os, Square& h);
private:
    Point a, b, c, d;
};

#endif 