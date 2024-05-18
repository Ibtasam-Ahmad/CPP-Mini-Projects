#include<iostream>
using namespace std;
main()
{
	int x[100] ,i,j=1;
	for(int i=0;i<100;i++)
	{
		x[i]=j++;
cout<<x[i]<<endl<<"\n";
	}
	for(i=0; i<100; i++){
	
	if (x[i]%2==0)
		{
			cout<<x[i]<<endl<<"\n";
		}
}
for(i=0;i<100;i++)
{
	if (x[i]%2==1)
		{
			cout<<x[i]<<endl<<"\n";
		}
}
}

