#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter your temperature in kelvins\n";
	int vaccine_card=0;
	float temp, temp_celsius;
	cin>>temp;
	temp_celsius = temp - 273;
	cout<<temp_celsius<<" Degree celsius\n";
	if(temp_celsius>36.6667)
	{
		cout<<"You are not allowed to enter in dept\n";
	}
	else
	{
		cout<<"Do you have your vaccination card\n";
		cout<<"If yes enter 1\n";
A:		cin>>vaccine_card;
		if(vaccine_card==1)
		{
			cout<<"You are allowed to enter in dept\n";
		}
		else if(vaccine_card==0)
		{
			cout<<"come with vaccine card to enter in dept\n";
		}
		else
		{
			cout<<"Only enter 1 if you have or 0 if you dont\n";
			goto A;
		}
	}
	return 0;
}
