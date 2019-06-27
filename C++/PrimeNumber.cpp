/*Prime Number*/

#include<iostream>

using namespace std;

int main(){
	
	int a,i;
	bool isPrime = false;
	
	cout<<"Enter Number";
	cin>>a;
	
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
