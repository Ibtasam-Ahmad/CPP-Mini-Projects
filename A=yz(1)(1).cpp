/* program to calculate and print the value of A using  switch operation
y=10 z=5
A=yz when x=1 A=3/z when x=3 A=5y/z when x=5 */
#include<iostream>
using namespace std;
main()
{
	int x,y,z,A;
	y=10;
	z=5;
	cout<<"enter the value of x ";
	cin>>x;
	switch(x)
	{
		case 1:
		{
			cout<<y*z<<" when A="<<x;
			break;	
		}
		case 3:
		{
			cout<<3/z<<" when A="<<x;
			break;
		}
		case 5:
		{	
			cout<<5*y/z<<" when A="<<x;
		    break;
	    }
		default:
			cout<<"invalid input";
	}
}
