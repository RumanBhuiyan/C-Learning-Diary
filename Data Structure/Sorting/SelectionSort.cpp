//Selection Sort : time complexity-> O(n^2)
//My Solution
#include<bits/stdc++.h>
using namespace std;

void selectionSort(int numbers[],int size);
void printArray(int *pointer,int size);

int main(){

   int Numbers[]={2,30,1,45,1,5,33,9,8};
   //int Numbers[]={30,10,40,-20,50};

  selectionSort(Numbers, sizeof(Numbers)/sizeof(Numbers[0]));
  printArray(Numbers,sizeof(Numbers)/sizeof(Numbers[0]));

  return 0;
}

void selectionSort(int numbers[],int size){

  for(int i=0;i<size;i++){

    int nextSmallNumber=numbers[i];
    int smallNumberIndex=i;
    //find the smallest number of remaining array
     for(int j=i+1;j<size;j++){
          if(numbers[j]<nextSmallNumber){
            nextSmallNumber=numbers[j];
            smallNumberIndex=j;
          }
     }
     //swaping two numbers
    int temp=numbers[i];
    numbers[i]=nextSmallNumber;
    numbers[smallNumberIndex]=temp;
  }
}

void printArray(int *pointer,int size){

  while(size--){
    cout<<*(pointer++)<<endl;
  }
}
