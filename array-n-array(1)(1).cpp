#include<iostream>
using namespace std;
main()
{
	int x[1000],i,j=1;
	for(i=1;i<=1000;i++)
	{
		x[i-1]=i;
		j=j+1;	
	}
	for(i=0;i<1000;i++)
	{
		if(x[i]%2==0)
		{
			cout<<x[i]<<" even"<<endl;
		}
		else
		{
			cout<<x[i]<<" odd"<<endl;
		}
	}
}
//Q1_BS_E.cpp
//Displaying Q1_BS_E.cpp.
