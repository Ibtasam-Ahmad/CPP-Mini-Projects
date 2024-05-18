#include<iostream>
using namespace std;
bool prime(int n);
int factorial(int n);
int gcd(int m, int n);
int combination(int m, int n);
int permutation(int m, int n);
main()
{
	int n;
	cout<<"Enter 1 to find prime \nEnter 2 to find permutation\nEnter 3 to find factorial\nEnter 4 to find gcd\nEnter 5 for combination\n";
	cin>>n;
	if(n==1)
	{
		int x;
		cout<<"This is the program to find prime number\nEnter number\t";
		cin>>x;
		if(prime(x)==1)
		{
			cout<<"The number "<<x<<" is prime\n";
		}
		else
		{
			cout<<"The number "<<x<<" is not prime\n";
		}
	}
	if(n==2)
	{
		cout<<"This is the program to find permutation\nEnter two numbers\n";
		int x, y;
		cout<<"Enter the first number\t";
		cin>>x;
		cout<<"Enter the second number\t";
		cin>>y;
		cout<<"Purmutation of two numbers is\t"<<permutation(x,y);
	}
	if(n==3)
	{
		int x;
		cout<<"This is the program to find factorial\nEnter a number\n";
		cin>>x;
		cout<<"Factorial of a number "<<x<<" is "<<factorial(x);
	}
	if(n==4)
	{
		cout<<"This is the program to find GCD\nEnter two numbers\n";
		int x, y;
		cout<<"Enter the first number\t";
		cin>>x;
		cout<<"Enter the second number\t";
		cin>>y;
		cout<<"GCD of number "<<x<<" and "<<y<<" is "<<gcd(x,y);
	}
	if(n==5)
	{
		cout<<"This is the program to find combination\nEnter two numbers\n";
		int x, y;
		cout<<"Enter the first number\t";
		cin>>x;
		cout<<"Enter the second number\t";
		cin>>y;
		cout<<"Combination of two numbers is\t"<<combination(x,y);
	}
}
bool prime(int n)
{
	bool p=1;
	if(n==1 || n==0)
	{
		p=0;
	}
	if(n>1)
	{
		for(int i=2; i<n; i++)
		{
			if(n%i==0)
			{
				p=0;
				break;
			}
			else
			{
				p=1;
			}
		}
	}
	return p;
}
int factorial(int n)
{
	int fact=1;
	for(int i=1; i<=n; i++)
	{
		fact=fact*i;
	}
	return fact;
}
int permutation(int m, int n)
{
	int p;
	p=factorial(m)/factorial(m-n);
	return p;
}
int gcd(int m, int n)
{
	int small_number, GCD;
	if(m>n)
	{
		small_number=n;
	}
	else
	{
		small_number=m;
	}
	for(int i=1; i<=small_number; i++)
	{
		if(m%i==0 && n%i==0)
		{
			GCD=i;
		}
	}
	return GCD;
}
int combination(int m, int n)
{
	int c;
	c=factorial(m)/(factorial(n)*factorial(m-n));
	return c;
}
