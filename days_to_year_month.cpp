#include<iostream>
using namespace std;
int main()
{
    int total_days;
    // use prinf and scanf instead of cin and cout because 
    // printf and scanf are faster than cin and cout
    printf("Enter number of days : ");
    scanf("%i",&total_days);

    int years = total_days / 365;
    int months = (total_days - years*365)/30;
    int rest_days = total_days - years*365 - months*30;

    printf("Years : %i Months : %i Days : %i\n",years,months,rest_days);

    return 0;
}