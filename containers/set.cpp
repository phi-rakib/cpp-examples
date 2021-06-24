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

  // traverse set
  for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
    cout << *it << endl;
  }

  // remove single element
  s.erase(10);

  // get the set size
  cout << "Size of the set is " << s.size() << endl;

  // traverse set
  for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
    cout << *it << endl;
  }

  // remove all elements
  s.erase(s.begin(), s.end());

  // size of the set after removing all elements
  cout << "Size of the set is " << s.size() << endl;

  return 0;
}