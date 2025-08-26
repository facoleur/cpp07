// template.hpp

#pragma once

#include <cctype>
#include <cstddef>
#include <cstring>
#include <iostream>

template <class T>
void iter(T *address, size_t len, int (*func)(T &elem)) {
  for (size_t i = 0; i < len; i++) {
    func(address[i]);
  }
}

template <class T>
void iter(const T *address, size_t len, int (*func)(const T &elem)) {
  for (size_t i = 0; i < len; i++) {
    func(address[i]);
  }
}
