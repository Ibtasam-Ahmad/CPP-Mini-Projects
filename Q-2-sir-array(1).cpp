#include<iostream>
using namespace std;
main()
{
	int x[10000],i,j=1;
	int p=1;
	for(i=0;i<10000;i++)
	{
		x[i]=j;
		j=j+1;	
	}
	for(i=0;i<10000;i++)
	{
		if(x[i]>1)
		{
			for(j=2;j<x[i];j++)
			{
				if(x[i]%j==0)
				{
					p=0;
					break;	
				}	
			}	
			if(p==1)
			{
				cout<<x[i]<<" prime"<<endl;
			}
			p=1;
		}
	}
}
//Q2_BS_E_prime.cpp
//Displaying Q1_BS_E.cpp.
