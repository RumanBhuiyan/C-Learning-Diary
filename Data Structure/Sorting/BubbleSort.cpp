//Bubble Sort
//(greatest number will'be in the last index after each iteration)
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int numbers[],int size);
void printArray(int *p,int size);

int main(){

  // int Numbers[]={30,10,40,20,50};
  int Numbers[]={2,30,1,1,45,5,33,9,8};

  bubbleSort(Numbers,sizeof(Numbers)/sizeof(Numbers[0]) );
  printArray(Numbers,sizeof(Numbers)/sizeof(Numbers[0]));

  return 0;
}

void bubbleSort(int numbers[],int size){

  for(int i=0;i<size;i++){

    for(int j=0;j<size-i-1;j++){
      if(numbers[j]>numbers[j+1]){
        int temp=numbers[j+1];
        numbers[j+1]=numbers[j];
        numbers[j]=temp;
      }
    }
  }
}

void printArray(int *p,int size){

 while(size--){
   cout<<*(p++)<<endl;
 }
}
