#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    char line[100];
    string word;

    // input a line. example : 1 2 3.here gets() allows space sperated inputs
    scanf("%[^\n]",line);// telling scanf to read input untill it gets a newline
    istringstream stream(line);

    while(stream >> word){
       cout<<stoi(word)<<endl;
    }

    return 0;
}