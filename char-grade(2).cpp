#include<iostream>
using namespace std;
main()
{
	char grade;
	cout<<"enter grade ";
	cin>>grade;
	switch (grade)
	{
		case 'A':
			cout<<"grade is excelent";
			break;
		case 'B':
			cout<<"grade is good";
			break;
		case 'C':
			cout<<"grade is fair";
	}
}
