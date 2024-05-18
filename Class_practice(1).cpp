#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
#include<math.h>
#include<cstring>
using namespace std;

main()
{
	char teacher[50];
	string name;
	char grade[10];
	char grade_individual;
	int test[3];
	float marks[3];
	float total_marks;
	float average;
	float percentage;
	int subject_marks;
	cout<<"\n\nenter the teacher name\t ";
	cin.getline(teacher,50);
	cout<<"the name of teacher is\t "<<teacher;
	cout<<endl<<"Press enter to continue\n";
	for(int i=0; i<4; i++)
	{	
		cin.ignore();
D:		cout<<"Enter the name of the student\t";
		getline(cin,name);
		for(int a=0; a<name.size(); a++)
		{
			if((name.size()<='a' || name.size()>='z' )||( name.size()<='A' || name.size()>='Z'))
			{
				
			}
			else
			{
				cout<<"Enter only alphabets in name\n";
				goto D;
			}
		}
C:		cout<<"The student name is\t"<<name;
		cout<<endl;
		cout<<"enter the marks of test\n";
		total_marks=0;
		for(int b=0; b<3; b++)
		{
			cout<<"enter marks of "<<b+1<<" subjct from 100\t";goto B;
A:			cout<<"re-enter the marks of "<<b+1<<" subjct from 100\t";
B:			cin>>subject_marks;
			if(subject_marks>=0 && subject_marks<101)
			{
			cout<<"The marks of "<<b+1<<" subject is "<<subject_marks<<endl;
			marks[b]=subject_marks;
			total_marks=marks[b]+total_marks;
			}
			else
			{
				cout<<"Enter marks in-between 0 to 100\n";
				goto A;
			}
		}
		cout<<"total marks are \t"<<total_marks;
		average=total_marks/3;
		cout<<"\naverage marks are \t"<<average;
		percentage=(total_marks/300)*100;
		cout<<"\nthe percentage is \t"<<percentage<<"%\n";
		if(percentage<101 && percentage>90)
		{
			grade_individual='A';
			percentage=grade_individual;
		}
		else if(percentage<91 && percentage>80)
		{
			grade_individual='B';
			percentage=grade_individual;
		}
		else if(percentage<81 && percentage>70)
		{
			grade_individual='C';
			percentage=grade_individual;
			}
		else if(percentage<71 && percentage>60)
		{
			grade_individual='D';
			percentage=grade_individual;
		}
		else if(percentage<61 && percentage>50)
		{
			grade_individual='E';
			percentage=grade_individual;
		}
		else
		{
			grade_individual='F';
			percentage=grade_individual;
		}
		grade[i]=percentage;
		cout<<"the grade of subject is \t"<<grade[i]<<endl<<endl;
			
			
	}
	
}
