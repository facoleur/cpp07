// main.cpp

// // main.cpp

#include "Array.hpp"
#include <cmath>
#include <iostream>

std::ostream &operator<<(std::ostream &os, const Array<int> &a) {
  for (size_t i = 0; i < a.size(); i++) {
    os << a[i] << " ";
  }
  return os;
}

int main(int, char const **) {
  Array<int> a(5);
  Array<int> b(10);

  std::cout << "a:" << a << std::endl;

  for (size_t i = 0; i < b.size(); i++) {
    b[i] = i;
  }
  for (size_t i = 0; i < a.size(); i++) {
    a[i] = i * 10;
  }

  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;

  b = a;

  std::cout << "b: " << b << std::endl;

  std::cout << "---------------------------" << std::endl;

  Array<int> c(0);
  Array<int> d = c;

  std::cout << "d: " << d << std::endl;
  d = a;
  std::cout << "d: " << d << std::endl;

  std::cout << "---------------------------" << std::endl;

  Array<std::string> s(3);

  s[0] = "string1";
  s[1] = "string2";
  s[2] = "string3";

  std::cout << "s: " << s << std::endl;

  Array<std::string> t(2);

  std::cout << t << std::endl;

  std::cout << "t: " << t << std::endl;

  std::cout << "changing string in t[0]" << std::endl;

  t[0] = "STRING1";

  std::cout << "s: " << s << std::endl;
  std::cout << "t: " << t << std::endl;

  std::cout << "---------------------------" << std::endl;

  // std::cout << "t: " << t << std::endl;\
  // t = t;
  // std::cout << "t: " << t << std::endl;
  // std::cout << "---------------------------" << std::endl;

  Array<Data> data(4);

  for (size_t i = 0; i < data.size(); i++) {
    data[i].c = i + 97;
    data[i].i = i * 100;
    data[i].s = "une string";
  }

  std::cout << data[0].c << std::endl;
  std::cout << data[0].i << std::endl;
  std::cout << data[0].s << std::endl;

  std::cout << "---" << std::endl;
  std::cout << data[1].c << std::endl;
  std::cout << data[1].i << std::endl;
  std::cout << data[1].s << std::endl;

  std::cout << "---" << std::endl;
  std::cout << data[2].c << std::endl;
  std::cout << data[2].i << std::endl;
  std::cout << data[2].s << std::endl;

  std::cout << "---" << std::endl;
  std::cout << data[3].c << std::endl;
  std::cout << data[3].i << std::endl;
  std::cout << data[3].s << std::endl;

  std::cout << "---" << std::endl;

  Array<int> ab(2);

  try {
    ab[0] = 1;
    ab[1] = 2;
    ab[2] = 3;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  try {
    std::cout << ab[0] << std::endl;
    std::cout << ab[1] << std::endl;
    std::cout << ab[2] << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  return 0;
}

// #define MAX_VAL 750
// int main(int, char **) {
//   Array<int> numbers(MAX_VAL);
//   int *mirror = new int[MAX_VAL];

//   srand(time(NULL));
//   for (int i = 0; i < MAX_VAL; i++) {
//     const int value = rand();
//     numbers[i] = value;
//     mirror[i] = value;
//   }

//   // SCOPE
//   Array<int> tmp = numbers;
//   Array<int> test(tmp);

//   for (int i = 0; i < MAX_VAL; i++) {
//     if (mirror[i] != numbers[i]) {
//       std::cerr << "didn't save the same value!!" << std::endl;
//       return 1;
//     }
//     // i added this to test further
//     if (tmp[i] != numbers[i]) {
//       std::cerr << "didn't save the same value!!" << std::endl;
//       return 1;
//     }
//     if (test[i] != numbers[i]) {
//       std::cerr << "didn't save the same value!!" << std::endl;
//       return 1;
//     }
//   }
//   try {
//     numbers[-2] = 0;
//   } catch (const std::exception &e) {
//     std::cerr << e.what() << '\n';
//   }
//   try {
//     numbers[MAX_VAL] = 0;
//   } catch (const std::exception &e) {
//     std::cerr << e.what() << '\n';
//   }

//   for (int i = 0; i < MAX_VAL; i++) {
//     numbers[i] = rand();
//   }

//   std::cout << "--- print my own tests ---" << std::endl;
//   std::cout << numbers.size() << std::endl;
//   // std::cout << numbers << std::endl;

//   Array<int> arr(5);

//   arr[0] = 0;
//   arr[1] = 1;
//   arr[2] = 2;
//   arr[3] = 3;
//   arr[4] = 4;

//   const Array<int> constArr(arr);

//   std::cout << constArr << std::endl;
//   std::cout << constArr[0] << std::endl;
//   std::cout << constArr[1] << std::endl;

//   delete[] mirror;
//   return 0;
// }
