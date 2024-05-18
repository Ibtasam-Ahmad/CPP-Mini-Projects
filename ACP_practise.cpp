#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
/*"Enter 1 to find prime \nEnter 2 to find permutation\
nEnter 3 to find factorial\nEnter 4 to find gcd\nEnter 5 for combination\n"*/

/*Write a program using class that can store 1000 random numbers and display
greatest random number.*/

//class random
//{
//	public:
//	int a[10];
//		random()
//		{
//			srand(time(NULL));
//			
//			for(int i=0; i<10; i++)
//			{
//				a[i] = 1 + rand()%(11-1+1);
//				cout<<a[i]<<"\t";
//			}
//		}
//		void disp()
//		{
//			int temp = a[0];
//			for(int i=0; i<10; i++)
//			{
//				if(temp<a[i])
//				{
//					temp=a[i];
//				}
//			}
//			cout<<endl<<temp;
//		}
//};
//main()
//{
//	random obj;
//	obj.disp();
//}

//class student
//{
//	public:
//			float marks, sub1, sub2, sub3;
//			string name, roll;
//		void input()
//		{
//			cout<<"Enter name\t";
//			cin>>name;
//			cout<<"Emter roll number\t";
//			cin>>roll;
//			cout<<"Enter marks\t";
//			cin>>sub1;
//			cout<<"Enter marks\t";
//			cin>>sub2;
//			cout<<"Enter marks\t";
//			cin>>sub3;		}
//		void disp()
//		{
//			cout<<"name is \t"<<name;
//			cout<<" roll no is \t"<<roll;
//			cout<<"sub 1 marks\t"<<sub1;
//			cout<<"sub 2 marks\t"<<sub2;
//			cout<<"sub 3 marks\t"<<sub3;
//		}
//};
//main()
//{
//	student obj;
//	
//	obj.input();obj.disp();
//}


//class sum
//{
//	int num1 , num2;
//	public:
//		sum(int x, int y)
//		{
//			num1=x;
//			num2=y;
//		}
//		void disp()
//		{
//			int sum;
//			sum = num1 + num2;
//			cout<<sum;
//		}
//};
//main()
//{
//	int a, b;
//	cin>>a>>b;
//	sum obj(a,b);
//	obj.disp();
//}

//class circle
//{
//	int radius;
//	public:
//		void set(int r)
//		{
//			radius = r;
//		}
//		void area()
//		{
//			int area;
//			area = 3.14 * radius * radius;
//			cout<<area<<endl;
//		}
//		void para()
//		{
//			int para;
//			para = 2 * 3.14 * radius;
//			cout<<para<<endl;
//		}
//};
//main()
//{
//	int x;
//	cout<<"Enter the value of radius\n";
//	cin>>x;
//	circle obj;
//	obj.set(x);
//	obj.area();
//	obj.para();
//}

//class rectangle
//{
//	int length, width;
//		public:
//			void rec()
//			{
//				cout<<"the function tells the area of rectanle\t";
//			}
//			void rec(int l, int w)
//			{
//				length = l ;
//				width = w ;
//				int area;
//				area = length * width ;
//				cout<<area<<endl;
//			}
//};
//main()
//{
//	rectangle obj;
//	obj.rec();
//	obj.rec(2,3);
//}

//class random
//{
//	int number[10];
//	public:		
//		void disp()
//		{
//			srand(time(NULL));
//			for(int i=0; i<10; i++)
//			{
//				number[i] = rand()%(10-1+1);
//				cout<<number[i];
//			}
//			cout<<endl;
//			int temp = number[0];
//			for(int i=1; i<=10; i++)
//			{
//				if(temp<number[i])
//				{
//					temp = number[i];
//				}
//			}
//			cout<<temp;
//		}
//};
//main()
//{
//	random obj;
//	obj.disp();
//}

//class random
//{
//	int number[10];
//	public:
//		random()
//		{
//			for(int i=0; i<10; i++)
//			{
//				number[i] = rand()%(10-1+1);
//				cout<<number[i];
//			}
//			cout<<endl;
//			int temp = number[0];
//			for(int i=1; i<=10; i++)
//			{
//				if(temp<number[i])
//				{
//					temp = number[i];
//				}
//			}
//			cout<<temp;
//		}
//};
//main()
//{
//	random obj;
//}


//class rectangle
//{
//	int height, width;
//		public:
//			rectangle(int h, int w)
//			{
//				height = h;
//				width = w;
//			}
//			void area()
//			{
//				int area;
//				area = height * width;
//				cout<<area;
//			}
//};
//main()
//{
//	rectangle obj(2,3);
//	obj.area();
//}

//class rectangle
//{
//	int height,width;
//	public:
//		void set(int h, int w)
//		{
//			height = h;
//			width = w;
//		}
//		void area()
//		{
//			int area;
//			area = width*height;
//			cout<<area;
//		}
//};
//main()
//{
//	rectangle obj;
//	obj.set(2,3);
//	obj.area();
//}

//int max(int a[], int size);
//main()
//{
//	srand(time(NULL));
//	int x[10];
//	for(int i=0; i<10; i++)
//	{
//		x[i]= rand()%(10-1+1);
//		cout<<x[i]<<"\t";
//	}
//	cout<<endl;
//	cout<<max(x,10);
//}
//int max(int a[], int size)
//{
//	int temp=a[0];
//	for(int i=0; i<size; i++)
//	{
//		if(temp<a[i+1])
//		{
//			temp=a[i+1];
//		}
//	}
//	return temp;
//}
