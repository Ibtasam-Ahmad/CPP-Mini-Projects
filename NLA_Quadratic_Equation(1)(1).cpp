#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<math.h>
using namespace std;
main()
{
	
	float a[10], b[10], c[10], d[10], n, x[10], y[10], z[10];
	float X1R[10],X2R[10],X1I[10],X2I[10];
	cout<<"How many number of equation you got\t";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cout<<"\nenter a\t";
		cin>>a[i];
		cout<<"enter b\t";
		cin>>b[i];
		cout<<"enter c\t";
		cin>>c[i];
		d[i]=(b[i]*b[i])-(4*a[i]*c[i]);
		if(d[i]>0)
		{
			X1I[i]=0;
			cout<<"Imaginary part 1 is "<<X1I[i]<<"\t";
			X2I[i]=0;
			cout<<"Imaginary part 2 is "<<X1I[i]<<"\t";
			x[i]=-b[i]+sqrt(d[i]);
			y[i]=x[i]/(2*a[i]);
			X1R[i]=y[i];
			cout<<"Real part 1 is "<<X1R[i]<<"\t";
			x[i]=-b[i]-sqrt(d[i]);
			y[i]=x[i]/(2*a[i]);
			X2R[i]=y[i];
			cout<<"Real part 2 is "<<X2R[i]<<"\n";
			cout<<"roots are real distict and rational\n";
		}
		else if(d[i]=0)
		{
			X1R[i]=-b[i]/(2*a[i]);
			X2R[i]=-b[i]/(2*a[i]);
			cout<<"Imaginary part 1 is "<<0<<"\t";
			cout<<"Imaginary part 2 is "<<0<<"\t";
			cout<<"Real part 1 is"<<X1R[i]<<"\t";
			cout<<"Real part 2 is"<<X2R[i]<<"\n";
			cout<<"roots are real, equal and rational\n";
		}
		else
		{
			X1R[i]=-b[i]/(2*a[i]);
			X2R[i]=-b[i]/(2*a[i]);
			cout<<"Real part 1 is"<<X1R[i]<<"\t";
			cout<<"Real part 2 is"<<X2R[i]<<"\t";
			x[i]=sqrt(-d[i]);
			X1R[i]=x[i]/(2*a[i]);
			cout<<"Imaginary part 2 is "<<X1I[i]<<"\t";
			x[i]=sqrt(-d[i]);
			X2R[i]=-x[i]/(2*a[i]);
			cout<<"Imaginary part 2 is "<<X2I[i]<<"\n";
			cout<<"roots are imaginary\n";
		}
		cout<<"\n\t"<<i<<" number of time the equation is executed\n\n";
	}
}
