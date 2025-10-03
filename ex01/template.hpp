// template.hpp

#pragma once

#include <cctype>
#include <cstddef>
#include <cstring>
#include <iostream>

struct Data {
  int id;
  std::string name;
  double price;
};

template <class T> void iter(T *address, const size_t len, int (*func)(T &)) {
  for (size_t i = 0; i < len; i++) {
    func(address[i]);
  }
}

template <class T>
void iter(const T *address, const size_t len, int (*func)(const T &)) {
  for (size_t i = 0; i < len; i++) {
    func(address[i]);
  }
}
