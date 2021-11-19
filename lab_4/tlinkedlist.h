#ifndef HLIST_H
#define HLIST_H
#include <iostream>
#include "hlist_item.h"
#include "square.h"

template <class T> class TLinkedList {
public:
  TLinkedList();
  int size_of_list;
  size_t Length();
  shared_ptr<Square>& First();
  shared_ptr<Square>& Last();
  shared_ptr<Square>& GetItem(size_t idx);
  bool Empty();
  TLinkedList(const shared_ptr<TLinkedList> &other);
  void InsertFirst(const shared_ptr<Square> &&square);
  void InsertLast(const shared_ptr<Square> &&square);
  void RemoveLast();
  void RemoveFirst();
  void Insert(const shared_ptr<Square> &&square, size_t position);
  void Remove(size_t position);
  void Clear();
  template <class A> friend ostream& operator<<(ostream& os, TLinkedList<A>& list);
  ~TLinkedList(); 
private:
  shared_ptr<HListItem<T>> front;
  shared_ptr<HListItem<T>> back;
};

#include "tlinkedlist.inl"
#endif 