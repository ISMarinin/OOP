#include "point.h"
#include "figure.h"
#include "square.h"

Square :: Square (istream &is) {

    cout << "Coordinates of the square: " << endl;
    cin >> a >> b >> c >> d;
    cout  << "Square created" << endl;

}

void Square :: Print() {

    cout << "Rectangle " << a << ' ' << b << ' ' << c << ' ' << d << endl;

}

double Square :: Area() {

    double s = pow(abs(a.x() - d.x()), 2);
    return s;

}

size_t Square :: VartexesNumber() {

    size_t n = 4;
    return n;

} 