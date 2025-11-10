
#include <iostream>
using namespace std;
class account{
	string accountname;
	string personname;
	int accountno;
	public:
		account()
		{
		}
	void getaccdetails()
	{
		cout<<"please enter name of account holder"<<endl;
		cin>>personname;
		cout<<"please enter the account no"<<endl;
		cin>>accountno;
		cout<<"please enter the account type"<<endl;
		cin>>accountname;
	}
	void showacc()
	{
		cout<<"person name"<<"\t"<<personname<<endl;
		cout<<"account no"<<"\t"<<accountno<<endl;
		cout<<"account name is"<<"\t"<<accountname<<endl;
	}
};
	class currentacc:public account{
		float balance;
		float withdraw;
		float deposited;
		public:
			currentacc()
			{
				balance=1000;
				withdraw=0;
			}
			void showbalance()
			{
				cout<<"the balance is"<<balance<<endl;
			}
			void withdrawa()
			{
				cout<<"please enter the amount to withdraw"<<endl;
				cin>>withdraw;
				balance=balance-withdraw;
				
			}
					void asb()
			{
				cout<<"balnce after withdraw is"<<balance<<endl; 
			}
			void deposit()
			{
				cout<<"please enter the amount you want to deposit"<<endl;
				cin>>deposited;
				balance=balance+deposited;
			}
			void ad()
			{
				cout<<"after deposit the balance amount is"<<balance<<endl;
			}
};
	class savingacc:public account{
		float balance;
		
		float deposit;
		public:
			savingacc()
			{
				balance=100;
				deposit=0;
				
			}
			void deposits()
			{
				
				cout<<"please enter the amount you want to deposit"<<endl;
				cin>>deposit;
				balance=balance+deposit;
			}
			void adb()
			{
		
			cout<<"after deposit amount balance is"<<balance<<endl;
			}
			
			 void inquiry()
			{
				cout<<"the balance amount is"<<balance<<endl;
				
			}
	
	
	};
	
int main()
{
	account a1,a2;
	currentacc no1;
	savingacc n1;
 char select;
 
 
cout<<"please enter the s for saving account and c for current account"<<endl;
 cin>>select;
 if(select=='s')
 {
 	a1.getaccdetails();
 	
 	
 
 int choice;
cout<<"please enter your choice"<<endl;
	cout<<"press 1 For balance inquiry"<<endl;
	cout<<"press 2 to deposit the amount"<<endl;
	cin>>choice;
	switch(choice){
	
	case 1:
	{
	
		savingacc n2;
		n2.inquiry();
		break;
}
	case 2:
    {
	   	savingacc n2;
		n2.deposits();
		
		n2.adb();
		break;
}
	default:
	{
	
		cout<<"you do not or entered wrong choice"<<endl;
		break;
}
	
}
}

    if(select=='c')
    {
    	a1.getaccdetails();
    	
    	int choice;
    	cout<<"please enter your choice"<<endl;
    	cout<<"\n press 1 to withdraw the amount";
    	cout<<"\n press 2 to deposit the amount";
    	cin>>choice;
    	switch(choice)
    	{
    		case 1:
    			{
    				currentacc no1;
    				no1.withdrawa();
    				no1.asb();
    				break;
				}
				case 2:
				{
					currentacc no1;
					no1.deposit();
					no1.ad();
					account m1;
					a1.showacc();
					break;
				}
    		
		}
    	
	}

 return 0;
 }	
	
	
	
