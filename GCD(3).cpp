//GCD of a number
#include<iostream>
using namespace std;
main()
{
	int num1,num2,gcd;
	cout<<" enter first number :  ";
	cin>>num1;
	cout<<" enter second number :  ";
	cin>>num2;
	for(int i=1; i<=num1 && i<=num2; i=i+1)
	{
		if(num1%i==0 && num2%i==0)
		{
			gcd=i;
		}
	}
	cout<<" GCD is "<<gcd;
}
//4=1,2,4
//8=1,2,4,8
