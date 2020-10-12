//ternary Search divides array in 3 parts but binary search divides in 2 parts
// My Solution
#include<bits/stdc++.h>
using namespace std;

int iterativeTernarySearch(int numbers[],int size,int search);

int main(){

   int Numbers[]={1,2,3,4,5,6,7,8,9};
  //int Numbers[]={30,23,5,9,2,1}; // 1 2 5 9 23 30
  //int Numbers[]={1,2,3,4,5,6,7,8,9,10,11,12};
  sort(Numbers,Numbers+sizeof(Numbers)/sizeof(int));

  int search;
  cout<<"Enter the Number you want to search : ";
  cin>>search;

  int size=sizeof(Numbers)/sizeof(Numbers[0]);
  int index=iterativeTernarySearch(Numbers,size,search);

  cout<<"Iterative Ternary Search : "<<index<<endl;
  return 0;
}
int iterativeTernarySearch(int numbers[],int size,int search){

 for(auto i=0,begin=0,end=size-1;i<size;i++){

   int firstMid=begin+(end-begin)/3;
   int secondMid=firstMid+(end-begin)/3;

   if(numbers[firstMid]==search){
     return firstMid;
   }
   if(numbers[secondMid]==search){
     return secondMid;
   }

   if(search<numbers[firstMid]){
     end=firstMid-1;
   }
   else if(search > numbers[secondMid]){
     begin=secondMid+1;
   }
   else {
     begin=firstMid+1;
     end=secondMid-1;
   }
 }
  return -1;
}
