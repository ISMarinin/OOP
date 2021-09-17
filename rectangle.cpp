#include "point.h"
#include "figure.h"
#include "rectangle.h"

Rectangle :: Rectangle (istream &is) {

    cout << "Coordinates of the rectangle: " << endl;
    cin >> a >> b >> c >> d;
    cout << "Rectangle created" << endl;

}

void Rectangle :: Print() {

    cout << "Rectangle: " << a << ' ' << b << ' ' << c << ' ' << d << endl;

}

double Rectangle :: Area () {

    double s = abs((a.x() - c.x()) * (a.y() - b.y()));
    return s;

}

size_t Rectangle :: VartexesNumber() {

    size_t n = 4;
    return n;

} 