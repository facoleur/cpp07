// template.hpp

#include <iostream>
#include <string>

struct Product {
  size_t id;
  std::string name;
  double price;
};

template <typename T>
void swap(T &a, T &b) {
  T temp = b;
  b = a;
  a = temp;
}

template <typename T>
T min(T a, T b) {
  return a < b ? a : b;
}

template <typename T>
T max(T a, T b) {
  return a > b ? a : b;
}
