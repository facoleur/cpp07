// main.cpp

#include "template.hpp"

int capitalize(std::string &s);
int multiply(int &n);
int print(int &n);
int print(const int &n);

int main(int, const char **) {

  std::string s[] = {"bonjour", "aurevoir"};
  iter(s, 2, capitalize);

  std::cout << s[0] << std::endl;
  std::cout << s[1] << std::endl;

  int n[] = {1, 10, 100, 1000};
  iter(n, 4, multiply);

  for (size_t i = 0; i < (sizeof(n) / sizeof(n[0])); i++) {
    std::cout << n[i] << std::endl;
  }

  const int m[] = {1, 10, 100, 1000};
  iter(m, 4, print);

  return 0;
}
