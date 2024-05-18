#include<iostream>
using namespace std;

void entry();
void display();

struct record
{
	private:
	char name[100];
	string rollno;
	float phy,maths,comp;
	public:	
		void entry()
		{
		   	cout<<"enter roll no\t";
			cin>>rollno;
			cout<<"enter name\t";
			cin>>name;
			cout<<"enter physics\t";
			cin>>phy;
			cout<<"enter maths\t";
			cin>>maths;
			cout<<"enter computer\t";
			cin>>comp;
	    }
		void display()
		{
			cout<<"Roll no is : "<<rollno<<endl;
			cout<<"Name is : "<<name<<endl;
			cout<<"Phy marks : "<<phy<<endl;
			cout<<"Math marks : "<<maths<<endl;
			cout<<"Comp mark : "<<comp<<endl;
		}
};

main()
{
	record student[1];
	for(int i=1; i<=5; i++)
	{
		student[i].entry();
	}
	for(int i=1; i<=5; i++)
	{
		student[i].display();
	}
}
