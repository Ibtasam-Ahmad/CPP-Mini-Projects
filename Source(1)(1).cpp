#include <iostream>
using namespace std;
void main()
{
	float a[100][100];
	int n;
	float ratio;
	cout<<"Enter the order of the system \n";
	cin>>n;
	cout<<"Enter the augmented matrix A/B \n";
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n+1;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
		//GE Method
		for(int j=1;j<=n-1;j++)
		{
			for(int i=1;i<=n;i++)
			{
				if(i>j)
				{
				ratio=a[i][j]/a[j][j];
				for(int k=1;k<=n+1;k++)
					a[i][k]=a[i][k]-ratio*a[j][k];
				}
			}
		}

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n+1;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	system("pause");
}