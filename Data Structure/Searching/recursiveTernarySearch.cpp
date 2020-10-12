//ternary Search
// My Solution
#include<bits/stdc++.h>
using namespace std;

int recursiveTernarySearch(int numbers[],int begin,int end,int size,int search);

int main(){

   //int Numbers[]={1,2,3,4,5,6,7,8,9};
  //int Numbers[]={30,23,5,9,2,1}; // 1 2 5 9 23 30
   int Numbers[]={1,2,3,4,5,6,7,8,9,10,11,12};
  // int Numbers[]={1,2,3};
  sort(Numbers,Numbers+sizeof(Numbers)/sizeof(int));

  int search;
  cout<<"Enter the Number you want to search : ";
  cin>>search;

  int index;
  int size=sizeof(Numbers)/sizeof(Numbers[0]);
  index=recursiveTernarySearch(Numbers,0,size-1,size,search);

  cout<<"Recursive Ternary Search : "<<index<<endl;
  return 0;
}

int recursiveTernarySearch(int numbers[],int begin,int end,int size,int search){

   int firstMid=begin+(end-begin)/3;
   int secondMid=firstMid+(end-begin)/3;

   if(end<begin){
     return -1;
   }
   if(numbers[firstMid]==search){
     return firstMid;
   }
   if(numbers[secondMid]==search){
     return secondMid;
   }

   if(search<numbers[firstMid]){
     return recursiveTernarySearch( numbers,begin,firstMid-1,size,search);
   }
   else if(search > numbers[secondMid]){
     return recursiveTernarySearch( numbers,secondMid+1,end,size,search);
   }
   else {
   return recursiveTernarySearch( numbers,firstMid+1,secondMid-1,size,search);
   }

  return -1;
}
