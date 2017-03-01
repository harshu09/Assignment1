#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{  
	 char ch1,ch2,ch3,a;
	 ifstream infile;
	 infile.open("input.txt",ios::in);
	 cout<<"read  ";
	 ofstream outfile1,outfile2;
	 outfile1.open("result.txt");
	 outfile2.open("cleaned.txt");
	 cout<<"\n enter the line :f,m,r,s ";
	 cin>>a;
	 if(a=='f')
	{
	   while(infile)
	   { 
		   infile.get(ch1);
		   if(ch1=='"')
		   {
			  infile.get(ch2);
		      if(ch2=='f')
		      {
		         infile.get(ch3);
		         if(ch3=='"')
		         {
			       outfile1<<ch1;  
			       outfile1<<ch2;
			       outfile1<<ch3;
			          infile.get(ch1);
                      outfile1<<ch1; 
                      infile.get(ch1);
                      outfile1<<ch1; 
			         for( ; ; )
			        {
                      infile.get(ch1);
                      outfile1<<ch1;   
                      if(a==',')
                      {
						 outfile1<<endl;
						 outfile2<<endl;
						  break;
					  }	
					  outfile2<<ch1;		   
			        }
			       cout<<endl;
			     }
	           }
	        }
		}
     }
     else if(a=='m')
       {
	   while(infile)
	   { 
		   infile.get(ch1);
		   if(a=='"')
		   {
			  infile.get(ch2);
		      if(ch2=='m')
		      {
		         infile.get(ch3);
		         if(ch3=='"')
		         {
			       outfile1<<ch1;  
			       outfile1<<ch2;
			       outfile1<<ch3;
			          infile.get(ch1);
                      outfile1<<ch1; 
                      infile.get(ch1);
                      outfile1<<ch1; 
			         for( ; ; )
			        {
                      infile.get(ch1);
                      outfile1<<ch1;   
                      if(ch1==',')
                      {
						 outfile1<<endl;
						 outfile2<<endl;
						  break;
					  }		
					     outfile2<<a;	   
			        }
			     }
	           }
	        }
		}
     }
     else if(a=='r')
        {
	   while(infile)
	   { 
		   infile.get(ch1);
		   if(ch1=='"')
		   {
			  infile.get(ch2);
		      if(ch2=='r')
		      {
		         infile.get(ch3);
		         if(ch3=='"')
		         {
		           outfile1<<ch1;  
			       outfile1<<ch2;
			       outfile1<<ch3;
			       infile.get(ch1);
                   outfile1<<ch1; 
                   infile.get(ch1);
                   outfile1<<ch1; 
			       for( ; ; )
			       {
                      infile.get(ch1);
                      outfile1<<ch1;   
                      if(ch1==',')
                      {
						 outfile1<<endl;
						 outfile2<<endl;
						 break;
					  }			 
					  outfile2<<ch1;  
			        }
			      
			     }
	           }
	        }
		}
     }
     else if(a=='s')
     {
	   while(infile)
	   { 
		   infile.get(ch1);
		   if(ch1=='"')
		   {
			  infile.get(ch2);
		      if(ch2=='s')
		      {
		         infile.get(ch3);
		         if(ch3=='"')
		         {
     		       outfile1<<ch1;  
			       outfile1<<ch2;
			       outfile1<<ch3;
			       infile.get(ch1);
			       outfile1<<ch1;
			       infile.get(ch1);
			       outfile1<<ch1;
			       infile.get(ch1);
			       outfile1<<ch1;
			       outfile2<<ch1;
			       for( ; ; )
			       {
                      infile.get(ch1);
                      outfile1<<ch1;
                      outfile2<<ch1;   
                      if(ch1=='"')
                      {
						 outfile1<<endl;
						 outfile2<<endl;
						 break;
					  }	
					     	   
			        }
			       
			     }
	           }
	        }
		}
     }
    outfile2.close();
    fstream n;
	n.open("cleaned.txt",ios::in|ios::out);
    n.clear();
    n.seekg(0, ios::beg);
    string S1,S2;
    cout<<"\n\t Enter language name::";
    cin>>S1;
   
    ofstream outfile3;
	outfile3.open("final.bat");
     
   
    while(getline(n,S2))
    {
		  outfile3<<S1;
		  outfile3<<S2<<endl;
		  
	}	   
     outfile3.close();
     

     
	outfile1.close();
	infile.close();
 return 0;
 }
