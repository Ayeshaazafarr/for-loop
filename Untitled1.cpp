#include<iostream>
using namespace std;
int main(){
	int items;
	
	cout<<"Enter no of items"<<endl;
	cin>>items;
	double total=0.0 , price;
	 int i=1;
	 while(i<=items){
	 	cout<<"Enter price of items"<<i<<endl;
	 	cin>>price;
	 if (price<0){
	 	cout<<"negative price ignored"<<endl;
	 	continue;
	 }if (price==0){
	 	cout<<"Zero number entered....Exiting"<<endl;
	 	break;
	 	
	 }
	 total+=price;
	 i++;
	 }
	cout<<"Your total bill is $ "<<total<<endl;
	
	return 0;
}
