#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int size;
    long long int summation = 0;
    char line[100];
    string word;

    scanf("%i\n",&size);// telling scanf to read an integer and a newline
    scanf("%[^\n]",line);// telling scanf to read input untill it gets a newline
    istringstream stream(line);

    while(stream >> word){ 
        summation += stoll(word);
    }
    printf("%lli\n",(summation>=0 ? summation : summation*(-1)));
    return 0;
}