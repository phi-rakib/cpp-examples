#include <iostream>
#include <queue>
using namespace std;

int main() {
  // declare queue
  queue<int> queue;

  // pushing item into queue
  queue.push(1);
  queue.push(2);
  queue.push(3);
  queue.push(4);

  // get the size of the queue
  cout << "Queue size " << queue.size() << endl;

  // print queue items one by one
  while(!queue.empty()) {
    cout << queue.front() << endl;
    queue.pop();
  }
  
  return 0;
}