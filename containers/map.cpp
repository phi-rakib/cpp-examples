#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main() {
  // declare map
  map<string, int> mp;
  
  // add items to the map
  mp.insert(pair<string, int>("jakir", 22));
  mp.insert(pair<string, int>("abir", 17));
  mp.insert(pair<string, int>("raihan", 45));

  // traverse map
  for (map<string, int>::iterator it = mp.begin(); it != mp.end(); ++it) {
    cout << it->first << " " << it->second << endl;
  }

  // another way of adding items to the map
  mp["faruk"] = 17;
  mp["akib"] = 45;

  // traverse map
  for (map<string, int>::iterator it = mp.begin(); it != mp.end(); ++it) {
    cout << it->first << " " << it->second << endl;
  }

  // erase single element from map
  mp.erase("abir");

  cout << "Erased Single item from map by key" << endl;

  // traverse map
  for (map<string, int>::iterator it = mp.begin(); it != mp.end(); ++it) {
    cout << it->first << " " << it->second << endl;
  }

  // remove all the elements of the map
  mp.clear();

  return 0;
}