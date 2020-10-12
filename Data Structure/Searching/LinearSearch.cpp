//My Solution 
#include<bits/stdc++.h>
using namespace std;
int indexOf(int a[],int size,int num);
int main()
{
  int search;
  cout<<"Enter the number to search in array : ";
  cin>>search;
  int numbers[]={22,23,24,25,26,27};
  int index=indexOf(numbers,sizeof(numbers)/sizeof(numbers[0]) ,search);

  if(index!=-1){
    cout<<"position/index : "<<index<<endl;
  }
  else {
    cout<<"Not found in the array"<<endl;
  }

  return 0;
}
int indexOf(int a[],int size,int num){
 int index=-1;
 for(auto i=0;i<size;i++){
   if(a[i]==num){
     index=i;
     break;
   }
 }
  return index;
}
