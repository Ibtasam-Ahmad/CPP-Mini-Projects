#include<iostream>
using namespace std;
int trace(int x[][3], int row, int col);
main()
{
	int x[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	cout<<"The trace of matrix is "<<trace(x,3,3);
}
int trace(int x[][3], int row, int col)
{
	int sum=0;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			if(i==j)
			{
				sum+=x[i][j];
			}
		}
	}
	return sum;
}
