#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>

class Car {
public :
  void PrintCarData();
  void IncrementDistance();
  
  // Using a constructor list in the constructor:
  Car(std::string c, int n) : color(c), number(n) {}

// The variables do not need to be accessed outside of
// functions from this class, so we can set them to private.
private:
  std::string color;
  int distance = 0;
  int number;
};

#endif
