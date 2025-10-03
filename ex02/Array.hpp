// Array.hpp

#pragma once

#include <cctype>
#include <climits>
#include <cstddef>
#include <cstring>
#include <iostream>
#include <stdexcept>

struct Data {
  int i;
  char c;
  std::string s;
};

// template class declaration

template <class T> class Array {
public:
  Array();
  Array(const unsigned int n);
  Array(const Array &other);

  Array &operator=(const Array &other);
  T &operator[](unsigned int i);
  const T &operator[](unsigned int i) const;

  ~Array();

  unsigned int size() const { return this->_size; }

private:
  T *elements;
  unsigned int _size;
};

// constructors & destructor

template <class T> Array<T>::Array() : elements(0), _size(0) {}

template <class T>
Array<T>::Array(const unsigned int n) : elements(new T[n]()), _size(n) {}

template <class T>
Array<T>::Array(const Array &other)
    : elements(new T[other.size()]), _size(other.size()) {
  for (size_t i = 0; i < other.size(); i++) {
    elements[i] = other.elements[i];
  }
}

template <class T> Array<T>::~Array() { delete[] elements; }

// operators overload

template <class T> Array<T> &Array<T>::operator=(const Array &other) {
  if (this == &other)
    return *this;

  delete[] elements;

  if (other.size() == 0) {
    _size = 0;
    elements = 0;
    return *this;
  }

  elements = new T[other.size()];

  for (size_t i = 0; i < other.size(); i++) {
    elements[i] = other.elements[i];
  }

  _size = other.size();
  return *this;
}

template <class T> T &Array<T>::operator[](unsigned int i) {
  if (i >= size())
    throw std::out_of_range("index is out of array's range");

  return elements[i];
}

template <class T> const T &Array<T>::operator[](unsigned int i) const {
  if (i >= size())
    throw std::out_of_range("index is out of array's range");

  return elements[i];
}

// "<<" operator overload

template <class T>
std::ostream &operator<<(std::ostream &os, const Array<T> &a) {
  for (size_t i = 0; i < a.size(); i++) {
    os << a[i] << " ";
  }
  return os;
}
