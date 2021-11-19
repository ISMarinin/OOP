#include <iostream>
#include "hlist_item.h"

template <class T> HListItem<T>::HListItem(const std::shared_ptr<Square> &square) {
  this->square = square;
  this->next = nullptr;
}
template <class A> std::ostream& operator<<(std::ostream& os,HListItem<A> &obj) {
  os << "[" << obj.square << "]" << std::endl;
  return os;
}
template <class T> HListItem<T>::~HListItem() {
}