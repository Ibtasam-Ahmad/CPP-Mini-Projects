
//construct an algorithm and flow chart to check if a given number is positive, negative or zero
#include <iostream>
using namespace std;
main()
{
	int x,y;
	cout<<"enter x";
	cin>>x;
	
	if(x<0)
	{
		cout<<"x is negative";
	}
	else if (x==0)
	{
		cout<<"x is zero";
	}
	else
	{
		cout<<" x is positive";
	}
}
