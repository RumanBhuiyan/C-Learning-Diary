//In Priority Queue greatest element stays at the top of the Queue, queue contains priority_queue
//whenever you pop or push something in the Priority queue then greatest element rendered into top
//available methods are push,pop,top,size,swap etc

#include<iostream>
#include<queue>
using namespace std;
int main(){
  //Initializing
  priority_queue<int> pq;

  //Inserting element into priority_queue:
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);
    pq.push(1);

   //Poping from priority queue
   cout<<"Top element after each pop : "<<endl;

   auto copypq=pq;
   while(!copypq.empty()){
     cout<<copypq.top()<<endl;
     copypq.pop();
   }

  return 0;
}
