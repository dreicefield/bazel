#include "b-lib.h"
#include "a-lib.h"

#include <ctime>
#include <iostream>
#include <string>

inline static void print_localtime() {
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
}

int main(int argc, char** argv) {
  std::string who = "world";
  if (argc > 1) {
    who = argv[1];
  }
  std::cout << b::get_greet(who) << std::endl;
  std::cout << a::get_greet(who) << std::endl;
  print_localtime();
  return 0;
}
