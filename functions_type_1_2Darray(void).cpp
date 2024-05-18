#include<iostream>
using namespace std;
void disp(int x[][3], int row, int col);
void transpose(int x[][3], int row, int col);
void rotation90acw(int x[][3], int row, int col);
void rotation90cw(int x[][3], int row, int col);
void rotation270cw(int x[][3], int row, int col);
void rotation180(int x[][3], int row, int col);
void trace(int x[][3], int row, int col);
void multi_mat(int x[2][3], int y[3][4], int row, int col1, int col2);
main()
{
	int x[2][3]={{1,2,3},{4,5,6}};
	int y[3][4]={{1,2,3,4},{5,6,7,8},{1,2,3,4}};
	disp(x,2,3);
	transpose(x,2,3);
	rotation90cw(x,2,3);
	rotation90acw(x,2,3);
	rotation270cw(x,2,3);
	rotation180(x,2,3);
	trace(x,2,3);
	multi_mat(x,y,2,3,4);
}
void disp(int x[][3], int row, int col)
{
	cout<<"The matrix is\n";
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout<<x[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}
void transpose(int x[][3], int row, int col)
{
	cout<<"The transpose of matrix is\n";
	for(int j=0; j<col; j++)
	{
		for(int i=0; i<row; i++)
		{
			cout<<x[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}
void rotation90cw(int x[][3], int row, int col)
{
	cout<<"The 90 degree clockwise of matrix is\n";
	for(int j=0; j<col; j++)
	{
		for(int i=row-1; i>=0; i--)
		{
			cout<<x[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}
void rotation270cw(int x[][3], int row, int col)
{
	cout<<"The 270 degree rotation of matrix is\n";
	for(int j=col-1; j>=0; j--)
	{
		for(int i=row-1; i>=0; i--)
		{
			cout<<x[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}
void rotation90acw(int x[][3], int row, int col)
{
	cout<<"The 90 degree anticlock wise of matrix is\n";
	for(int j=col-1; j>=0; j--)
	{
		for(int i=0; i<row; i++)
		{
			cout<<x[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}
void rotation180(int x[][3], int row, int col)
{
	cout<<"The 90 degree clockwise of matrix is\n";
	for(int i=row-1; i>=0; i--)
	{
		for(int j=col-1; j>=0; j--)
		{
			cout<<x[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}
void trace(int x[][3], int row, int col)
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
	cout<<"The trace of matrix is\t"<<sum<<endl;
}
void multi_mat(int x[2][3], int y[3][4], int row, int col1, int col2)
{
	int sum=0;
	cout<<"\nThe multiplication of matrix is\n";
	for(int i=0; i<row; i++)
	{
		for(int j=0;  j<col2; j++)
		{
			for(int k=0; k<col1; k++)
			{
				sum=sum+x[i][k]*y[k][j];	
			}
			cout<<sum<<"\t";
			sum=0;
		}
		cout<<endl;
	}
}
