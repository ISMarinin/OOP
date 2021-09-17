#include "point.h"
#include "figure.h"
#include "rectangle.h"
#include "square.h"
#include "trapezoid.h"

int main() {

    Rectangle rectangle(cin);
    cout << "S = " << rectangle.Area() << endl;
    rectangle.Print();
    cout << "Number of vertices: " << rectangle.VartexesNumber() << endl;

    Square square(cin);
    cout << "S = " << square.Area() << endl;
    square.Print();
    cout << "Number of vertices: " << square.VartexesNumber() << endl;

    Trapezoid tarapezoid(cin);
    cout << "S = " << tarapezoid.Area() << endl;
    tarapezoid.Print();
    cout << "Number of vertices: " << tarapezoid.VartexesNumber() << endl;

    return 0;
}