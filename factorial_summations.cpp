#include<iostream>
using namespace std;

bool isEven(int number){
    return (number %2 ==0 ? true : false);
}

long long int factorial(int number){
    long long int product = 1;
    
    for (int i=1;i<=number;i++){
        product *= i;
    }
    return product;
}

int main()
{
    int number;
    long long int summation = 0;
    cout<<"Enter the last number of the series : ";
    cin>>number;

    for (int i=1;i<=number;i++){
        summation += (isEven(i) ? i : factorial(i));
    }

    cout<<"Summation of series is : "<<summation<<endl;

    return 0;
}