#include<bits/stdc++.h>
using namespace std;
int main()
{
    char line[100];
    string word;

    // input a line. example : 1 2 3.here gets() allows space sperated inputs
    gets(line);
    istringstream stream(line);

    while(stream >> word){
       cout<<stoi(word)<<endl;
    }

    return 0;
}