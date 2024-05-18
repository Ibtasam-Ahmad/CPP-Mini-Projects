//Define a base clas with following member data and member function:
//int i, j accessible in base class.
//void set(int a, int b) to initialize i .j.
//void show() to display the valuses of i, j.
#include<iostream>
using namespace std;
class A
{
	int i,j;
	public:
	void set(int a,int b)
	{
	i=a;
	j=b;
	}
	void show()
	{
		cout<<i<<"\n"<<j;
	}
			
};
main()
{
	A obj;
	obj.set(2,4);
	obj.show();
}
