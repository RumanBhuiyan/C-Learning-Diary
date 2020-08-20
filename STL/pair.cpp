//The pair container is a simple container defined in <utility> header
//consisting of two data elements or objects like: pair (data_type1, data_type2) Pair_name;

#include<iostream>
#include<utility>
using namespace std;
int main(){

  //Initializing a pair
  //pair<int,int> pair1;
  //pair<int,int> pair{4,5}; // can do the same job
  //pair<int,int> pair={4,5};//you can't assign three values or one value here because it's pair
  pair<int, int>pair1 = make_pair(1, 12);
  pair<int, int>pair2 = make_pair(9, 12);

  //Assigning Values
  //pair.first=4;
  //pair.second=5;
  //pair1=make_pair(6,7);

  //using with logical operators
  cout <<"Are two pair Equal ? : "<<(pair1 == pair2) << endl;
  cout <<"Aren't two pair Equal ? :"<<(pair1 != pair2) << endl;
  cout <<"pair1 greater than or equal to pair2 ? :"<<(pair1 >= pair2) << endl;
  cout <<"pair1 less than or equal to pair2 ? :"<<(pair1 <= pair2) << endl;
  cout <<"pair1 greater than pair2 ? :"<<(pair1 > pair2) << endl;
  cout <<"pair1 less than pair2 ? :"<<(pair1 < pair2) << endl;

  //swaping two pair
  cout<<"Before swaping : "<<endl;
  cout<<"first value : "<<pair1.first<<"  second value: "<<pair1.second<<endl;
  cout<<"first value : "<<pair2.first<<"  second value: "<<pair2.second<<endl;

  pair1.swap(pair2);
  
  cout<<"\nfirst value : "<<pair1.first<<"  second value: "<<pair1.second<<endl;
  cout<<"first value : "<<pair2.first<<"  second value: "<<pair2.second<<endl;

  //Accessing Values
  //if you don't initialize then every value will be 0 or null
  cout<<"\nfirst value : "<<pair1.first<<"  second value: "<<pair1.second<<endl;
  cout<<"Sum is "<<pair1.first+pair1.second<<endl;

  return 0;
}
