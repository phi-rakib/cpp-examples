#include <iostream>
#include <stack>
using namespace std;

int main()
{
  // stack decleration
  stack<int> stack;

  // pushing item to the stack
  stack.push(1);
  stack.push(2);
  stack.push(3);
  stack.push(4);

  // get the size of the stack
  cout << stack.size() << endl;

  // printing stack elements
  while(!stack.empty()) {
    cout << stack.top() <<endl;
    stack.pop();
  }

  return 0;
}