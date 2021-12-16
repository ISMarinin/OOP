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
    Angle();

    double Rad(Angle a);        // Перевод в радианы
    void Reduction(Angle a);    // Округление 0-360
    void Trig(Angle a);         // Тригонометрические функции

    Angle operator+(const Angle &a1);      // Сумма углов   
    Angle operator-(const Angle &a1);      // Разность углов
    Angle operator/(Angle aa);             // Частное углов

    friend ostream& operator<<(ostream &out, const Angle &a);
    friend istream& operator>>(istream &in, Angle &a);                       

private:
    int deg;
    int min;
    int rad;
};

#endif 