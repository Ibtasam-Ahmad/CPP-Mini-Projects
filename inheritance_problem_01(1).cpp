//Define a base clas with following member data and member function:
//int i, j accessible in base class.
//void set(int a, int b) to initialize i .j.
//Void show() to display the valuses of i, j.
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
};
	class B: public A
{
	public:
			void show(int a,int b)
			{
				
				cout<<"value of i :"<<a<<endl;
				cout<<"value of j: "<<b<<endl;
			}
};
main()
{
	B obj;
	obj.show(2,4);
}
