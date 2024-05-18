#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	system("color F0");
	char name[50];
	string roll_no;
	char eng_grade, math_grade, urdu_grade, pksd_grade, che_grade, phy_grade, bio_grade, isl_grade, grade ;
	double eng,math,urdu,percentage,islamiyat,pakstudy,chemistry,physics,biology,obtmarks,eng_percentage,urdu_percentage,chem_percentage,phy_percentage,pak_percentage,bio_percentage,islam_percentage,math_percentage;

	cout<<"Name of student : ";
	cin.getline(name, 50);
    cout<<"Roll no : ";
    cin>>roll_no;
    cout<<"================================================="<<"\n"<<endl;
	cout<<"Enter marks outof 75\n ENGLISH     : ";
	cin>>eng;
	{
		if(eng>75)
		{
		
		cout<<"Sorry! you can't enter marks greater than total marks of this subject"<<endl;
		cout<<"Plz!RE-ENTER ENGLISH MARKS = ";
		cin>>eng;
	    }
	}
	cout<<"Enter marks outof 75\n MATHEMATICS : ";
	cin>>math;
	{
		if(math>75)
		{
		
		cout<<"Sorry! you can't enter marks greater than total marks of this subject"<<endl;
		cout<<"Plz!RE-ENTER MATHEMATICS MARKS = ";
		cin>>math;

	    }
	}
	cout<<"Enter marks outof 60\n BIOLOGY     : ";
	cin>>biology;
	{
		if(biology>60)
		{
		
		cout<<"Sorry! you can't enter marks greater than total marks of this subject"<<endl;
		cout<<"Plz!RE-ENTER BILOGY MARKS = ";
		cin>>biology;
		
	                          }
	}
	cout<<"Enter marks outof 75\n URDU        : ";
	cin>>urdu;
	{
		if(urdu>75)
		{
		
		cout<<"Sorry! you can't enter marks greater than total marks of this subject"<<endl;
		cout<<"Plz!RE-ENTER URDU MARKS = ";
		cin>>urdu;
	
	                          }
	}
	cout<<"Enter marks outof 50\n ISLAMIYAT   : ";
	cin>>islamiyat;{
		if(islamiyat>50)
		{
		
		cout<<"Sorry! you can't enter marks greater than total marks of this subject"<<endl;
		cout<<"Plz!RE-ENTER ISLAMIYAT MARKS = ";
		cin>>islamiyat;
	
	                          }
	}
	cout<<"Enter marks outof 50\n PAK STUDY   : ";
	cin>>pakstudy;{
		if(pakstudy>50)
		{
		
		cout<<"Sorry! you can't enter marks greater than total marks of this subject"<<endl;
		cout<<"Plz!RE-ENTER PAK STUDY MARKS = ";
		cin>>pakstudy;
		
	                          }
	}
	cout<<"Enter marks outof 60\n CHEMISTRY   : ";
	cin>>chemistry;{
		if(chemistry>60)
		{
		
		cout<<"Sorry! you can't enter marks greater than total marks of this subject"<<endl;
		cout<<"Plz!RE-ENTER CHEMISTRY MARKS = ";
		cin>>chemistry;
	
	                          }
	}
	cout<<"Enter marks outof 60\n PHYSICS     : ";
	cin>>physics;{
		if(physics>60)
		{
		
		cout<<"Sorry! you can't enter marks greater than total marks of this subject"<<endl;
		cout<<"Plz!RE-ENTER PHYSICS MARKS = ";
		cin>>physics;
	                         
	                          }
	}
	
	obtmarks=eng+math+biology+urdu+islamiyat+chemistry+physics+pakstudy;
	percentage=( (obtmarks)*100)/505;
	eng_percentage=( (eng)*100)/75;  
	math_percentage=( (math)*100)/75;      
	chem_percentage=( (chemistry)*100)/60;    
	urdu_percentage=( (urdu)*100)/75;         
	phy_percentage=( (physics)*100)/60;       
                          pak_percentage=( (pakstudy)*100)/50;   
                          bio_percentage=( (biology)*100)/60;    
	islam_percentage=( (islamiyat)*100)/50;
	
	
{
		if(percentage>=80 && percentage<=100) grade='A';  
	     if(percentage>=70 && percentage<80) grade='A' ; 
	     if(percentage>=60 && percentage<70) grade='B'; 
	     if(percentage>=50 && percentage<60) grade='C';           
	     if(percentage>=40 && percentage<50) grade='D' ;
	      if(percentage>=33 && percentage<40) grade='E' ;     
	      if(percentage<33)       grade='F'  ;  
}
		
	
{
		if(chem_percentage>=80 && chem_percentage<=100) che_grade='A';  
	     if(chem_percentage>=70 && chem_percentage<80) che_grade='A' ; 
	     if(chem_percentage>=60 && chem_percentage<70) che_grade='B';    
	     if(chem_percentage>=50 && chem_percentage<60) che_grade='C';                
	     if(chem_percentage>=40 && chem_percentage<50) che_grade='D' ; 
	      if(chem_percentage>=33 && chem_percentage<40) che_grade='E' ;         
	      if(chem_percentage<33)       che_grade='F'  ;  
}
	
