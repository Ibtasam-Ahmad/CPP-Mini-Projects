#include <iostream>
#include <stdlib.h>
main()
{
      char grade;
      cout<<"enter Grade=";
      cin>>grade;
      switch(grade)
      {
	case 'A':
            cout<<"Grade is Excellent";
            break;
	case 'B':
           cout<<"Grade is good";
	case 'C':
           cout<<"Grade is fare";
      }
      system("PAUSE");
}

