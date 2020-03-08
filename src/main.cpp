#include <iostream>
#include "config.h"

int main(int argc, char * argv[]) {
  int x = 6;
  std::cout << "X: " << x << ", Address is: " << &x << std::endl;
  std::cout << "Argument Count is: " << argc << std::endl;
  if (argc < 2) {
    // report version
    std::cout << argv[0] << " Version " << Learning_cmake_VERSION_MAJOR << "." << Learning_cmake_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }
  return 0;
}