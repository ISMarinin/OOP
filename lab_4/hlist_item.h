#ifndef HLISTITEM_H
#define HLISTITEM_H
#include <iostream>
#include "square.h"

template <class T> class HListItem {
public:
  HListItem(const shared_ptr<Square> &square);
  template <class A> friend ostream& operator<<(ostream& os, HListItem<A> &obj);
  ~HListItem();
  shared_ptr<T> square;
  shared_ptr<HListItem<T>> next;
};

#include "hlist_item.inl"
#endif