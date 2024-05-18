#include<iostream>
using namespace std;
void factorial(int n);
void sum(int x, int y);
void greater_no(int x, int y);
void greater_no(int x, int y, int z);
void prime(int n);
void gcd(int x, int y);
main()
{
	cout<<"What do u Want\nPress the number to enter\n";
	cout<<"enter 1 for factorial\nenter 2 for prime\nenter 3 for sum\nenter 4 for greatest for 2 no\nenter 5 for greatest for 3 no\nenter 6 to find GCD\n";
	int no;
	cout<<"enter no\n";
	cin>>no;
	if(no==1)
	{
		int f;
		cout<<"Enter a number to find its factorial\n";
		cin>>f;
		factorial(f);
	}
	else if(no==2)
	{
		int p;
		cout<<"Enter a number to find its prime\n";
		cin>>p;
		prime(p);
	}
	else if(no==3)
	{
		int a, b;
		cout<<"enter two numbers to find sum\n";
		cin>>a>>b;
		sum(a,b);
	}
	else if(no==4)
	{
		int c, d;
		cout<<"enter two numbers to find greatest no\n";
		cin>>c>>d;
		greater_no(c,d);
	}
	else if(no==5)
	{
		int c, d, e;
		cout<<"enter three numbers to find greatest no\t";
		cin>>c>>d>>e;
		greater_no(c,d,e);
	}
	else
	{
		int gcd1, gcd2;
		cout<<"Enter the two values to find GCD\n";
		cin>>gcd1>>gcd2;
		gcd(gcd1, gcd2);
	}
}
void factorial(int n)
{	
	double fact=1;
	for(int i=1; i<=n; i++)
	{
		fact=fact*i;
	}
	cout<<n<<"! = "<<fact<<endl;
}
void prime(int n)
{
	int prime=1;
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
	if(prime==1)
	{
		cout<<n<<" is prime";
	}
	else
	{
		cout<<n<<" is not prime";
	}
}
void sum(int x, int y)
{
	cout<<"sum is\t"<<x+y;
}
void greater_no(int x, int y)
{
	
	if(x>y)
	{
		cout<<x<<" is graeter than "<<y;
	}
	else
	{
		cout<<y<<" is graeter than "<<x;
	}
}
void greater_no(int x, int y, int z)
{
	
	if(x>y && x>z)
	{
		cout<<x<<" is graeter than "<<y<<" and "<<z;
	}
	else if(y>x && y>z)
	{
		cout<<y<<" is graeter than "<<x<<" and "<<z;
	}
	else
	{
		cout<<z<<" is graeter than "<<x<<" and "<<y;
	}
}
void gcd(int x, int y)
{
	int small_no,GCD;
	if(x>y)
	{
		 small_no=y;
	}
	else
	{
		small_no=x;
	}
	for(int i=1; i<=small_no; i++)
	{
		if(x%i==0 && y%i==0)
		{
			GCD=i;
		}
	}
	cout<<"GCD of "<<x<<" and "<<y<<" is "<<GCD;
}
