#include <iostream>
#include "../include/car.h"

// Method definitions for the Car class.
void Car::PrintCarData() {
  std::cout << "The distance that the " << color << " car " << number << " has traveled is: " << distance << "\n";
}

void Car::IncrementDistance() {
  distance++;
}