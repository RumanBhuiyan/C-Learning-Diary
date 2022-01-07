#include<iostream>
using namespace std;

bool isPrime(int number){
    bool prime = true;

    if(number <=1) prime = false;
    else {
        for(int i=2;i<= number ; i++){
            if (i > number/i) break;
            if( number % i ==0 ) {
                prime = false;
                break;
            }
        }
    }
    return prime ;
}

int main()
{
    int number;
    cout<<"Enter number: "; 
    cin>>number;

    cout<<(isPrime(number) ? "Prime Number": "Not Prime Number")<<endl;

    return 0;
}