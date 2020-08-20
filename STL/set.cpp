//in set if you insert values they are sorted automatically after insertion you can't
//modify any value but you can add remove elements from set
//go through it: https://www.geeksforgeeks.org/set-in-cpp-stl/
//though set is sorted in increasing order but you can sort your set in decrease order
// to like set<int,greater<int>>mySet;

#include<iostream>
#include<set>
#include<iterator>
using namespace std;
void showIncreasedSetItems(set<int>increasedSet);
void showDecreasedSetItems(set<int,greater<int>>decreasedSet);
int main(){
  //Initializing set
  set<int>increasingSet;
  //set<int> mySet{4,3,2};
  set <int, greater <int> >decreasingSet;

  //inserting data into set
  increasingSet.insert(50);
  increasingSet.insert(80);
  increasingSet.insert(10);
  increasingSet.insert(2);
  increasingSet.insert(100);

  decreasingSet.insert(50);
  decreasingSet.insert(80);
  decreasingSet.insert(10);
  decreasingSet.insert(2);
  decreasingSet.insert(100);

  showIncreasedSetItems(increasingSet);
  showDecreasedSetItems(decreasingSet);

  //cout<<"\n  "<<*increasingSet.find(2);
  cout<<"\n  2 exists in set ? : "<<increasingSet.count(2)<<endl;
  cout<<"Current size of the set is "<<increasingSet.size()<<endl;
  cout<<"Maximum size of the set is "<<increasingSet.max_size()<<endl;

  return 0;
}
void showDecreasedSetItems(set<int,greater<int>>decreasedSet){

  set<int,greater<int>>::iterator p;

  if(decreasedSet.empty()){
    cout<<"Please insert data into set first!"<<endl;
    return ;
  }

  cout<<"\nDecreasing ordered set is : ";
  for(p=decreasedSet.begin();p!=decreasedSet.end();p++){
    cout<<*p<<" ";
  }
}
void showIncreasedSetItems(set<int>increasedSet){
  set<int>::iterator p;

  if(increasedSet.empty()){
    cout<<"Please insert data into set first!"<<endl;
    return ;
  }

  cout<<"\nIncreasing ordered set is : ";
  for(p=increasedSet.begin();p!=increasedSet.end();p++){
    cout<<*p<<" ";
  }
}

//set.begin();returns the first pointer location of first elements
//set.erase(value); this will delete the value from the set
//begin,end,count,swap,rbegin,rend,size,max_size,etc methods are also available in set
