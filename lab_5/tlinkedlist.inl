#include <iostream>
#include "tlinkedlist.h"

template <class T>
Titerator<HListItem<T>, T> TLinkedList<T>::begin() {
    return Titerator<HListItem<T>, T> (front);
}

template <class T>
Titerator<HListItem<T>, T> TLinkedList<T>::end() {
    return Titerator<HListItem<T>, T>(back);
}


template <class T> TLinkedList<T>::TLinkedList() {
    size_of_list = 0;
    shared_ptr<HListItem<T>> front = nullptr;
    shared_ptr<HListItem<T>> back = nullptr;
    cout << "Square List created" << endl; 
}

template <class T> TLinkedList<T>::TLinkedList(const shared_ptr<TLinkedList> &other){
    front = other->front;
    back = other->back;
}

template <class T> size_t TLinkedList<T>::Length() {
    return size_of_list;
}

template <class T> bool TLinkedList<T>::Empty() {
    return size_of_list;
}

template <class T> shared_ptr<Square>& TLinkedList<T>::GetItem(size_t idx){
    int k = 0;
    shared_ptr<HListItem<T>> obj = front;
    while (k != idx){
        k++;
        obj = obj->GetNext();
    }
    return obj->GetValue();
}

template <class T> shared_ptr<T>& TLinkedList<T>::First() {
    return front->GetValue();
}

template <class T> shared_ptr<Square>& TLinkedList<T>::Last() {
    return back->GetValue();
}

template <class T> void TLinkedList<T>::InsertLast(const shared_ptr<Square> &&square) {
    shared_ptr<HListItem<T>> obj (new HListItem<T>(square));
    if(size_of_list == 0) {
        front = obj;
        back = obj;
        size_of_list++;
        return;
    }
    back->SetNext(obj);
    back = obj;
    obj->next = nullptr; 
    size_of_list++;
}

template <class T> void TLinkedList<T>::RemoveLast() {
    if (size_of_list == 0) {
        cout << "Square does not pop_back, because the Square List is empty" <<  endl;
    } 
    else {
        if (front == back) {
        RemoveFirst();
        size_of_list--;
        return;
    }
    shared_ptr<HListItem<T>> prev_del = front;
    while (prev_del->GetNext() != back) {
      prev_del = prev_del->GetNext();
    }
    prev_del->next = nullptr;
    back = prev_del;
    size_of_list--;
    } 
}

template <class T> void TLinkedList<T>::InsertFirst(const shared_ptr<Square> &&square) {
    shared_ptr<HListItem<T>> obj (new HListItem<T>(square));
    if(size_of_list == 0) {
      front = obj;
      back = obj;
    } else {
      obj->SetNext(front); // = front;
      front = obj;
    }
    size_of_list++;
}

template <class T> void TLinkedList<T>::RemoveFirst() {
    if (size_of_list == 0) {
      cout << "Square does not pop_front, because the Square List is empty" <<  endl;
    } else {
    shared_ptr<HListItem<T>> del = front;
    front = del->GetNext();
    size_of_list--;
    }
}

template <class T> void TLinkedList<T>::Insert(const shared_ptr<Square> &&square,size_t position) {
    if (position <0) {
        cout << "Position < zero" << endl;
    } 
    else if (position > size_of_list) {
        cout << " Position > size_of_list" << endl;
    } 
    else {
        shared_ptr<HListItem<T>> obj (new HListItem<T>(square));
        if (position == 0) {
        front = obj;
        back = obj;
        } 
        else {
            int k = 0;
            shared_ptr<HListItem<T>> prev_insert = front;
            shared_ptr<HListItem<T>> next_insert;
            
            while(k+1 != position) {
            k++;
            prev_insert = prev_insert->GetNext();
            }

            next_insert = prev_insert->GetNext();
            prev_insert->SetNext(obj); // = obj;
            obj->SetNext(next_insert); // = next_insert;
        }
        size_of_list++;
  }
}

template <class T> void TLinkedList<T>::Remove(size_t position) {
    if (position > size_of_list ) {
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
        shared_ptr<HListItem<T>> prev_erase = front;
        shared_ptr<HListItem<T>> next_erase;
        shared_ptr<HListItem<T>> del;
        while( k+1 != position) {
            k++;
            prev_erase = prev_erase->GetNext();
        }
        next_erase = prev_erase->GetNext();
        del = prev_erase->GetNext();
        next_erase = del->GetNext();
        prev_erase->SetNext(next_erase);
    }
    size_of_list--;
  }
}

template <class T> void TLinkedList<T>::Clear() {
    shared_ptr<HListItem<T>> del = front;
    shared_ptr<HListItem<T>> prev_del;
    if(size_of_list !=0 ) {
        while(del->GetNext() != nullptr) {
            prev_del = del;
            del = del->GetNext();
        }
        size_of_list = 0;
    } 
    size_of_list = 0;
    shared_ptr<HListItem<T>> front;
    shared_ptr<HListItem<T>> back;
}

template <class T> ostream& operator<<(ostream& os, TLinkedList<T>& hl) {
    if (hl.size_of_list == 0) {
        os << "The square list is empty, so there is nothing to output" << endl;
    } 
    else {
        shared_ptr<HListItem<T>> obj = hl.front;
        os << "Print Square List" << endl;
        while(obj != nullptr) {
            if (obj->GetNext() != nullptr) {
                os << obj->GetValue() << " " << "," << " ";
                obj = obj->GetNext();
            } 
            else {
                os << obj->GetValue();
                obj = obj->GetNext();
          }
        }   
        os << endl;
    }
  return os;
}

template <class T> TLinkedList<T>::~TLinkedList() {
    shared_ptr<HListItem<T>> del = front;
    shared_ptr<HListItem<T>> prev_del;
    if(size_of_list !=0 ) {
        while(del->GetNext() != nullptr) {
            prev_del = del;
            del = del->GetNext();
        }
    size_of_list = 0;
    cout << "Square List deleted" << endl;
  } 
}