{
		if(eng_percentage>=80 && eng_percentage<=100) eng_grade='A'  ; 
	      if(eng_percentage>=70 && eng_percentage<80) eng_grade='A';   
	    if(eng_percentage>=60 && eng_percentage<70) eng_grade='B' ;
	   if(eng_percentage>=50 && eng_percentage<60) eng_grade='C' ;               
	     if(eng_percentage>=40 && eng_percentage<50) eng_grade='D' ;
	     if(eng_percentage>=33 && eng_percentage<40) eng_grade='E' ;         
	      if(eng_percentage<33)      eng_grade='F'    ; 
}
	
{
		if(math_percentage>=80 && math_percentage<=100) math_grade='A' ;
	     if(math_percentage>=70 && math_percentage<80) math_grade='A'; 
	     if(math_percentage>=50 && math_percentage<60) math_grade='C';                
	     if(math_percentage>=40 && math_percentage<50) math_grade='D'; 
	     if(math_percentage>=33 && math_percentage<40) math_grade='E';     
	   if(math_percentage<33)      math_grade='F' ;    
}
{
		if(phy_percentage>=80 && phy_percentage<=100) phy_grade='A'; 
	     if(phy_percentage>=70 && phy_percentage<80) phy_grade='A'; 
	     if(phy_percentage>=60 && phy_percentage<70) phy_grade='B';  
	    if(phy_percentage>=50 && phy_percentage<60) phy_grade='C' ;              
	     if(phy_percentage>=40 && phy_percentage<50) phy_grade='D'; 
	     if(phy_percentage>=33 && phy_percentage<40) phy_grade='E' ;      
	     if(phy_percentage<33)    phy_grade='F'     ; 
	}
	
{
		if(urdu_percentage>=80 && urdu_percentage<=100) urdu_grade='A' ; 
	     if(urdu_percentage>=70 && urdu_percentage<80) urdu_grade='A' ;   
	    if(urdu_percentage>=60 && urdu_percentage<70)  urdu_grade='B';  
	     if(urdu_percentage>=50 && urdu_percentage<60) urdu_grade='C' ;            
	     if(urdu_percentage>=40 && urdu_percentage<50) urdu_grade='D' ;  
	     if(urdu_percentage>=33 && urdu_percentage<40) urdu_grade='E' ;         
	     if(urdu_percentage<33)    urdu_grade='F' ;       
}
	
{
		if(bio_percentage>=80 && bio_percentage<=100)  bio_grade='A' ;  
	    if(bio_percentage>=70 && bio_percentage<80) bio_grade='A' ;  
	    if(bio_percentage>=60 && bio_percentage<70)  bio_grade='B' ;  
	     if(bio_percentage>=50 && bio_percentage<60)  bio_grade='C' ;             
	     if(bio_percentage>=40 && bio_percentage<50) bio_grade='D' ;  
	    if(bio_percentage>=33 && bio_percentage<40)  bio_grade='E' ;          
	    if(bio_percentage<33)         bio_grade='F' ;    
}
	
