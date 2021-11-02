
#include <iostream>
#include "hlist_item.h"

HListItem::HListItem(const shared_ptr<Square> &square) {
  this->square = square;
  this->next = nullptr;
}
ostream& operator<<(ostream& os, shared_ptr<HListItem>& obj) {
  os << "[" << obj->square << "]" << endl;
  return os;
}
HListItem::~HListItem() {
}