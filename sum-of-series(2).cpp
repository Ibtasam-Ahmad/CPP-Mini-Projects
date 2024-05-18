//sum the series b=1+1/2+1/4+1/8
#include<iostream>
using namespace std;
main()
{
	 float a,b,c,d,e,f,x,y,z;
	 cout<<" enter the first term ";
	 cin>>a;
	 cout<<" enter the second term ";
	 cin>>c;
	 cout<<" enter the number of terms ";
	 cin>>b;
	 y=a+c;
	 for(x=0;x<=b;x=x+1)
	 {
	 	c=c*0.5;
	 	z=y+c;
	 	cout<<z;
	 }
}
