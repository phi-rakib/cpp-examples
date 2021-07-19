#include <iostream>

// create struct Rectangle
struct Rectangle {
  double length; 
  double width;
};

int main()
{
  // get the size of the struct
  std::cout << sizeof(struct Rectangle) << std::endl;

  return 0;
}