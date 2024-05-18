#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
main()
{
	char a[10], y;
	int count=0, x;
	srand(time(NULL));
	for( int i=0; i<10; i++)
	{
		a[i]= 65 + rand()%25;
		cout<<a[i];
	}
	cout<<"\nhow many time a loop repeat\n";
	cin>>x;
//	cout<<" enter the alphabet";
//	cin>>y;
	for( int i=0; i<x; i++)
	{
		cout<<"enter the "<<i+1<<" alphabet\n";
    	cin>>y;
		for( int i=0; i<10; i++)
		{
			if(a[i]==y)
			{
				count++;
			}
		}
		cout<<count<<" is the frequency of "<<y<<endl;
		count=0;
//		cout<<" enter new\n";
//		cin>>y;
	}
}
