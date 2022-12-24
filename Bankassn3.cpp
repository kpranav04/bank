#include <iostream>
using namespace std;
 char t;
	int rid[100];
	int rpa[100];
	int rage[100];
	int rmo[100];
	int tid,p,c,tom;
	 int lpa;
	 int lid;
	string rname[100];
	string remail[100];
	static int i=0;
class account
{  
	 public :
	    void reg();
	    void login();
	    void rgrant(int i);
	    void tmon();
	    void tmoney();
	    void wel();
};
    //  int  account :: i=0;    

        void account :: reg()
         {
         	/*cout<<"PLEASE ENTER YOUR NAME : ";
         	getline(cin,rname[i]);
         	*/
         	cout<<"PLEASE ENTER YOUR NAME : ";
         /*	getline(cin,remail[i]);
         */ cin>>rname[i];
         	cout<<"PLEASE ENTER YOUR AGE : ";
         	cin>>rage[i];
         	cout<<"YOUR DETAILS HAVE BEEN RECORDED \n \n \t\t\t\tREGISTRATION \n ";
         	cout<<"ENTER ID FOR BANK : ";
         	cin>>rid[i];
         	cout<<"ENTER PASSWORD FOR BANK(4 digit) : ";                                                   // CREATE RE ENTER POSSWORD INTERFACE
         	cin>>rpa[i]; 
			cout<<"MONEY DEPOSITED : ";
			cin>>rmo[i];                                                                                     // GOTO FN TO GO TO FIRST STEP
         	i++;
         	cout<<"REGISTRATION COMPLETED , REDIRECTING ON HOMEPAGE "<<endl;
			wel();	 
         }
         
         void account :: login()
		  {
		     cout<<"ENTER BANK ID : ";
			 cin>>lid;
			 cout<<"ENTER PASSWORD : ";
			 cin>>lpa;	
			for (int i=0;i<101;i++)
			  {
			  	 if (rid[i]==lid && rpa[i]==lpa)
			  	    {   p=i;
			  	    	rgrant(p);
					}
			     else 
				    {  
					cout<<"INVALID CREDENTIALS , RETURNING BACK TO HOMEPAGE ";
					wel();                                                                                       //goto if pass wrong
					}
							
			  }
     	  } 
         
		 
		 
		 void account :: rgrant(int k)
		    {
		    	cout<<"WELOCOME MR ."<<rname[k]<<endl<<" YOUR CURRENT BANK BALANCE IS : "<<rmo[k]<<endl;
		    	tmon();
		    	
			}
		 
		 void account :: tmon()
		   {
		   	   cout<<"ENTER ID TO WHICH MONEY IS TO BE DEPOSITED : ";
		   	   cin>>tid;
		   	     for (int i=0;i<101 ;i++)
		   	      {
		   	      	if (i==p)
		   	      	  continue;
		   	      	if (tid == rid[i] )
		   	      	  {
		   	      	  	c=i;
		   	      	  	tmoney();
				      }
		   	      	else
		   	      	   {
					    cout<<"USER ID NOT REGISTERED PLEASE GO TO HOMEPAGE FOR REGISTRATION OF ANOTHER ACCOUNT , REDIRECTING BACK TO HOME "<<endl;      
						wel();                 //GOTO FUNCTIION	
	    			   }             
		   	   	 }
		   }
		   
		 void account :: tmoney() 
		  {
		  	cout<<"ACCOUNT HOLDER ID : "<<rid[c]<<endl<<"ACCOUNT HOLDER NAME "<<rid[c]<<endl;
		  	cout<<"ENTER AMOUNT TO TRANSFER : ";
		  	cin>>tom;
		  	cout<<"TRANSACTION SUCCESSFUL ";
		  	cout<<"YOUR CURRENT ACCOUNT BALANCE : "<<rmo[p]-tom;
		  	rmo[p]=rmo[p]-tom;
		  	rmo[c]=rmo[c]+tom;
		  	
		  	wel();
		 }
		 void account :: wel()
		 {
		 
		 cout<<"\t \t \t WELCOME TO IITI BANK\nPLEASE CHOOSE OPERATION(ENTER ALPHABET IN BRACKET)\nREGISTRATION (r)\nLOGIN (l)\nTRANSFER (t) \n ";
	                                                                                            // GOTO HERE AGAIN
    	 cin>>t;
         switch (t) 	
	    {
	     
	     case 'r' :
	   	  reg();
	      break;
	
	     case 'l' :
	   	  login();
	   	   break;
		 case 't' :
		    cout<<"PLEASE LOGIN TO TRANSFER MONEY \n"; 
			wel();                            //                 GOTO TOP
		   break;	 
	     default :
		    exit(0);
        }
        
	    }
int main()
{   
    account create;
   create.wel();
	
}
