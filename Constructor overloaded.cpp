#include<iostream>
using namespace std;
class rectangle
{
	float height, width;
	public:
		rectangle()
		{
			cout<<"Constructor of class rectangle overloaded\n";
		}
		rectangle(float h, float w)
		{
			height = h;
			width = w;
		}
		void area()
		{
			cout<<height*width;
		}
};
class A
{
	public:
	A()
	{
		cout<<"This is A\t constructor called\n";
	}
};
main()
{
	A obj;	
	rectangle obj1, obj2,obj3 (2,5);
	obj2.area();
}
