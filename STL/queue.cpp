//Queue follow FIFO(First In First Out) principle
//only available methods for queue are empty(),push(),pop(),front(),back(),size(),swap()

#include<iostream>
#include<queue>
using namespace std;
int main()
{
  //Declaring queue
  queue<int> myQueue;

  //Inserting item into queue using queue.push()
  myQueue.push(10);
  myQueue.push(20);
  myQueue.push(30);
  myQueue.push(40);
  myQueue.push(50);
  //now queue will look like 10 20 30 40 50

  //Retrieving item from queue using queue.pop()
  //N.B queue.top() returns the top element of the queue but
  //queue.pop() return anything so to store top value first queue.top then queue.pop()
  cout<<" Queue elements are poping: \n";
  while(! myQueue.empty()){
    cout<<" front : "<<myQueue.front()<<" back : "<<myQueue.back()<<endl;
     myQueue.pop();
  }
  cout<<"Is Queue empty ? "<< myQueue.empty()<<endl;

  return 0;
}
//queue1.swap(queue2); used for swaping two queue
