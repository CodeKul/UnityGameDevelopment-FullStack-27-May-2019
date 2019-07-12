#include<iostream>
#include<string.h>
using namespace std;

class Account{
	public:
	string name;
	int acc_no;
	float balance;
	
	void getInfo(string n,int no, float bal){
		name = n;
		acc_no = no;
		balance = bal;
	}
	void putInfo(){
		cout<<"Name : "<<name<<endl;
		cout<<"Account No : "<<acc_no<<endl;
		cout<<"Balance : "<<balance<<endl;
	}
};

class Saving:public Account{
	public:
		void AcceptPaisa(int p){
			balance += p;
			//balance = balance + p;
		}
		
		void withdraw(int p){
			if(balance < 500){
				cout<<"Paise nahiyet \t penalty";
				balance = balance - p - 100;
			}else{
				balance -= p;
			}
			cout<<"Updated Balance :"<<balance<<endl;		
		}
};

class Current:public Account{
	public:
};

int main(){
	
	Saving s;
	Current c;
	
	s.getInfo("abc",1,10000);
	s.putInfo();
	s.AcceptPaisa(500);
	s.withdraw(10001);
	s.withdraw(100);
	s.putInfo();
	
	
	c.getInfo("abc",1,10000);
	c.putInfo();
}


