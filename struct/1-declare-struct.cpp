#include <iostream>

// create struct
struct Person
{
  std::string name;
  int age;
};

int main()
{
  // declare struct
  struct Person person;

  // assign values to struct properties
  person.name = "chole";
  person.age = 22;

  // print struct
  std::cout << "Hi, My name is " << person.name << " and I am " << person.age << " years old" << std::endl;
  return 0;
}