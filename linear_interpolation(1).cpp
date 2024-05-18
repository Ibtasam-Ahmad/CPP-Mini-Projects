#include <iostream>
#include <math.h>
float func(float z)
{
	return(3*z+sin(z)-exp(z));
}
using namespace std;
main()
{
	float x0,x2,x1;
	x0=0;x1=1;
	if(func(x0)*func(x1)<0)
	{
		for(int w=1;w<=5;w++)
		{
			x2=x1-func(x1)*(x0-x1)/(func(x0)-func(x1));
			cout<<x0<<"\t"<<x1<<"\t"<<x2<<"\t"<<func(x2)<<endl;
			if(func(x0)*func(x2)<0)
			{
				x1=x2;
			}
			else
			{
				x0=x2;
			}
		}
	}
	else
	{
		cout<<"revise I.Gs"<<endl;
	}
}
