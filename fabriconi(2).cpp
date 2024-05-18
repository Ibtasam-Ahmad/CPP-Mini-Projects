//fabriconi series
#include<iostream>
using namespace std;
main()
{
	int n1=0,n2=1,n3,x=0,n;
	cout<<"enter the term : ";
	cin>>n;
	cout<<n1<<"  "<<n2<<"  ";
	do
	{
		n3=n1+n2;
		cout<<n3<<"  ";
		n1=n2;
		n2=n3;
		x=x+1;
	}
	while(x<=n);
}
