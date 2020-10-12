//Binary Search i)first sort the array ii)then search through it
//My Solution 
#include<bits/stdc++.h>
using namespace std;

int recursiveBinarySearch(int numbers[],int begin,int end,int mid,int search);

int main(){

 int Numbers[]={30,23,5,9,2,1};
 sort(Numbers,Numbers+sizeof(Numbers)/sizeof(int));// 1 2 5 9 23 30

  int searchingNumber;
  cout<<"Enter the number you want to search : ";
  cin>>searchingNumber;

  int size=sizeof(Numbers)/sizeof(int);
  int index=recursiveBinarySearch(Numbers,0,size-1,size/2,searchingNumber);

  cout<<"Recursive Binary Search : "<<index<<endl;

  return 0;
}

int recursiveBinarySearch(int numbers[],int begin,int end,int mid,int search){

  if(end<begin){
     return -1;
  }
  else if(numbers[mid]==search){
        return mid;
    }
    else if(numbers[mid]<search){
     return recursiveBinarySearch(numbers,mid+1,end,(mid+1+end)/2,search);
    }
    else {
     return recursiveBinarySearch(numbers,begin,mid-1,(begin+mid-1)/2,search);
    }

 return -1;
}
