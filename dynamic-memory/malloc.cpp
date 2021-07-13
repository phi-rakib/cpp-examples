#include <iostream>

int main()
{
  int arraySize;
  scanf("%d", &arraySize);
  
  int *array = (int *)malloc(arraySize * sizeof(int));

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