#include<iostream>
using namespace std;

int sum(int a, int b)
{
	int z= a + b;
	return(z);
}
int main()
{
	int x, y;
	cin>>x>>y;
	cout<<sum(x,y);
	return 0;
}
