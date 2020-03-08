#include <iostream>
#include <vector>
// #include "config.h"
#include "../include/car.h"

int main(int argc, char * argv[]) {
  // std::cout << "Argument Count is: " << argc << std::endl;
  // // report version
  // std::cout << argv[0] << " Version " << Learning_cmake_VERSION_MAJOR << "." << Learning_cmake_VERSION_MINOR << std::endl;
  // std::cout << "Usage: " << argv[0] << " number" << std::endl;

  // Create an empty vector of pointers to Cars 
  // and a null pointer to a car.
  std::vector<std::unique_ptr<Car>> cars;
  
  // The vector of colors for the cars:
  std::vector<std::string> colors {"red", "blue", "green"};

  // Create 100 cars with different colors and 
  // push pointers to each of those cars into the vector.
  for (int i=0; i < 100; i++) {;
    std::unique_ptr<Car> cp = std::make_unique<Car>(colors[i%3], i+1);
    cars.emplace_back(std::move(cp));
  }

  // Move each car forward by 1.
  for (std::unique_ptr<Car> &cp: cars) {
    cp->IncrementDistance();
  }

  // Print data about each car.
  for (std::unique_ptr<Car> &cp: cars) {
    cp->PrintCarData();
  }

  return 0;
}