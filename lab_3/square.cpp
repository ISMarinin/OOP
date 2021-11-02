
#include <iostream>
#include "square.h"
#include <cmath>

Square::Square(): a(0,0),b(0,0),c(0,0),d(0,0) {} 

Square::Square(istream &is) {
  is >> a; 
  is >> b;
  is >> c;
  is >> d;
}

Square::Square(Point a1, Point b1,Point c1, Point d1): a(a1),b(b1),c(c1),d(d1) {}

double Square::Area() {
  return pow(abs((a.y() - b.y())), 2);
}

Square::~Square() {}

size_t Square::VertexesNumber() {
  return 4;
}

Square::Square(shared_ptr<Square>& other):Square(other->a, other->b, other->c, other->d) {}

Square& Square::operator = (const Square& other) {
  if (this == &other) return *this;
  a = other.a;
  b = other.b;
  c = other.c;
  d = other.d;
  return *this;
} 

Square& Square::operator== (const Square& other) {
  if (this == &other)
    cout << "Squares are equal" << endl;
  else
    cout << "Squares are not equal" << endl;
}

ostream& operator<<(ostream& os, shared_ptr<Square>& h) {
  os << h->a << h->b << h->c << h->d;
  return os;
}