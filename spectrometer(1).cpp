

#include<iostream>

#include<math.h>

using namespace std;

int main()

{ double i,d,k,e,x,j;

 float MC,VC;

cout<<"Enter the readings of main scale and vernier scale "<<endl;

cin>>MC>>VC;

k=VC/60;

 e=MC+k;

 x=e*(3.1456/180);

 d=0.001389;

 j=1000000;

  i=d*j*(sin(x));

  cout<<i<<"nm"<<endl;

	

return 0;

}


    