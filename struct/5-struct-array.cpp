#include <iostream>

// create struct book
struct Book {
  int id;
  char author[25];
  char bookName[50];
};

int main()
{
  // the size of an array
  int arraySize = 3;

  // create an array of struct
  struct Book books[arraySize] = {
      {1, "Robert C. Martin", "Clean Code"},
      {2, "The Mythical Man-month", "Frederick Brooks"},
      {3, "Code Complete", "Steve McConnell"},
  };

  // print items of the array
  for(int i=0; i<arraySize; i++) {
    printf("%d - %s - %s\n", books[i].id, books[i].author, books[i].bookName);
  }

  return 0;
}