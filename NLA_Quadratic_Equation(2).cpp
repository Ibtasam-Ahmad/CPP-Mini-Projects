#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<math.h>
using namespace std;
main()
{
	
	float a, b, c, d, n, x, y, z;
	float X1R,X2R,X1I,X2I;
	cout<<"How many number of equation you got\t";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cout<<"\nenter a\t";
		cin>>a;
		cout<<"enter b\t";
		cin>>b;
		cout<<"enter c\t";
		cin>>c;
		d=(b*b)-(4*a*c);
		if(d>0)
		{
			X1I=0;
			cout<<"Imaginary part 1 is "<<X1I<<"\t";
			X2I=0;
			cout<<"Imaginary part 2 is "<<X1I<<"\t";
			x=-b+sqrt(d);
			y=x/(2*a);
			X1R=y;
			cout<<"Real part 1 is "<<X1R<<"\t";
			x=-b-sqrt(d);
			y=x/(2*a);
			X2R=y;
			cout<<"Real part 2 is"<<X2R<<"\t";
			
		}
		else if(d=0)
		{
			X1R=-b/(2*a);
			X2R=-b/(2*a);
			cout<<"Imaginary part 1 is "<<0<<"\t";
			cout<<"Imaginary part 2 is "<<0<<"\t";
			cout<<"Real part 1 is"<<X1R<<"\t";
			cout<<"Real part 2 is"<<X2R<<"\t";
		}
		else
		{
			X1R=-b/(2*a);
			X2R=-b/(2*a);
			cout<<"Real part 1 is"<<X1R<<"\t";
			cout<<"Real part 2 is"<<X2R<<"\t";
			x=sqrt(-d);
			X1R=x/(2*a);
			cout<<"Imaginary part 2 is "<<X1I<<"\t";
			x=sqrt(-d);
			X2R=-x/(2*a);
			cout<<"Imaginary part 2 is "<<X2I<<"\t";
		}
		cout<<"\n\t"<<i<<" number of time the equation is executed\n\n";
	}
}
