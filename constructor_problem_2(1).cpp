//Write program using class in which you can enter two numbers and display the sum of two numbers.
#include<iostream>
using namespace std;
class data
{
int num1,num2 ;
public:
	data()
	{
		int x,y;
		cout<<"enter two numbers"<<endl;
		cin>>x>>y;
		num1=x;num2=y;
	}
	void SUM()
	{
		int sum;
		sum=num1+num2;
		cout<<"sum is "<<sum;
	}
	};
main()
{
data obj1(),obj2;
obj2.SUM();
}
