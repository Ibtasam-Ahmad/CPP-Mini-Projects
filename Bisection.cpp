#include<iostream>
#include<math.h>
float f(float x)
{
	return(3*x+sin(x)-exp(x));
}
using namespace std;
main()
{
	float x1, x2, x3;
	x1=0;
	x2=1;
	if(f(x1)*f(x2)<0)
	{
		cout<<"okay\n";
	}
	else
	{
		cout<<"revice initial guesses\n";
	}
	for(int k=1; k<=10; k++)
	{
		x3=(x1+x2)/2;
		if(f(x1)*f(x2)<0)
		{
			x2=x3;
		}
		else
		{
			x1=x3;
		}
		cout<<x1<<"\t"<<x2<<"\t"<<f(x1)<<"\t"<<f(x2)<<"\t"<<x3<<"\t"<<fabsf(x3)<<endl;
	}
}
