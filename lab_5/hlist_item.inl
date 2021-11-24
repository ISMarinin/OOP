#include <iostream>
#include "hlist_item.h"

template <class T> HListItem<T>::HListItem(const std::shared_ptr<Square> &square){
    this->square = square;
    this->next = nullptr;
}

template <class T> std::shared_ptr<HListItem<T>> HListItem<T>::SetNext(std::shared_ptr<HListItem<T>> &next_){
    std::shared_ptr<HListItem<T>> prev = this->next;
    this->next = next_;
    return prev;
}

template <class T> std::shared_ptr<T>& HListItem<T>::GetValue(){
    return this->square;
}

template <class T> std::shared_ptr<HListItem<T>> HListItem<T>::GetNext(){
    return this->next;
}

template <class A> std::ostream& operator<<(std::ostream& os,HListItem<A> &obj){
    os << "[" << obj.square << "]" << std::endl;
    return os;
}

template <class T> HListItem<T>::~HListItem() {}