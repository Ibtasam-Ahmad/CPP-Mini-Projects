#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int min(int n[], int size);
int fact(int n);
int prime(int n);
main()
{
//	int array[10]={9,8,7,6,5,4,3,2,1,0};
//	cout<<"the maxinum number in array is "<<min(array, 10);
	system("color F5");
	srand(time(NULL));
	int x[10];
	for(int i=0; i<10; i++)
	{
		x[i]=1+rand()%(10-1+1);
		if(prime(x[i]))
		{
			cout<<"the number "<<x[i]<<" is prime \t";
			cout<<"the number "<<x[i]<<" its factorial is \t"<<fact(x[i])<<endl;
		}
		else
		{
			cout<<"the number "<<x[i]<<" is not prime \t";	
			cout<<"the number "<<x[i]<<" its factorial is \t"<<fact(x[i])<<endl;
		}
	}
}
int fact(int n)
{
	int f=1;
	for(int i=1; i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int prime(int n)
{
	int p=1;
	if(n==1 || n==0)
	{
		p=0;
	}
	for(int i=2; i<n; i++)
	{
		if(n%i==0)
		{
			p=0;
		}
	}
	return p;
}
int min(int n[], int size)
{
	int sm=n[0];
	for(int i=0; i<size; i++)
	{
		if(sm>n[i])
		{
			sm=n[i];
		}
	}
	return sm;
}
