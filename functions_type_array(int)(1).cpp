#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void factorial(int m);
double factorial1(int n);
int min(int n[], int size);
int max(int n[], int size);
bool prime(int n);
void disp(int n[], int size);
main()
{
//	system("color F3");
	int x[10]={10,2,3,4,5,6,7,8,9,1};
//	disp(x,10);
//	cout<<"small value is\t"<<min(x,10)<<endl;
//	cout<<"Factorial of small value is\t"<<factorial1(min(x,10))<<endl;
//	cout<<"larger value is\t"<<max(x,10)<<endl;
//	cout<<"Factorial of larger value is\t"<<factorial1(max(x,10))<<endl;
	srand(time(NULL));
	int arrayF[20];
	for(int i=0; i<20; i++)
	{
		arrayF[i]=i+1;
		factorial(arrayF[i]);
		cout<<arrayF[i]<< "!= "<<factorial1(arrayF[i])<<endl;
	}
	int arrayP[200];
	for(int i=0; i<200; i++)
	{
		arrayP[i]=1+rand()%(100-1+1);
		cout<<arrayP[i]<<"\t is \t"<<prime(arrayP[i])<<endl;
		if(arrayP[i]>1)
		{
			if(prime(arrayP[i]))
			{
				cout<<arrayP[i]<<" is prime \n";
			}
			else
			{
				cout<<arrayP[i]<<" is not prime \n";
			}
		}
	}
}
void disp(int n[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<n[i]<<endl;
	}
}
void factorial(int m)
{
	int fact=1;
	for(int i=1; i<=m; i++)
	{
		fact= fact*i;
	}
	cout<<m<<" != "<<fact<<endl;
}
double factorial1(int n)
{
	int fact=1;
	for(int i=1; i<=n; i++)
	{
		fact= fact*i;
	}
	return fact;	
}
bool prime(int n)
{
	int prime=0;
	if(n==1 || n==0)
	{
		prime=0;
	}	
	for(int i=2; i<n ; i++)
	{
		if(n%i==0)
		{
			prime=0;
			break;
		}
		else
		{
			prime=1;
		}
	}
	return prime;  	
}
int min(int n[], int size)
{
	int smallvalue=n[0];
	for(int i=0; i<size; i++)
	{
		if(smallvalue>n[i])
		{
			smallvalue=n[i];
		}
	}
	return smallvalue;
}
int max(int n[], int size)
{
	int largervalue=n[0];
	for(int i=0; i<size; i++)
	{
		if(largervalue<n[i])
		{
			largervalue=n[i];
		}
	}
	return largervalue;
}
