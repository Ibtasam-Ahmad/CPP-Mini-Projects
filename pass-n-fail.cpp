//printing of marks
#include<iostream>
using namespace std;
main()
{
	float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
	cout<<" enter the marks of assigment obtained ";
	cin>>a;
	cout<<" enter the total marks of assigment ";
	cin>>d;
	cout<<" enter the marks of mids obtained ";
	cin>>b;
	cout<<" enter the total maks of mid ";
	cin>>e;
	cout<<" enter the marks of final obtained ";
	cin>>c;
	cout<<" enter total marks of final ";
	cin>>f;
	g=a+b;  //obtained assigment + mids marks
	h=d+e;  //total of assigment + mids marks
	i=g/h;
	j=i*100;
	k=c/f;
	l=k*100;
	if(j<50)
	{
		cout<<" the student is fail ";
	}
	else if(l<50)
	{
		cout<<" the student is fail ";
	}
	else
	{
		cout<<" student is pass ";
	}
	
}
