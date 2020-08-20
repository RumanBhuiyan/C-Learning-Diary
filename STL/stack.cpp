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
//checking Palindrome using stack concept
//checking palindrome using stack

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//   //takes two stack first
//   stack<int> s1,s2;
//   string word;
//   cout<<"Enter the word : ";
//   cin>>word;
//
//   //storing the characters in stack
//   for(int i=0,j=word.length()-1;i<word.length();i++,j--){
//     s1.push(word[i]);
//     s2.push(word[j]);
//   }
//
//   int is_palindrome=1;
//
//   for(auto i=0;i<word.length();i++){
//      if(s1.top()==s2.top()){
//         s1.pop();
//         s2.pop();
//         continue;
//      }
//      is_palindrome=0;
//   }
//   if(is_palindrome){
//     cout<<"Palindrome "<<endl;
//   }
//   else
//   cout<<"Not Palindrome"<<endl;
//   return  0;
// }
