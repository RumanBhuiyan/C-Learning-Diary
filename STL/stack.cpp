//stck follow LIFO(Last In First Out) principle
//only available methods for stack are empty(),push(),pop(),top(),size(),swap()

#include<iostream>
#include<stack>
using namespace std;
int main()
{
  //Declaring stack
  stack<int> myStack;

  //Inserting item into stack using stack.push()
  myStack.push(10);
  myStack.push(20);
  myStack.push(30);
  myStack.push(40);
  myStack.push(50);
  //now stack will look like 50 40 30 20 10; N.B 10 is in the last of stack

  //Retrieving item from stack using stack.pop()
  //N.B stack.top() returns the top element of the stack but
  //stack.pop() return anything so to store top value first stack.top then stack.pop()
  cout<<" Stack elements are poping: \n";
  while(!myStack.empty()){
    cout<<myStack.top()<<endl;
    myStack.pop();
  }
  cout<<"Is stack empty ? "<<myStack.empty()<<endl;

  return 0;
}
//stack1.swap(stack2); used for swaping two stack
