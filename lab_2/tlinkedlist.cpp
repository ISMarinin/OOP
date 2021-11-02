#include <iostream>
#include "tlinkedlist.h"
 
TLinkedList::TLinkedList() {
  size_of_list = 0;
  HListItem* front;
  HListItem* back;
  cout << "Square List created" << endl; 
}

TLinkedList::TLinkedList(const TLinkedList& other){
  front = other.front;
  back = other.back;
}

size_t TLinkedList::Length() {
  return size_of_list;
}

bool TLinkedList::Empty() {
  return size_of_list;
}

Square& TLinkedList::GetItem(size_t idx){
  int k = 0;
  HListItem* obj = front;
  while (k != idx){
    k++;
    obj = obj->next;
  }
  return obj->square;
}

Square& TLinkedList::First() {
  return front->square;
}

Square& TLinkedList::Last() {
  return back->square;
}

void TLinkedList::InsertLast(const Square &&square) {
  HListItem* obj = new HListItem(square);
  if(size_of_list == 0) {
    front = obj;
    back = obj;
    size_of_list++;
    return;
  }
  back->next = obj;
  back = obj;
  obj->next = nullptr;
  size_of_list++;
}

void TLinkedList::RemoveLast() {
  if (size_of_list == 0) {
    cout << "Square does not pop_back, because the Square List is empty" <<  endl;
  } 
  else {
    if (front == back) {
      RemoveFirst();
      size_of_list--;
      return;
    }
    HListItem* prev_del = front;
    while (prev_del->next != back) {
      prev_del = prev_del->next;
    }
    prev_del->next = nullptr;
    delete back;
    back = prev_del;
    size_of_list--;
    } 
}

void TLinkedList::InsertFirst(const Square &&square) {
    HListItem* obj = new HListItem(square);
    if(size_of_list == 0) {
      front = obj;
      back = obj;
    } else {
      obj->next = front;
      front = obj;
    }
    size_of_list++;
}

void TLinkedList::RemoveFirst() {
    if (size_of_list == 0) {
      cout << "Square does not pop_front, because the Square List is empty" <<  endl;
    } else {
    HListItem* del = front;
    front = del->next;
    delete del;
    size_of_list--;
    }
}

void TLinkedList::Insert(const Square &&square,size_t position) {
  if (position <0) {
    cout << "Position < zero" << endl;
  } else if (position > size_of_list) {
    cout << " Position > size_of_list" << endl;
  } else {
    HListItem* obj = new HListItem(square);
    if (position == 0) {
      front = obj;
      back = obj;
    } else {
      int k = 0;
      HListItem* prev_insert = front;
      HListItem* next_insert;
      while(k + 1 != position) {
        k++;
        prev_insert = prev_insert->next;
      }
      next_insert = prev_insert->next;
      prev_insert->next = obj;
      obj->next = next_insert;
    }
    size_of_list++;
  }
}

void TLinkedList::Remove(size_t position) {
  if ( position > size_of_list ) {
     cout << "Position " << position << " > " << "size " << size_of_list << " Not correct erase" << endl;
  } 
  else if (position < 0) {
    cout << "Position < 0" << endl;
  } 
  else {
    if (position == 0) {
      RemoveFirst();
    } 
    else {
      int k = 0;
      HListItem* prev_erase = front;
      HListItem* next_erase;
      HListItem* del;
      while( k+1 != position) {
        k++;
        prev_erase = prev_erase->next;
      }
      next_erase = prev_erase->next;
      del = prev_erase->next;
      next_erase = del->next;
      delete del;
      prev_erase->next = next_erase;
    }
    size_of_list--;
  }
}

void TLinkedList::Clear() {
  HListItem* del = front;
  HListItem* prev_del;
  if(size_of_list !=0 ) {
    while(del->next != nullptr) {
      prev_del = del;
      del = del->next;
      delete prev_del;
    }
    delete del;
    size_of_list = 0;
  } 
  size_of_list = 0;
  HListItem* front;
  HListItem* back;
}

ostream& operator<<(ostream& os, TLinkedList& hl) {
  if (hl.size_of_list == 0) {
    os << "The square list is empty, so there is nothing to output" << endl;
  } else {
    os << "Print Square List" << endl;
    HListItem* obj = hl.front;
    while(obj != nullptr) {
      if (obj->next != nullptr) {
        os << obj->square << " " << "," << " ";
        obj = obj->next;
      } else {
        os << obj->square;
        obj = obj->next;
      }
    }
    os << endl;
  }
  return os;
}

TLinkedList::~TLinkedList() {
  HListItem* del = front;
  HListItem* prev_del;
  if(size_of_list !=0 ) {
    while(del->next != nullptr) {
      prev_del = del;
      del = del->next;
      delete prev_del;
    }
    delete del;
    size_of_list = 0;
    cout << "Square List deleted" << endl;
  } 
}