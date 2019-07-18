#include<iostream>
#include<string.h>

using namespace std;

class AccountDetail{
	public:
	string name;
	int AcNo;
	float bal;
	
	void getinfo(){
		cout<<"Enter Name : "<<endl;
		cin>>name;
		cout<<"Enter Account number:"<<endl;
		cin>>AcNo;
		cout<<"Enter balance: "<<endl;
		cin>>bal;
		
	}
	void printinfo(){
		cout<<name<<endl;
		cout<<AcNo<<endl;
		cout<<bal<<endl;
	}
};
class Withdraw:public virtual AccountDetail{
	public:
	void remove(){
	
	int p=0;
	cout<<"enter amount to withdraw from account"<<endl;
	cin>>p;
	if(bal<500){
		cout<<"Less amount in account penalty of Rs.100"<<endl;
		bal = bal - p - 100;
		cout<<"balance is:"<<bal<<endl;
	}else{
		bal = bal - p;
		cout<<"balance is:"<<bal<<endl;
	}
}
	
};
class Deposit:public virtual AccountDetail{
	public:
	void put(){
	int p;
	cout<<"enter ammount to deposite in account"<<endl;
	cin>>p;
	bal += p;
	cout<<"balance is:"<<bal<<endl;
	}
};

int main(){
	int n;
	AccountDetail a1;
	a1.getinfo();
	Deposit d1;
	//Withdraw w1;
	
	a1.printinfo();
	
	d1.getinfo();
	d1.put();
//	cout<<"ENTER 1 FOR DEPOSITION"<<endl;
//	
//	cout<<"ENTER 2 FOR WITHDRAWAL"<<endl;
//	cin>>n;
//	switch(n)
//	{case 1:
//		d1.put();
//		break;
//	case 2:
//		w1.remove();	
//		break;
//	default:
//		cout<<"invalid input"<<endl;
//	}	
}
