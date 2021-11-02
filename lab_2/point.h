#ifndef POINT_H
#define POINT_H

#include <iostream>

using namespace std;

class Point {
public:
  Point();
  Point(istream &is);
  Point(double x, double y);

  double dist(Point& other);
  
  friend istream& operator>>(istream& is, Point& p);
  friend ostream& operator<<(ostream& os, Point& p);

  double x();
  double y();

private:
  double x_;
  double y_;
};

#endif
