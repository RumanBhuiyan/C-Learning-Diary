// press F5 button to run the program
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
  int value;
  Node* next;
};
int main(){
  // initializing nodes
  Node* head;
  Node* first= NULL;
  Node* second= NULL;
  Node* third =NULL;
  //allocating memory for nodes
  first =new Node();
  second =new Node();
  third =new Node();
  // assigning values to every node
  first->value=2;
  second->value=3;
  third->value=4;
  // Connecting nodes
  head=first;
  first->next=second;
  second->next=third;
  third->next=NULL;
  //Accessing linked list values
  Node* keep=head;
  while(keep!= NULL){
      cout<<keep->value<<" ";
      keep=keep->next;
    }
  return 0;
}
