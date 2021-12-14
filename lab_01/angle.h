#ifndef ANGLE_H
#define ANGLE_H
#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.141592653589793;

class Angle {
public:
    Angle(int deg1, int min1);
    Angle(const Angle &a);

    double Rad(Angle a);
    void Reduction(Angle a);
    void Sum(Angle a);
    void Diff(Angle a);
    void Print();
    double Div(Angle a);
    void Trig(Angle a);

private:
    int deg;
    int min;
};

#endif 