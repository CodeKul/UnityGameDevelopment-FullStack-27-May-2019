/*Prime Number*/

#include<iostream>

using namespace std;

int main(){
	
	int a,i;
	bool isPrime = false;
	
	cout<<"Enter Number";
	cin>>a;
	while(a>0 || a<10){
		if(a<0 || a>10){
			cout<<"Chukicha input, neet taak"<<endl;
			cin>>a;
		}
	}
	
	for(i=2;i<a;i++){
		if(a%i == 0){
			cout<<"Number is not PRIME";
			break;
		}
	}
	
	if(i == a){
		cout<<"Number is Prime";
	}

}
