#include<iostream>
using namespace std;

double slope(double x1,double y1, double x2,double y2){
    return (y2-y1)/(x2-x1);
}

int main()
{
    double x1,x2,x3,y1,y2,y3;

    cout<<"Enter first point co-ordintes : ";
    cin>>x1>>y1;
    cout<<"Enter second point co-ordintes : ";
    cin>>x2>>y2;
    cout<<"Enter Third point co-ordintes : ";
    cin>>x3>>y3;

    cout<<(slope(x1,y1,x2,y2)==slope(x2,y2,x3,y3)? "Same Line":"Not in same line")<<endl;

    return 0;
}