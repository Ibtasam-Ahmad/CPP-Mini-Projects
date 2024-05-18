// this program calculates the user pay
#include<iostream>
using namespace std;
int main()
{
double hours, rate, pay;
 //get the numbers of hours worked.
cout<<"how many hours did you work?";
cin>>hours;
//get the hours pay rate.
cout<<"how much you get paid per hour";
cin>>rate;
//calculate the pay.
pay=hours*rate;
//display the pay.
cout<<"you have earned $"<<pay<<endl;
return 0;
}