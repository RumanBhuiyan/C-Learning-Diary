// armstron is a number which is equal to sum of cube of its digits
// example : 0, 1, 153, 370, 371 and 407
#include<iostream>
using namespace std;

int sumOfdigitsCubes(string numbers){
    int summation = 0;
    for (int i=0;i<numbers.length();i++){
        //ASCII : 0->48 1->49 2->50 and so on thats why we need to subtract 48 
        int digit = (int)numbers[i] -48;
        summation += digit*digit*digit;
    }
    return summation;
}

int main()
{
    string input;
    cout<<"Enter number: ";
    cin>>input;
    int number = stoi(input);//converting string to integer

    cout<<(sumOfdigitsCubes(input)==number ? "Armstrong Number":"Not Armstrong number")<<endl;

    return 0;
}