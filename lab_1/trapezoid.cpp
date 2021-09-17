#include "point.h"
#include "figure.h"
#include "trapezoid.h"

Trapezoid :: Trapezoid (istream &is) {

    cout << "Coordinates of the trapezoid: " << endl;
    cin >> a >> b >> c >> d;
    cout << "Trapezoid created" << endl;
} 

void Trapezoid :: Print() {

    cout << "Trapezoid: " << a << ' ' << b << ' ' << c << ' ' << d << endl;

}

double Trapezoid :: Area() {

    double s = ((abs(a.x() - d.x()) + abs(b.x() - c.x())) / 2) *  abs(a.y() - b.y());
    return s;

}

size_t Trapezoid :: VartexesNumber() {

    size_t n = 4;
    return n;

} 