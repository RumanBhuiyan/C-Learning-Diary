//vector Quick Learning Link : https://www.youtube.com/watch?v=Y29tlyp_jBA
//In general c++ we have to declare an array with its size but in vector we don't have to do so

#include<iostream>
#include<vector> //Library for using vector in c++
using namespace std;
int main(){
  vector<int> myVector;
   //vector<int> myVector{55,56,57}; initializing Vector with certain elements

  //Inserting Numbers into vector using push_back function
  for(int i=0;i<10;i++){
    //myVector[i]=i; you can't do it because vector didn't allocate space yet
    myVector.push_back(i);
  }

   //myVector[2]=50; you can do it now because vector allocated space during pus_back Operatios
   //myVector.insert(myVector.begin()+4,45);
   //Inserting into vector using insert method: v.insert(location_pointer,value)

  //Retrieving Numbers from vector using pop_back function
  cout<<"Before Removing  ";
  for(int i=0;i<myVector.size();i++){
    cout<<myVector[i]<<" ";
  }

  myVector.pop_back();//Removes the last element of the vector
  //myVector.erase(myVector.end()-1);//deleting element using erase method

  cout<<"\nAfter Removing  : ";
  for(int i=0;i<myVector.size();i++){
    cout<<myVector[i]<<" ";
  }

  cout<<"\nIs Vector empty ? "<<myVector.empty()<<endl;

  cout<<"First Elemet : "<<myVector.front()<<endl;
  //cout<<"\nFirst Elemet : "<<*myVector.begin()<<endl;//begin returns a pointer

  cout<<"Last Elemet : "<<myVector.back()<<endl;
  //cout<<"Last Elemet : "<<*myVector.end()<<endl;//.end() returns a pointer

  cout<<"Element at certain position : "<<myVector.at(4)<<endl;
  //cout<<"Element at certain position : "<<myVector.operator[](4)<<endl;

  cout<<"Vector Current Size : "<<myVector.size()<<endl;
  //capacity>=current size of vector because it takes extra space to fit next inputs
  //myVector.shrink_to_fit(); makes myVector.capacity() equals to myVector.size()

  cout<<"Vector Current Capacity : "<<myVector.capacity()<<endl;
  
  cout<<"Vector Maximum Size : "<<myVector.max_size()<<endl;

  //Accessing Vector using pointer
  // int *k=myVector.data(); k is a pointer stores the pointer of first element of the vector
  // for(int i=0;i<myVector.size();i++){
  //   cout<<*k++<<endl;
  // }
  return 0;
}

//v1.swap(v2) //Swaping two vector values simmillar as v2.operator=(v1);
//v.empty() // checks wheter the vector is empty or not
//v.insert(location_pointer,value)//Inserting Value using location pointer
//v.erase(location_pointer)//Delete the value in the specified location
//v.clear();  //Delete all elements of the vector
//v.operator[](2) is simmillar as v.at(2)
// int *p=v.data()  pointer p stros the first element pointer of the vector
// v.shrink_to_fit(); it makes v.capacity() equals to v.size()
