#include <iostream>

struct Student {
  int id;
  std::string name;
};

int main()
{
  // declare and initialize struct
  struct Student student = {1, "Tom"};

  // print struct
  std::cout << student.id << " " << student.name << std::endl;
  
  return 0;
}