#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int prime(int n);
int fact(int n);
int gcd(int n, int m);
int main()
{
    int a;
    cout<<"enter the number\t";
    cin>>a;
    if(prime(a))
    {
        cout<<a<<" is prime no\n";
        cout<<"factorial of prime no it's\t"<<fact(a)<<endl;
        cout<<"the gcd of "<<a<<" and "<<fact(a)<<" is\t"<<gcd(a,fact(a));
    }
    else
    {
        cout<<a<<" is not a prime no\n";
        cout<<"factorial of not a prime no it's\t"<<fact(a);
    }
}
int prime(int n)
{
    int p=0;
    if(n==1 || n==0)
    {
        p=0;
    }
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            p=0;
            break;
        }
        else
        {
            p=1;
        }
    }
    return p;
}
int fact(int n)
{
    int f=1;
    for(int i=1; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}
int gcd(int n, int m)
{
    int g,x;
    if(n>m)
    {
        x= m;
    }
    else
    {
        x=n;
    }
    for(int i=2; i<=x; i++)
    {
        if(n%i==0 && m%i==0)
        {
            g=i;
        }
    }
    return g;
}