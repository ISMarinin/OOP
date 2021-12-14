#include "angle.h"

Angle::Angle(int deg1, int min1) {
    deg = deg1;
    min = min1;
}

Angle::Angle(const Angle &a) {
    deg = a.deg;
    min = a.min;
}

double Angle::Rad(Angle a) {

    return (deg * pi / 180 + min * pi / (180 * 60));

}

void Angle::Reduction(Angle a) {

    cout << deg % 360 << " deg " << min << " min " << endl;
    
}

void Angle::Sum(Angle a){

    int sum1 = deg + a.deg;
    int sum2 = min + a.min;

    sum1 += sum2 / 100;
    sum2 %= 100;

    cout << sum1 << "deg " << sum2 << "min" << endl;
}

void Angle::Diff(Angle a){

    int diff1 = deg - a.deg;
    int diff2 = min - a.min;

    if (diff2 > 0) cout << diff1 << " deg " << diff2 << " min " << endl;
    else {
        diff2 = 100 + diff2;
        diff1 -= 1; 
        cout << diff1 << " deg " << diff2 << " min " << endl;
    }

}

double Angle::Div(Angle a) {

    return (deg * pi / 180 + min * pi / (180 * 60)) / (a.deg * pi / 180 + a.min * pi / (180 * 60));

}

void Angle::Trig(Angle a) {

    cout << "cos = " << cos(Rad(a)) << endl;
    cout << "sin = " << sin(Rad(a)) << endl;
    cout << "tan = " << tan(Rad(a)) << endl;

}

void Angle::Print() {

    cout  << deg << " deg " << min << " min " << endl;

}