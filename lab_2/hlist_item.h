#include <iostream>
#include "square.h"

class HListItem {
public:
  HListItem(const Square &hexagon);
  friend ostream& operator<<(ostream& os, HListItem& obj);
  ~HListItem();
  Square square;
  HListItem* next;
};
 