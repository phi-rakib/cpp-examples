#include <iostream>
#include <map>
using namespace std;

int main() {
  // declare map
  map<string, int> mp;
  
  // add items to the map
  mp.insert(pair<string, int>("jakir", 22));
  mp.insert(pair<string, int>("abir", 17));
  mp.insert(pair<string, int>("raihan", 45));
  
  return 0;
}