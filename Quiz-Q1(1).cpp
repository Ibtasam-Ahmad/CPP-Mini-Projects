#include<iostream>
using namespace std;
int main()
{
	cout<<"Welcome to the food corner\n";
	int num, Eatables=1, Drinkables=2, none=3;
	cout<<"what do you want\n";
	cout<<"1: Eatables\n2: Drinkables\n3: none\n";
	cout<<"What do you like to have\n";
A:	cin>>num;
	if(num>0 && num<4)
	{
		if(num==Eatables)
		{
			
			int Burger=1, Fries=2, Pizza=3, none=4, eatables_menu;
			cout<<"Here's the menu of the day\n";
B:			cout<<"1: Burger\n2: Fries\n3: Pizza\n4: none\n";
			cin>>eatables_menu;
			if(eatables_menu>0 && eatables_menu<5)
			{
				if(eatables_menu==Burger)
				{
					cout<<"The burger price is 100$\n";
				}
				if(eatables_menu==Fries)
				{
				cout<<"The Fries price is 100$\n";
				}
				if(eatables_menu==Pizza)
				{
					cout<<"The Pizza price is 100$\n";
				}
				if(eatables_menu==none)
				{
					goto E;
				}
			}
			else
			{
				cout<<"enter a valid number\n";
				goto B;
			}
		}
	
		if(num==Drinkables)
		{
			
			int cold_drinks=1, soft_drinks=2, minirel_water=3, none=4, drinkables_menu;
			cout<<"Here's the menu of the day\n";
C:			cout<<"1: Cold Drink\n2: Soft Drink\n3: Mineral\n4: none\n";
			cin>>drinkables_menu;
			if(drinkables_menu>0 &&drinkables_menu<5)
			{
				if(drinkables_menu==cold_drinks)
				{
					cout<<"The Cold Drink price is 100$\n";
				}
				if(drinkables_menu==soft_drinks)
				{
				cout<<"The Soft Drink price is 100$\n";
				}
				if(drinkables_menu==minirel_water)
				{
					cout<<"The Mineral water price is 100$\n";
				}
				if(drinkables_menu==none)
				{
					goto E;
				}
			}
			else{
				cout<<"enetr a valid number\n";
				goto C;
			}
		}
		else
		{
			goto E;
		}
	} 
	else
	{
		cout<<"Enter the valid number\n";
		goto A;
	}
E: cout<<"\nThank you for comming\n";
return 0;
}
