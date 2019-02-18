#include "ArrayStack.h"
#include<iostream>

static const int initialCapacity = 10,
                 capacityIncrement = 5;

template <class T>
ArrayStack<T>::ArrayStack () {

  data = new T[initialCapacity];
  capacity = initialCapacity; elastic = true;
  count = 0;

}

template <class T>
ArrayStack<T>::ArrayStack (int capacity) {

  elastic = false; count = 0;

  if (capacity <= 0) {
    data = new T[1]; this -> capacity = 1;
    std::cout<<("ArrayStack::ArrayStack - invalid capacity\n");
  }

  data = new T[capacity];
  this -> capacity = capacity;

}

template <class T>
ArrayStack<T>::ArrayStack (const ArrayStack &otherStack) {

  data = new T[otherStack.capacity];
  capacity = otherStack.capacity;
  elastic = otherStack.elastic;
  count = otherStack.count;

  for (int i = 0; i < count; i++) {
    data[i] = otherStack.data[i];
  }

}

template <class T>
ArrayStack<T>::~ArrayStack () {

  delete [] data;

}

template <class T>
void ArrayStack<T>::push (T value) {

  int i;
  T *temp;

  if (elastic && (count == capacity)) {
    // time to increase the capacity
    capacity += capacityIncrement;
    temp = new T[capacity];
    for (i = 0; i < count; i++) temp[i] = data[i];
    delete [] data;
    data = temp;
  } else if (count == capacity)
    std::cout<<("ArrayStack::push - stack overflow\n");

  data[count++] = value;

}

template <class T>
T ArrayStack<T>::pop () {

  if (count == 0)
    std::cout<<("ArrayStack::pop - stack underflow\n");

  return data[--count];

}

template <class T>
T ArrayStack<T>::peek () {

  if (count == 0)
    std::cout<<("ArrayStack::peek - stack underflow\n");

  return data[count-1];

}

template <class T>
ArrayStack<T>& ArrayStack<T>::operator= (const ArrayStack &otherStack) {

  if (capacity < otherStack.count) {
    if (!elastic)
      std::cout<<("ArrayStack - copy overflow\n");

    delete [] data;
    data = new T[otherStack.count];
    capacity = otherStack.count;
  }
  for (int i = 0; i < otherStack.count; i++) {
    data[i] = otherStack.data[i];
  }
  count = otherStack.count;
  return *this;

}
