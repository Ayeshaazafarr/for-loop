#include<iostream>
using namespace std;
int main(){
	double balance=1000.0;
	int choice;
	double amount;
	
	do{
		cout<<"...ATM MACHINE...\n";
		cout<<"1-Check Balance \n";
		cout<<"2-withdraw money\n";
		cout<<"3-Deposite Money\n";
		cout<<"4-EXIT\n";
		cout<<"Enter your choice"<<endl;
		cin>>choice;
	switch(choice){
		case 1 :
		 cout<<"Your balance is "<<balance;
		 break;
	
	case 2 :
		cout<<"Enter amount to withdraw";
		cin>>amount;
	   if(amount>balance)	{
	   	cout<<"Invalid amount"<<endl;
	   	}else if (amount<=0){
	   		cout<<"Error: enter positive amount"<<endl;
		   
	   } else {
	   	amount-=balance;
	   	cout<<"Withdrawal Successfull"<<balance<<endl;
	   	}break;

	case 3 :
		cout<<"Enter amount to deposit";
		cin>>amount;
	  if(amount<=0){
	  	cout<<"Insufficient Amount"<<endl;
	  else {
	  	amount+=balance;
	  	cout<<"Deposit Successful"<<balance<<endl;
	  	}break;
	  	
	 case 4 :
	   cout<<"...exiting..." <<endl;
	   break;
	default :
	   cout<<"invalid choice number\n"  ;		
	}
}
	while(choice!=4);
	return 0;
}

