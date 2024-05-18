/*Write program using class in which you can enter two numbers and display the sum of two numbers.*/
#include<iostream>
using namespace std;
class sum
{
	float num1, num2;
	public:
	sum (float x, float y)
		{
			num1=x;
			num2=y;
		}
		void display()
		{
			cout<<"The sum is = " <<num1+num2;
		}
};
main()
{
	int a, b;
	cin>>a>>b;
	sum obj (a, b);
	obj.display();
}
