#include<iostream>
#include<math.h>
using namespace std;
float function(float a)
{
	return((3*a)+sin(a)-exp(a));
}
float function_derivative(float a)
{
	return(3+cos(a)-exp(a));
}
int main()
{
A:	float x0=0,x1;
	int n=1;
	if(function(x0)!=0 && function_derivative(x0)!=0)
	{
		do
		{
			x1=x0-(function(x0)/function_derivative(x0));
			x0=x1;
			cout<<n<<"\t"<<x1<<"\t";
			cout<<fabs(function(x0))<<endl;
			n++;
		}while(n<=5);
	}
	else
	{
		cout<<"Revise iniitial guess \t";
		goto A;
	}
	return 0;
}
