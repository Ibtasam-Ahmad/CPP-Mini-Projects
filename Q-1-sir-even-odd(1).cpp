#include<iostream>
using namespace std;
main()
{
	int x[1000],i,j=1;
	int even[500],odd[500],e=0,o=0;
	for(i=0;i<1000;i++)
	{
		x[i]=j;
		j=j+1;	
	}
	for(i=0;i<1000;i++)
	{
		if(x[i]%2==0)
		{
			even[e]=x[i];
			e++;
		}
		else
		{
			odd[o]=x[i];
			o++;
		}
	}
	cout<<" even numbers are "<<endl;
	for(i=0;i<500;i++)
	{
		cout<<even[i]<<",";
	}
	cout<<endl;
	cout<<" odd numbers are "<<endl;
	for(i=0;i<500;i++)
	{
		cout<<odd[i]<<",";
	}
}
//Q1_BS_E_even_odd.cpp
//Displaying Q1_BS_E.cpp.
