#include<iostream>
using namespace std;
bool prime();
int gcd();
double factorial();
int permutation();
main()
{
	cout<<"Enter 1 for prime\nEnter 2 for factorial\nEnter 3 for permutation\nEnter 4 for GCD\nEnter number\t";
	int n;
	cin>>n;
	if(n==1)
	{
		if(prime()==1)
		{
			cout<<"The number is prime\n";
		}
		else
		{
			cout<<"The number is not prime\n";
		}
	}
	if(n==2)
	{
		cout<<factorial();
	}
	if(n==3)
	{
		cout<<"The permutation is "<<permutation();
	}
	if(n==4)
	{
		cout<<"The GCD of the number is "<<gcd();
	}
}
bool prime()
{
	cout<<"This is the program to find prime numbner\n";
	int n;
	bool p=1;
	cout<<"Enter number for prime\n";
	cin>>n;
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

 double factorial()
{
	cout<<"This is the program to find factorial numbner\n";
	int n;
	int fact =1;
	cout<<" Enter the number to find factorial\n";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		fact=fact*i;
	}
	return fact;
}
int permutation()
{
	cout<<"This is the program to find permutation\n";
	int all_possibilities, find_possiblities, x, ans;
	cout<<"Enter all the possiblisties\n";
	cin>>all_possibilities;
	cout<<"Enter possiblities to find\n";
	cin>>find_possiblities;
	int fact_ap=1, fact_fp=1;
	for(int i=1; i<=all_possibilities; i++)
	{
		fact_ap=fact_ap*i;
	}
	x=all_possibilities-find_possiblities;
	for(int i=1; i<=x; i++)
	{
		fact_fp=fact_fp*i;
	}
	ans=fact_ap/(fact_fp);
	return ans;
}
int gcd()
{
	cout<<"This is the program to find GCD\n";
	int a, b, small_no, gcd;
	cout<<"Enter the first number\n";
	cin>>a;
	cout<<"Enter the second number\n";
	cin>>b;
	if(a>b)
	{
		small_no=b;
	}
	else
	{
		small_no=b;
	}
	for(int i=1; i<=small_no; i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
		}
	}
	return gcd;
}
