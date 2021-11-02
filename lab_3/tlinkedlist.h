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
  shared_ptr<Square>& First();
  shared_ptr<Square>& Last();
  shared_ptr<Square>& GetItem(size_t idx);
  TLinkedList(const shared_ptr<TLinkedList>& other);
  void InsertFirst(const shared_ptr<Square> &&square);
  void InsertLast(const shared_ptr<Square> &&square);
  void RemoveLast();
  void RemoveFirst();
  void Insert(const shared_ptr<Square> &&square, size_t position);
  void Remove(size_t position);
  void Clear();
  friend ostream& operator<<(ostream& os, TLinkedList& list);
  ~TLinkedList(); 
private:
  shared_ptr<HListItem> front;
  shared_ptr<HListItem> back;
};
 
#endif