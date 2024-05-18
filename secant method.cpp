#include <iostream>
#include <iomanip>
#include <math.h>
double f(double a)
{
	return(3*a+sin(a)-exp(a));
}
using namespace std;

main()
{
	double x0,x1,x2,s;
	x0=0;x1=1;
	if(fabs(f(x0))<fabs(f(x1)))
	{
		s=x0; x0=x1; x1=s;
	}	
	//cout<<x0<<endl<<x1;
		cout<<"itr# \t\t x0 \t\t x1 \t\t x2 \t\t Error=|f(x2)|\n";
	for(int k=1;k<=6;k++)
	{
		x2=x1-f(x1)*(x0-x1)/(f(x0)-f(x1));
		cout<<k<<"\t"<<left<<setw(12)<<x0<<setw(12)<<"\t"<<setw(12)<<x1<<"\t"<<setw(12)<<x2<<"\t"<<setw(12)<<fabsf(x2)<<endl;
		x0=x1;
		x1=x2;
	}
}
