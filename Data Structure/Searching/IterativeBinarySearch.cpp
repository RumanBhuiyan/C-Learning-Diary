//Binary Search i)first sort the array ii)then search through it
//My Solution 
#include<bits/stdc++.h>
using namespace std;

int iterativeBinarySearch(int numbers[],int size,int search);

int main(){

 int Numbers[]={30,23,5,9,2,1};
 sort(Numbers,Numbers+sizeof(Numbers)/sizeof(int));// 1 2 5 9 23 30

  int searchingNumber;
  cout<<"Enter the number you want to search : ";
  cin>>searchingNumber;

  int size=sizeof(Numbers)/sizeof(int);
  int index=iterativeBinarySearch(Numbers,size,searchingNumber);

  cout<<index<<endl;

  return 0;
}

int iterativeBinarySearch(int numbers[],int size,int search){

 for(int i=0,begin=0,end=size-1,mid=size/2;i<size;i++){

     if(numbers[mid]==search){
       return mid;
     }
     else if(numbers[mid]<search){
         begin=mid+1;
         mid=(begin+end)/2;
     }
     else{
         end=mid-1;
         mid=(begin+end)/2;
     }
  }
  return -1;
}
