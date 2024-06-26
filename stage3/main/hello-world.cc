#include "lib/hello-time.h"
#include "main/hello-greet.h"
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  std::string who = "Bazel from Stage 3";
  if (argc > 1) {
    who = argv[1];
  }
  std::cout << get_greet(who) << std::endl;
  print_localtime();
  return 0;
}
