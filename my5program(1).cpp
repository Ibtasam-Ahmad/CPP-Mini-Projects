#include<iostream>
using namespace std;
main ()
{
	int x,y;
	cout<<"enter the value of x ";
	cin>>x;
	cout<<"enter the value of y ";
	cin>>y;
	if (x>y)
	{
		cout<<"x is greater than y";
	}
	else if (x==y)
	{
		cout<<"x is equal to y"<<endl;
		cout<<"y is equal to x";
	}
	else
	{
		cout<<"x is lesser than y";
	}
} 
