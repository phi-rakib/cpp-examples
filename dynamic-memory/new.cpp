#include <iostream>

int main()
{
  int arraySize;
  scanf("%d", &arraySize);

  int *array = new int[arraySize];

  for (int i = 0; i < arraySize; i++)
  {
    array[i] = i + 1;
  }

  for (int i = 0; i < arraySize; i++)
  {
    std::cout << array[i] << " ";
  }
  
  return 0;
}