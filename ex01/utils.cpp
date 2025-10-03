// utils.cpp

#include "template.hpp"

int capitalize(std::string &s) {
  for (size_t i = 0; i < s.length(); i++) {
    s[i] = std::toupper(s[i]);
  }
  return 1;
}

int multiply(int &n) {
  n *= 2;
  return 1;
}

int print(int &n) {
  std::cout << n << std::endl;
  return 1;
}

int print(const int &n) {
  std::cout << n << std::endl;
  return 1;
}

int print(const std::string &s) {
  std::cout << s << std::endl;
  return 1;
}

int print(const Data &d) {
  std::cout << "-- PRINT PRODUCT --" << std::endl;
  std::cout << d.id << std::endl;
  std::cout << d.name << std::endl;
  std::cout << d.price << std::endl;
  return 1;
}
