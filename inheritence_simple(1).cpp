#include<iostream>
using namespace std;
class A
{
	private :
		int a;
		protected:
			int b;
			public:
				int c;
			};
			class B:public A
{
	public:
		int d;
		void init()
		{
			//b=6;
			c=9;
			d=98;
		}
}	;	
main()
{
	B obj ;
	obj.init();
	//cout<<obj.b;
	cout<<obj.c<<endl;
	cout<<obj.d;
}
