//Insertion Sort : time complexity O(n^2)
//My Solution
#include<bits/stdc++.h>
using namespace std;

void insertionSort(int numbers[],int size);
void printArray(int *p,int size);

int main(){

  // int Numbers[]={30,10,40,20,50};
  int Numbers[]={2,30,1,45,5,33,9,8};

  insertionSort(Numbers,sizeof(Numbers)/sizeof(Numbers[0]) );
  printArray(Numbers,sizeof(Numbers)/sizeof(Numbers[0]));

  return 0;
}

void insertionSort(int numbers[],int size){

  for(int i=0;i<size;i++){

    for(int j=i+1;j>0;j--){

       if(numbers[j]<numbers[j-1]){
         //swap two values
         int temp=numbers[j];
         numbers[j]=numbers[j-1];
         numbers[j-1]=temp;
       }
    }
  }
}

void printArray(int *p,int size){

 while(size--){
   cout<<*(p++)<<endl;
 }
}
