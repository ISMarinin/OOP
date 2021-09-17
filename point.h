#ifndef POINT_H
#define POINT_H

#include <iostream>

using namespace std;

class Point {
public:
    Point();
    Point (istream &is);
    Point(double x, double y);

    double x();
    double y();

    friend istream &operator>>(istream &is, Point &p);
    friend ostream &operator<<(ostream &os, Point&p);

    friend class Square;
    friend class Rectangle;
    friend class Tarapezoid;

private:
    double x_;
    double y_;
 
};

#endif