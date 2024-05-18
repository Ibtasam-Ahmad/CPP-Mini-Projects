/*write a program to assign lettergrade
to given distribution
>=85=A,75-54=B,65-74=C,50-64=D,<50=F*/
#include <iostream>
using namespace std;
main()
{
	float x;
	cout<<"enter the numbers : ";
	cin>>x;
	if(x>84.0)
	{
		cout<<"the grade is A";
	}
	else if (x>74.0 && x<=84.0)
	{
		cout<<"the grade is B";
	}
	else if (x>64.0 && x<=74.0)
	{
		cout<<"the grade is C";
	}
	else if (x>49.0 && x<=64.0)
	{
		cout<<"the grade is D";
	}
	else
	{
		cout<<"the grade is F";
	}
}
