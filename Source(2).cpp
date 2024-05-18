#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	float x[101],f[101],s=0,p=1,xx;
	for(int i=0;i<=10;i++)
	{
		x[i]=i*0.1;
		f[i]=sin(x[i]);
	}
	cout<<"data "<<endl;
	for(int i=0;i<=10;i++)
	{
		cout<<x[i]<<"\t"<<f[i]<<endl;
	}
	cout<<"enter the point for interpolationb"<<endl;
	cin>>xx;
	s=0;
	for(int i=0;i<=10;i++)
	{
		p=1;
		for(int j=0;j<=10;j++)
		{
			if(j!=i)
				p=p*(xx-x[j])/(x[i]-x[j]);
		}
		s=s+p*f[i];
	}
	cout<<"The interpolated output ="<<s<<endl;
	cout<<"The exact output ="<<sin(xx)<<endl;
	getch();
}