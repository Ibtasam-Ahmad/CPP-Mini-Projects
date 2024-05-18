#include<iostream>
using namespace std;
main()
{
	system("color F0");
	char name[15],CHE_GRAGE;
	string roll_no;
	int eng,math,urdu,percentage,islamiyat,pakstudy,chemistry,physics,biology,obtmarks,eng_percentage,urdu_percentage,chem_percentage,phy_percentage,pak_percentage,bio_percentage,islam_percentage,math_percentage;

	cout<<"Name of student : ";
	cin>>name;
                          cout<<"Roll no : ";
                          cin>>roll_no;
                          cout<<"================================================="<<"\n"<<endl;
	cout<<" ENGLISH     : ";
	cin>>eng;
	{
		if(eng>75)
		{
		
		cout<<"Sorry! you can't enter marks greater than total marks of this subject"<<endl;
		cout<<"Plz!RE-ENTER ENGLISH MARKS = ";
		cin>>eng;
	                          }
	}
	cout<<" MATHEMATICS : ";
	cin>>math;
	{
		if(math>75)
		{
		
		cout<<"Sorry! you can't enter marks greater than total marks of this subject"<<endl;
		cout<<"Plz!RE-ENTER MATHEMATICS MARKS = ";
		cin>>math;

	                          }
	}
	cout<<" BIOLOGY     : ";
	cin>>biology;
	{
		if(biology>60)
		{
		
		cout<<"Sorry! you can't enter marks greater than total marks of this subject"<<endl;
		cout<<"Plz!RE-ENTER BILOGY MARKS = ";
		cin>>biology;
		
	                          }
	}
	cout<<" URDU        : ";
	cin>>urdu;
	{
		if(urdu>75)
		{
		
		cout<<"Sorry! you can't enter marks greater than total marks of this subject"<<endl;
		cout<<"Plz!RE-ENTER URDU MARKS = ";
		cin>>urdu;
	
	                          }
	}
	cout<<" ISLAMIYAT   : ";
	cin>>islamiyat;{
		if(islamiyat>50)
		{
		
		cout<<"Sorry! you can't enter marks greater than total marks of this subject"<<endl;
		cout<<"Plz!RE-ENTER ISLAMIYAT MARKS = ";
		cin>>islamiyat;
	
	                          }
	}
	cout<<" PAK STUDY   : ";
	cin>>pakstudy;{
		if(pakstudy>50)
		{
		
		cout<<"Sorry! you can't enter marks greater than total marks of this subject"<<endl;
		cout<<"Plz!RE-ENTER PAK STUDY MARKS = ";
		cin>>pakstudy;
		
	                          }
	}
	cout<<" CHEMISTRY   : ";
	cin>>chemistry;{
		if(chemistry>60)
		{
		
		cout<<"Sorry! you can't enter marks greater than total marks of this subject"<<endl;
		cout<<"Plz!RE-ENTER CHEMISTRY MARKS = ";
		cin>>chemistry;
	
	                          }
	}
	cout<<" PHYSICS     : ";
	cin>>physics;{
		if(physics>60)
		{
		
		cout<<"Sorry! you can't enter marks greater than total marks of this subject"<<endl;
		cout<<"Plz!RE-ENTER PHYSICS MARKS = ";
		cin>>physics;
	                         
	                          }
	}
	
	obtmarks=eng+math+biology+urdu+islamiyat+chemistry+physics+pakstudy;
	percentage=(float (obtmarks)*100)/505;
	eng_percentage=(float (eng)*100)/75;  
	math_percentage=(float (math)*100)/75;      
	chem_percentage=(float (chemistry)*100)/60;    
	urdu_percentage=(float (urdu)*100)/75;         
	phy_percentage=(float (physics)*100)/60;       
                          pak_percentage=(float (pakstudy)*100)/50;   
                          bio_percentage=(float (biology)*100)/60;    
	islam_percentage=(float (islamiyat)*100)/50;
	
	
	

	cout<<"================================================================================================================="<<endl;	
	cout<<"                                                * RESULT CARD *                                             "<<endl;
	cout<<"================================================================================================================="<<endl;	
	cout<<" SUBJECT"<<"\t"<<"||"<<" TOTAL MARKS"<<"\t"<<"||"<<"OBTAINED MARKS"<<"||"<<"  PERCENTAGE"<<"\t""||"<<endl;
	cout<<"================================================================================================================="<<endl;
	
	cout<<" ENGLISH   "<<"\t"<<"||"<<"\t"<<"75"<<"\t"<<"||"<<"\t"<<eng<<"\t"<<"||"<<"\t"<<eng_percentage<<" %"<<"\t"<<"||"<<endl;
	cout<<" MATHEMATICS"<<"\t"<<"||"<<"\t"<<"75"<<"\t"<<"||"<<"\t"<<math<<"\t"<<"||"<<"\t"<<math_percentage<<" %"<<"\t"<<"||"<<"\t"<<endl;
	cout<<" PHYSICS "<<"\t"<<"||"<<"\t"<<"60"<<"\t"<<"||"<<"\t"<<physics<<"\t"<<"||"<<"\t"<<phy_percentage<<" %"<<"\t"<<"||"<<endl;
	cout<<" URDU    "<<"\t"<<"||"<<"\t"<<"75"<<"\t"<<"||"<<"\t"<<urdu<<"\t"<<"||"<<"\t"<<urdu_percentage<<" %"<<"\t"<<"||"<<endl;
	cout<<" ISLAMIYAT"<<"\t"<<"||"<<"\t"<<"50"<<"\t"<<"||"<<"\t"<<islamiyat<<"\t"<<"||"<<"\t"<<islam_percentage<<" %"<<"\t"<<"||"<<endl;
	cout<<" PAK.STUDY"<<"\t"<<"||"<<"\t"<<"50"<<"\t"<<"||"<<"\t"<<pakstudy<<"\t"<<"||"<<"\t"<<pak_percentage<<" %"<<"\t"<<"||"<<endl;
	cout<<" BIOLOGY   "<<"\t"<<"||"<<"\t"<<"60"<<"\t"<<"||"<<"\t"<<biology<<"\t"<<"||"<<"\t"<<bio_percentage<<" %"<<"\t"<<"||"<<endl;
	cout<<" CHEMISTRY"<<"\t"<<"||"<<"\t"<<"60"<<"\t"<<"||"<<"\t"<<chemistry<<"\t"<<"||"<<"\t"<<chem_percentage<<" %"<<"\t"<<"||"<<endl; 
	cout<<"================================================================================================================="<<endl;
	cout<<" TOTAL  "<<"\t"<<"||"<<"\t"<<"505"<<"\t"<<"||"<<"\t"<<""<<obtmarks<<"\t"<<"||"<<"\t"<<percentage<<" %"<<"\t"<<"||"<<endl;
	cout<<"================================================================================================================="<<endl;
	if(chem_percentage>=80 && chem_percentage<=100)  cout<< "GRADE : A+" <<endl; 
	     else if(chem_percentage>=70 && chem_percentage<80) cout<< "GRADE : A"<<endl ;  
	     else if(chem_percentage>=60 && chem_percentage<70) cout<< "GRADE : B" <<endl;   
	     else if(chem_percentage>=50 && chem_percentage<60) cout<< "GRADE : C" <<endl;               
	     if(chem_percentage>=40 && chem_percentage<50) cout<< "GRADE : D" <<endl; 
	     else if(chem_percentage>=33 && chem_percentage<40) cout<< "GRADE : E" <<endl;         
	     else if(chem_percentage<33)           cout<< "GRADE : F"<<endl ;
}
                          
                          
                          
                         
