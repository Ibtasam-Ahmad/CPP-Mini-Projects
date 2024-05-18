#include<iostream>
using namespace std;
main()
{
	int number;
	char grade;
	cout<<"enter number ";
	cin>>number;
	switch (number/10)
	{
		case '8':
			cout<<"grade is A";
			break;
		case '7':
			cout<<"grade is B";
			break;
	    case '6':
			cout<<"grade is C";
			break;
		case '5':
			cout<<"grade is D";
			break;
		case '4':
			cout<<"grade is F";
			break;
	}
}
