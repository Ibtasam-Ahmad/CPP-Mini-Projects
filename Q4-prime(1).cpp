//Write a program to generate 100 prime numbers and store these no in an array.
#include<iostream>
using namespace std;
int main()
{
	int k[100];
	cout<<"LIMIT:- Only 100 consective prime be generated\n";
    int a, i, y=0, p = 1, x, count=0;
    cout<<" how many prime numbers you want ";
    cin>>i;
    for (x = 2; count < i; x++)
    {
        for (a = 2; a < x; a++)
        {
            if (x % a == 0)
            {
                p = 0;
                break;
            }
            else
            {
                p = 1;
                continue;
            }
        }
        if (p == 1)
        {
            k[y]=x;
            cout<<" "<<k[y];
            count++;
            y++;
        }
/*        else
        {
            cout << x << " not prime";
        }
        cout << endl;  */  // to check k kitna numbers hain darmain main
    }
}
