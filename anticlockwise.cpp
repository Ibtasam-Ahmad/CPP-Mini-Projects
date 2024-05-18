//anticlockwise
#include<iostream>
using namespace std;
main()
{ 
int row=2,col=3;
	int a[2][3]={{1,2,3},{4,5,6}};
for(int i=2;i>=0;i--)
{
	for(int j=0;j<2;j++)
	{
		cout<<a[j][i]<<"\t";
	}
	cout<<endl;
}
}
