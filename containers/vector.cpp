#include <iostream>
#include <vector>
using namespace std;

int main() {
  // declare the vector
  vector<int> vector;

  // pushing items in the vector
  for (int i = 1; i <= 5; i++) {
    vector.push_back(i);
  }

  // get the size of the vector
  int vectorSize = vector.size();
  cout << "Vector size " << vectorSize << endl;

  // printing vector items like arrays
  for (int i = 0; i < vectorSize; i++) {
    cout << vector[i] << endl;
  }
  
  return 0;
}