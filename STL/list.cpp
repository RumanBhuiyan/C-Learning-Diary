//Quick learning Link : https://www.youtube.com/watch?v=VcCRXrLFxyc
// https://www.thecrazyprogrammer.com/2017/07/stl-list.html

//list has slow traversal time than vector if index is found then insert,delete happens quickly
// list is simmilar as double linked list,as list can traverse in both direction that's why its slow
//comparing to vector.single linked list=forward List
//you can't access elemnts of any list by index like l[i]=i,this is the disadvantage of List

#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void showListItem(list<int> keep);
int main(){
   //Initializing List : list<data_type> listName;
     list<int>myList{4,5,6,7,8};
     //list<int>myList={4,5,6,7,8}; do the same job

     list<int>list1,list2;

     for(int i=0;i<10;i++){
       list1.push_back(i);//inserting element one after one
       list2.push_front(i);//inserting element one before one
     }
     //you can perform push_back,push_front in any type of list,push_front() is absent in vector

     cout<<"Is List empty : "<<list1.empty()<<endl;//returns wheter list is empty or not
     cout<<"\nBefore pop : \n";
     showListItem(list1);//output: 0 1 2 3 4 5 6 7 8 9
     cout<<endl;
     showListItem(list2);//output: 9,8,7,6,5,4,3,2,1

     list1.pop_front();//deleting first element of list1
     list1.pop_back();//deleting last element of list1
     list2.pop_front();//deleting first element of list2
     list2.pop_back();//deleting last element of list2

     cout<<"\n\nAfter pop : \n";
     showListItem(list1);//output: 0 1 2 3 4 5 6 7 8 9
     cout<<endl;
     showListItem(list2);//output: 9,8,7,6,5,4,3,2,1

     cout<<"\n\nFirst element of the list1 : "<<list1.front()<<endl;
     //cout<<"\n\nFirst element of the list1 : "<<*list1.begin()<<endl; do the same job
     cout<<"Last element of the list1 : "<<list1.back()<<endl;
     //cout<<"Last element of the list1 : "<<*list1.end()<<endl;//do the same job

     //Insert Operation with pointer : list.insert(iterator,value)
     list1.insert(list1.begin(),97);//insert 97 at index 0 and other values index increased by 1
     showListItem(list1);

     //Delete operation : list.erase(iterator)
     list1.erase(list1.begin());
     showListItem(list1);

     cout<<"\n\nSize of list1 : "<<list1.size()<<endl;
     cout<<"Size of list2 : "<<list2.size()<<endl;
     cout<<"\n\nMax Size of list1 : "<<list1.max_size()<<endl;
     cout<<"Max Size of list2 : "<<list2.max_size()<<endl;

     //Sorting list
     list1.sort();
     showListItem(list1);

     //Reversing list
     list1.reverse();
     showListItem(list1);

     //Splice (adding two list) : list1.splice(list1.end(),list2)
     list1.splice(list1.end(),list2);//at last position add the list2 with its all items
     showListItem(list1);

     //merge : list1.merge(list2) Before merging sort the lists first
     list<int>list3{10,12,11};
     list<int>list4{13,15,14};
     list3.merge(list4);
     cout<<"\n\nMerging without sorting : ";
     showListItem(list3);//10 12 11 13 15 14

     list3.sort();
     list4.sort();
     list3.merge(list4);
     cout<<"\n\nMerging after sorting : ";
     showListItem(list3);

  return 0;
}

void showListItem(list<int> keep){
    cout<<"\nList elemnts are : ";
    list<int>::iterator p;
    for(p=keep.begin();p!=keep.end();p++){
      cout<<*p<<" ";
    }
}

//list.assign(5,98); delete all previous element and add 5 times 98
//list.remove(34) ; removes all elements which value is 34
//list1.swap(list2); swap two list
//list.clear() ; delete all the elements of the list
