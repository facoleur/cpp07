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
