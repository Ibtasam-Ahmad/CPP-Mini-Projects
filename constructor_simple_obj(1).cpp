#include<iostream>
using namespace std;
class rectangle 
{
	float height,width;
	public:
		rectangle(float h,float w)
		{
			height=h;width=w;
		}
		void area()
		{
			cout<<height*width;
		}
		
};
main()
{
	rectangle obj(2,5);
	obj.area();
}
