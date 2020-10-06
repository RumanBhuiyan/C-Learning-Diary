// Array in STL quick review link: https://www.thecrazyprogrammer.com/2017/07/stl-array.html
//in c/c++ general array you have no such built in methods like at,size,begin,front,back
//but in STL array you can take the facilities of those built in methods

#include<iostream>
#include<array>
using namespace std;
int main(){
  // initializing an array of Numbers : array< datatype, size > arrayName;
   array<int,100> numbers{45,46};
  // array<int,100> numbers={45,46}; this do the same job

  //initializing an array of stings
   array<string,100>names{"Ruman","Robiul","Ontor","Shahadat"};

  //Inserting element into array
  for(int i=2;i<10;i++){
    numbers[i]=i; // you can't execute a.push_back(i) here
  }

  cout<<"Is the array empty : "<<names.empty()<<endl;


  //cout<<"String at first position : "<<names.at(0)<<endl;
  //cout<<"String at first position : "<<names[0]<<endl; c style array value Accessing
  //cout<<"String at first position : "<<get<0>(names)<<endl;same job done by overloaded method get  from tuple class
  cout<<"String at first position : "<<names.front()<<endl;
  //cout<<"Element at first position : "<<*names.begin(); finding first element using pointer

  cout<<"String at last position : "<<*(names.begin()+3)<<endl;//last sting using pointer
  

  cout<<"Size of the String array : "<<names.size()<<endl;

  cout<<"Max Size of the String array : "<<names.max_size()<<endl;

  cout<<"Length of first string element : "<<names[0].length()<<endl;

  return 0;
}

//N.B Pointer is simmillar as Iterator
//numbers.fill(0) fill the entire array with 0
//array1.swap(array2); swaping two array values
//array1.empty() checks wheter the array is empty or not
