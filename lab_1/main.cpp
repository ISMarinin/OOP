#include "point.h"
#include "figure.h"
#include "rectangle.h"
#include "square.h"
#include "trapezoid.h"

int main() {

    Rectangle rectangle(cin);
    cout << "S = " << rectangle.Area() << endl;
    rectangle.Print();
    cout << "Number of vertices: " << rectangle.VertexesNumber() << endl;

    Square square(cin);
    cout << "S = " << square.Area() << endl;
    square.Print();
    cout << "Number of vertices: " << square.VertexesNumber() << endl;

    Trapezoid tarapezoid(cin);
    cout << "S = " << tarapezoid.Area() << endl;
    tarapezoid.Print();
    cout << "Number of vertices: " << tarapezoid.VertexesNumber() << endl;

    return 0;
}