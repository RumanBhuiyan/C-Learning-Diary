#include<iostream>
using namespace std;

bool isPrime(int number){
    int numOfDivsiors = 0;

    for (int i=1; i<= number; i++){
        if(i <= number/i){
            if(number %i ==0){
                if(i !=1 && i!= number){
                numOfDivsiors += 1;
                }
            }
        }else break;
    }
    return (numOfDivsiors==0 ? true : false);
}

int main()
{
    int number;
    cout<<"Enter number: ";
    cin>>number;

    cout<<(isPrime(number) ? "Prime Number": "Not Prime Number")<<endl;

    return 0;
}