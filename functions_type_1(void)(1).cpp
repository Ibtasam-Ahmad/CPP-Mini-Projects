#include<iostream>
using namespace std;
void sum();
void prime_no();
void greater_no();
void factorial();
void sum()
{
	cout<<"sum of two numbers\n";
	int x, y;
	cout<<"x= ";
	cin>>x;
	cout<<"y= ";
	cin>>y;
	cout<<"sum is\t"<<x+y;
}
main()
{
	factorial();
	sum();
	prime_no();
	greater_no();
}
void greater_no()
{
	cout<<"\nenetr the no to find which is greatest no\n";
	int x, y;
	cout<<"x= ";
	cin>>x;
	cout<<"y= ";
	cin>>y;
	if(x>y)
	{
		cout<<x<<" is graeter than "<<y;
	}
	else
	{
		cout<<y<<" is graeter than "<<x;
	}
}
void factorial()
{
	cout<<"Enter to find factorial\nEnter no\t";
	int no, fact=1;
	cin>>no;
	for(int i=1; i<=no; i++)
	{
		fact=fact*i;
	}
	cout<<no<<"! = "<<fact;
}
void prime_no()
{
	int no, prime=1;
	cout<<"Enter no to find either its prime or not\t";
	cin>>no;
	if(no==1 || no==0)
	{
		prime=0;
	}
	for(int i=2; i<no ; i++)
	{
		if(no%i==0)
		{
			prime=0;
			break;
		}
		else
		{
			prime=1;
		}
	}
	if(prime==1)
	{
		cout<<no<<" is prime";
	}
	else
	{
		cout<<no<<" is not prime";
	}
}
