
#include <iostream>
#include "hlist_item.h"

HListItem::HListItem(const Square &square) {
  this->square = square;
  this->next = nullptr;
}
ostream& operator<<(ostream& os,HListItem& obj) {
  os << "[" << obj.square << "]" << endl;
  return os;
}
HListItem::~HListItem() {
}