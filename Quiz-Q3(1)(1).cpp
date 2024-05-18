#include<iostream>
using namespace std;
int main()
{
	char name1[50], name2[50], name3[50];
	float time1, time2, time3, vel1, vel2, vel3;
	float dis1, dis2, dis3;
	cout<<"Enter the name of runner 1\t";
	cin.getline(name1, 50);
	cout<<"Enter the name of runner 2\t";
	cin.getline(name2, 50);
	cout<<"Enter the name of runner 3\t";
	cin.getline(name3, 50);
A:	cout<<"Enter time taken by runner 1\t";
	cin>>time1;
	cout<<"Enter time taken by runner 2\t";
	cin>>time2;
	cout<<"Enter time taken by runner 3\t";
	cin>>time3;
	cout<<"Enter the distance of runner 1\t";
	cin>>dis1;
	cout<<"Enter the distance of runner 2\t";
	cin>>dis2;
	cout<<"Enter the distance of runner 3\t";
	cin>>dis3;
	vel1=dis1/time1;
	vel2=dis2/time2;
	vel3=dis3/time3;
	if(vel1<0 || vel1<0 || vel1<0)
	{
		cout<<"Time can not be negative\nEnter all runner time again\n";
		goto A;
	}
	if(vel1>vel2 && vel1>vel3)
	{
		cout<<"\nThe Runner 1 "<<name1<<" is first with time "<<time1<<" and distance "<<dis1;
		if(vel2>vel3)
		{
			cout<<"\nThe runner 2 "<<name2<<" is second with time "<<time2<<" and distance "<<dis2;
			cout<<"\nThe runner 3 "<<name3<<" is third with time "<<time3<<" and distance "<<dis3;
		}
		else
		{
			cout<<"\nThe runner 3 "<<name3<<" is second with time "<<time3<<" and distance "<<dis3;
			cout<<"\nThe runner 2 "<<name2<<" is third with time "<<time2<<" and distance "<<dis2;
		}
	}
	if(vel2>vel1 && vel2>vel3)
	{
		cout<<"\nThe Runner 2 "<<name2<<" is first with time "<<time2<<" and distance "<<dis2;
		if(vel1>vel3)
		{
			cout<<"\nThe runner 1 "<<name1<<" is second with time "<<time1<<" and distance "<<dis1;
			cout<<"\nThe runner 3 "<<name3<<" is third with time "<<time3<<" and distance "<<dis3;
		}
		else
		{
			cout<<"\nThe runner 3 "<<name3<<" is second with time "<<time3<<" and distance "<<dis3;
			cout<<"\nThe runner 1 "<<name1<<" is third with time "<<time1<<" and distance "<<dis1;
		}
	}
	if(vel3>vel1 && vel3>vel2)
	{
		cout<<"\nThe Runner 3 "<<name3<<" is first with time "<<time3<<" and distance "<<dis3;
		if(vel1>vel2)
		{
			cout<<"\nThe runner 1 "<<name1<<" is second with time "<<time1<<" and distance "<<dis1;
			cout<<"\nThe runner 2 "<<name2<<" is third with time "<<time2<<" and distance "<<dis2;
		}
		else
		{
			cout<<"\nThe runner 2 "<<name2<<" is second with time "<<time2<<" and distance "<<dis2;
			cout<<"\nThe runner 1 "<<name1<<" is third with time "<<time1<<" and distance "<<dis1;
		}
	}
}
