#include <iostream>

// create employee struct
struct Employee {
  int id;
  char name[50];
};

int main() 
{
  // declare and initialize employee struct 
  struct Employee employee = {122, "Jacob"};

  // get the memory address of employee
  printf("%d\n", &employee);

  // get the memory address of employee id & compare with employee address
  printf("%d\n", &employee.id);

  // get the memory address of employee name
  printf("%d\n", &employee.name);

  return 0;
}