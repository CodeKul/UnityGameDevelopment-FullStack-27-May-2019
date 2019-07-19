/*Exception Handling*/

#include<iostream>
using namespace std;

int division(int a, int b){
	try{
		if(b==0){
			throw 'b';
		}else{
			return a/b;
		}
	}catch(char i){
		cout<<"Caught inside Function"<<endl;
		throw i;
	}
}

int main(){
	int a,b,sum;
	
	cout<<"Enter Dividend : ";
	cin>>a;
	cout<<"Enter Divisor : ";
	cin>>b;

	try{
		division(a,b);
		cout<<"Result is : "<<sum;
	}catch(int i){
		cout<<"Integer Exception caught : "<<i<<endl;
		cout<<"It wont be divided";
	}//catch(char a){
//		cout<<"Char Exception caught : "<<a<<endl;
//	}
	catch(...){
		cout<<"Exception Caught";
	}
	
	cout<<"After Catch";
	
	
}
