//Quick Sort : time complexity-> O(n^2)
//My Solution
#include<bits/stdc++.h>
using namespace std;

void quickSort(int numbers[],int size);
void printArray(int *pointer,int size);

int main(){

   int Numbers[]={2,30,1,45,1,5,33,9,8};
   //int Numbers[]={30,10,40,-20,50};

  quickSort(Numbers, sizeof(Numbers)/sizeof(Numbers[0]));
  printArray(Numbers,sizeof(Numbers)/sizeof(Numbers[0]));

  return 0;
}

void quickSort(int numbers[],int size){

  for(int i=0;i<size;i++){
     for(int j=i+1;j<size;j++){
       if(numbers[i]>numbers[j]){
         int temp=numbers[i];
         numbers[i]=numbers[j];
         numbers[j]=temp;
       }
     }
  }
}

void printArray(int *pointer,int size){

  while(size--){
    cout<<*(pointer++)<<endl;
  }
}
