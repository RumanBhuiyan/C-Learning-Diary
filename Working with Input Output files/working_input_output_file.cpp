#include<iostream>
using namespace std;
int main()
{
    // this means that scanf will read input from input.txt file
    freopen("input.txt","r",stdin);
    // this means that printf will write output to output.txt file
    freopen("output.txt","w",stdout);

    int test_case,a,b;
    scanf("%i",&test_case);
    
    while (test_case--)
    {
        scanf("%i%i",&a,&b);
        printf("%i\n",a+b);
    }
    

    return 0;
}