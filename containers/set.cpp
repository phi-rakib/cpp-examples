#include <iostream>
#include <set>
using namespace std;

int main() {
  // declare set
  set<int> s;

  // add values to set
  s.insert(10);
  s.insert(20);
  s.insert(10);
  s.insert(40);
  s.insert(20);

  // get the set size
  cout << "Size of the set is " << s.size() << endl;

  return 0;
}