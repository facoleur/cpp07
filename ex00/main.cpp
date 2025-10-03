// main.cpp

#include "template.hpp"

int main(int, char const **) {

  int a = 1;
  int b = 2;

  std::cout << "a before: " << a << std::endl;
  std::cout << "b before: " << b << std::endl;
  swap(a, b);
  std::cout << "a after : " << a << std::endl;
  std::cout << "b after : " << b << std::endl;

  double c = 10.2;
  double d = 12.3;

  std::cout << "c before: " << c << std::endl;
  std::cout << "d before: " << d << std::endl;
  swap(c, d);
  std::cout << "c after : " << c << std::endl;
  std::cout << "d after : " << d << std::endl;

  // ----

  Product p1;
  Product p2;

  p1.id = 1;
  p1.name = "jacket";
  p1.price = 100;

  p2.id = 2;
  p2.name = "hat";
  p2.price = 30;

  std::cout << "p1.name: " << p1.name << std::endl;
  std::cout << "p2.name: " << p2.name << std::endl;

  swap(p1, p2);

  std::cout << "p1.name: " << p1.name << std::endl;
  std::cout << "p2.name: " << p2.name << std::endl;

  std::cout << "---" << std::endl;

  std::cout << "min p1, p2: " << min(p1, p2).name << std::endl;
  std::cout << "max p1, p2: " << max(p1, p2).name << std::endl;
  return 0;
}

// int main(void) {
//   int a = 2;
//   int b = 3;
//   ::swap(a, b);
//   std::cout << "a = " << a << ", b = " << b << std::endl;
//   std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
//   std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
//   std::string c = "chaine1";
//   std::string d = "chaine2";
//   ::swap(c, d);
//   std::cout << "c = " << c << ", d = " << d << std::endl;
//   std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
//   std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
//   return 0;
// }
