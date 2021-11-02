#ifndef HLIST_H
#define HLIST_H
#include <iostream>
#include "hlist_item.h"
#include "square.h"

class TLinkedList {
public:
  TLinkedList();
  int size_of_list;
  size_t Length();
  bool Empty();
  Square& First();
  Square& Last();
  TLinkedList(const TLinkedList& other);
  Square& GetItem(size_t idx);
  void InsertFirst(const Square &&square);
  void InsertLast(const Square &&square);
  void RemoveLast();
  void RemoveFirst();
  void Insert(const Square &&square, size_t position);
  void Remove(size_t position);
  void Clear();
  friend ostream& operator<<(ostream& os, TLinkedList& list);
  ~TLinkedList(); 
private:
  HListItem *front;
  HListItem *back;
};
 
#endif