{
		if(islam_percentage>=80 && islam_percentage<=100)   isl_grade='A' ;     
	    if(islam_percentage>=70 && islam_percentage<80)   isl_grade='A' ;  
	     if(islam_percentage>=60 && islam_percentage<70)  isl_grade='B' ;   
		if(islam_percentage>=50 && islam_percentage<60)   isl_grade='C' ;                
	     if(islam_percentage>=40 && islam_percentage<50)  isl_grade='D' ;   
	     if(islam_percentage>=33 && islam_percentage<40)  isl_grade='E' ;        
	    if(islam_percentage<33)         isl_grade='F' ;     
}
	
{
		if(pak_percentage>=80 && pak_percentage<=100)  pksd_grade='A' ;   
	      if(pak_percentage>=70 && pak_percentage<80)  pksd_grade='A' ;  
	     if(pak_percentage>=60 && pak_percentage<70)  pksd_grade='B' ; 
	      if(pak_percentage>=50 && pak_percentage<60) pksd_grade='C' ;             
	     if(pak_percentage>=40 && pak_percentage<50)  pksd_grade='D' ; 
	     if(pak_percentage>=33 && pak_percentage<40)  pksd_grade='E' ;         
	     if(pak_percentage<33)           pksd_grade='F' ;  
}
	


	cout<<"================================================================================================================="<<endl;	
	cout<<"                                                * RESULT CARD *                                             "<<endl;
	cout<<"================================================================================================================="<<endl;	
	cout<<" SUBJECT"<<"\t"<<"||"<<" TOTAL MARKS"<<"\t"<<"||"<<"OBTAINED MARKS"<<"||"<<"  PERCENTAGE"<<"\t""||"<<endl;
	cout<<"================================================================================================================="<<endl;
	
	cout<<" ENGLISH   "<<fixed<<"\t"<<"||"<<"\t"<<"75"<<"\t"<<"||"<<"\t"<<eng<<"\t"<<"||"<<"\t"<<eng_percentage<<" %"<<"\t"<<"||\t"<<eng_grade<<endl;
	cout<<" MATHEMATICS"<<"\t"<<"||"<<"\t"<<"75"<<"\t"<<"||"<<"\t"<<math<<"\t"<<"||"<<"\t"<<math_percentage<<" %"<<"\t"<<"||\t"<<math_grade<<endl;
	cout<<" PHYSICS "<<"\t"<<"||"<<"\t"<<"60"<<"\t"<<"||"<<"\t"<<physics<<"\t"<<"||"<<"\t"<<phy_percentage<<" %"<<"\t"<<"||\t"<<phy_grade<<endl;
	cout<<" URDU    "<<"\t"<<"||"<<"\t"<<"75"<<"\t"<<"||"<<"\t"<<urdu<<"\t"<<"||"<<"\t"<<urdu_percentage<<" %"<<"\t"<<"||\t"<<urdu_grade<<endl;
	cout<<" ISLAMIYAT"<<"\t"<<"||"<<"\t"<<"50"<<"\t"<<"||"<<"\t"<<islamiyat<<"\t"<<"||"<<"\t"<<islam_percentage<<" %"<<"\t"<<"||\t"<<isl_grade<<endl;
	cout<<" PAK.STUDY"<<"\t"<<"||"<<"\t"<<"50"<<"\t"<<"||"<<"\t"<<pakstudy<<"\t"<<"||"<<"\t"<<pak_percentage<<" %"<<"\t"<<"||\t"<<pksd_grade<<endl;
	cout<<" BIOLOGY   "<<"\t"<<"||"<<"\t"<<"60"<<"\t"<<"||"<<"\t"<<biology<<"\t"<<"||"<<"\t"<<bio_percentage<<" %"<<"\t"<<"||\t"<<bio_grade<<endl;
	cout<<" CHEMISTRY"<<"\t"<<"||"<<"\t"<<"60"<<"\t"<<"||"<<"\t"<<chemistry<<"\t"<<"||"<<"\t"<<chem_percentage<<" %"<<"\t"<<"||\t"<<che_grade<<endl; 
	cout<<"================================================================================================================="<<endl;
	cout<<" TOTAL  "<<"\t"<<"||"<<"\t"<<"505"<<"\t"<<"||"<<"\t"<<""<<obtmarks<<"\t"<<"||"<<"\t"<<percentage<<" %"<<"\t"<<"||\t"<<grade<<endl;
	cout<<"================================================================================================================="<<endl;
	
}
                          
                          
                          
                         
