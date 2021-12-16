#include "angle.h"

Angle::Angle(int deg1, int min1) {
    deg = deg1;
    min = min1;
}

Angle::Angle(const Angle &a) {
    deg = a.deg;
    min = a.min;
}

Angle::Angle() {
    deg = 0;
    min = 0;
}

double Angle::Rad(Angle a) {

    return (deg * pi / 180 + min * pi / (180 * 60));

}

void Angle::Reduction(Angle a) {

    cout << deg % 360 << " deg " << min << " min " << endl;
    
}

Angle Angle::operator+(const Angle& a1){
    
    int sum1 = deg + a1.deg;
    int sum2 = min + a1.min;

    sum1 += sum2 / 100;
    sum2 %= 100; 

    Angle ans(sum1, sum2);
    return ans;
}

Angle Angle::operator-(const Angle& a1){

    int diff1 = deg - a1.deg;
    int diff2 = min - a1.min;

    Angle ans(diff1, diff2);

    if (diff2 > 0) return ans;
    else {
        diff2 = 100 + diff2;
        diff1 -= 1; 
        return ans;
    }
}

Angle Angle::operator/(Angle aa) {
    
    double A1 = deg * pi / 180 + min * pi / (180 * 60);
    double A2 = aa.deg * pi / 180 + aa.min * pi / (180 * 60);
    double A = (A1 / A2) * 180 / pi;
    aa.deg = A;
    
    return aa;

} 

void Angle::Trig(Angle a) {

    cout << "cos = " << cos(Rad(a)) << endl;
    cout << "sin = " << sin(Rad(a)) << endl;
    cout << "tan = " << tan(Rad(a)) << endl;

}

istream& operator>>(istream &in, Angle &a) {
    in >> a.deg;
    in >> a.min;
    return in;
}

ostream& operator<<(ostream &out, const Angle &a){
    out << a.deg << " deg " << a.min << " min ";
    return out;
}