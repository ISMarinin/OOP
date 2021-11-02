
#include <iostream>
#include "tlinkedlist.h"

int main() {
  TLinkedList tlinkedlist;
  tlinkedlist.Empty();
  tlinkedlist.InsertLast(shared_ptr<Square>(new Square(Point(1,2),Point(1,3),Point(2,3),Point(2, 2))));
  tlinkedlist.InsertLast(shared_ptr<Square>(new Square(Point(11,12),Point(11,13),Point(12,13),Point(12, 12))));
  tlinkedlist.InsertLast(shared_ptr<Square>(new Square(Point(21,22),Point(21,23),Point(22,23),Point(22,22))));
  tlinkedlist.InsertLast(shared_ptr<Square>(new Square(Point(31,32),Point(31,33),Point(32,33),Point(32,32))));
  cout << tlinkedlist;
  tlinkedlist.RemoveLast();
  cout << tlinkedlist.Length() << endl;
  tlinkedlist.RemoveFirst();
  tlinkedlist.InsertFirst(shared_ptr<Square>(new Square(Point(2,3),Point(2,4),Point(3,4),Point(3,3))));
  tlinkedlist.Insert(shared_ptr<Square>(new Square(Point(1,1),Point(1,2),Point(2,2),Point(2, 1))),2);
  cout << tlinkedlist.Empty() << endl;
  cout << tlinkedlist.First() << endl;
  cout << tlinkedlist.Last() << endl;
  cout << tlinkedlist.GetItem(2) << endl;
  tlinkedlist.Remove(2);
  cout << tlinkedlist;
  tlinkedlist.Clear();
  return 0;
}