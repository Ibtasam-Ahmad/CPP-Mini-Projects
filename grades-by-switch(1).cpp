#include<iostream>
using namespace std;
main()
{
	char number;
	cout<<"enter number";
	cin>>number;
	switch (number)
	{
		case '>=85':
			cout<<"grade is A";
	}
	{
		case '<74'&&'>85':
			cout<<"grade is B";
	}
	{
		case '65-74':
			cout<<"grade is C";
	}
	{
		case '50-64':
			cout<<"grade is D";
	}
	{
		case >'50':
			cout<<"grade is F"
	}
}
