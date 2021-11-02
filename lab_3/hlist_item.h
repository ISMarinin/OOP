#include <iostream>
#include "square.h"

class HListItem {
public:
  HListItem(const shared_ptr<Square> &square);
  friend ostream& operator<<(ostream& os, shared_ptr<HListItem>&& obj);
  ~HListItem();
  shared_ptr<Square> square;
  shared_ptr<HListItem> next;
};
 