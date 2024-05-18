/*Write program using class and functions that can get and display name and roll no of a student. 
Extend this program to enter and display 5 students data.*/
#include<iostream>
using namespace std;
class student
{
	string a,b;
	public:	
		student(string x, string y)
		{
			a=x; b=y;
		}
		void display()
		{
			cout<<"Name is\t"<<x<<"\tRoll no is\t"<<y<<endl;
		}
};
main()
{
	string name, roll_no;
		cin>>name>>roll_no;
		student obj (name , roll_no);
		obj.display();
}
