#include<iostream>
using namespace std;
int main(){
	int choice;
	double totalbill=0.0;
	
	do{
		cout<<"....CAFE MENU....\n";
   	cout<<"1-Tea   $2\n";
   	cout<<"2-Coffee   $3\n";
   	cout<<"3-Sandwich     $5 \n";
   	cout<<"4-Burger     $7\n";
   	cout<<" 5-...Exit...\n\n\n";
   	cout<<"Enter your choice"<<endl;
   	cin>>choice;
   	switch(choice){
   		case 1:
   			totalbill+2;
   			break;
   	case 2:
	   totalbill+=3;
	   break;
	case 3 :
	totalbill+=5;
	break;
	 
	case 4 :
	totalbill+=7;
	break;
	
	case 5:
	
	cout<<"Exit"<<endl;
	
	default :
		cout<<"invalid choice"<<endl;
		
	   }
	   
	}
	while (choice!=5);
	cout<<"TOTALBILL IS "<<totalbill<<endl;
	
	
	return 0;
}
