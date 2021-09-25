#include <cmath>
#include "point.h"

Point :: Point() : x_(0.0), y_(0.0) {}
Point :: Point(double x, double y) : x_(x), y_(y) {}
Point :: Point (istream &is) {
    is >> x_ >> y_;
}

double Point :: x() {
    return x_;
}

double Point :: y() {
    return y_;
}

istream &operator>>(istream &is, Point &p) {
    is >> p.x_ >> p.y_;

    return is;
}

ostream &operator<<(ostream &os, Point &p) {
    os << "(" << p.x_ << ";" << p.y_ << ")";

    return os;
}