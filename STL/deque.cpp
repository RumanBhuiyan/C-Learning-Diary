//In Queue insertion is done at last and deletion starts from first
//but in deque insertion and deletion can be performed in both side first and last
//In brief deque gives you full controll over queue
//available methods push_front,push_back,pop_front,pop_back,at,find

#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main(){

   //Initializing deque
   deque<int>myDeque;

   //Inserting Values into Deque
   myDeque.push_front(10);
   myDeque.push_back(20);
   myDeque.push_front(30);
   myDeque.push_back(40);
   myDeque.insert(myDeque.begin()+4,100);
   //myDeque right now  30 10 20 40

   auto keepQueue=myDeque;//perfoming operations not affecting the real queue
   cout<<"Poping From Front : ";
   while(!keepQueue.empty()){
     cout<<keepQueue.front()<<" ";
     keepQueue.pop_front();
   }

   keepQueue=myDeque;//perfoming operations not affecting the real queue
   cout<<"\nPoping From Back : ";
   while(!keepQueue.empty()){
     cout<<keepQueue.back()<<" ";
     keepQueue.pop_back();
   }

   cout<<"\nCertain element at position 2 : "<<myDeque.at(2)<<endl;
  //accessing values using Iterators
   // deque<int>::iterator p;
   // p=myDeque.begin();
   // cout<<"\nCertain element at position 0 : "<<*p<<endl;
   cout<<"Current Size of the deque : "<<myDeque.size()<<endl;
   cout<<"Maximum Size of the deque : "<<myDeque.max_size()<<endl;

  return 0;
}
