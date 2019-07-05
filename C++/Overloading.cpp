/*OverLoading*/

#include<iostream>
using namespace std;


int print(int temp){
	return temp;
}

float print(float temp){
	return temp;
}

double print(double temp){
	return temp;
}

char print(char temp){
	return temp;
}

float print(int temp,float temp1,double temp2){
	return temp1 + temp2 + temp;
}

int main(){
	int a;
	float b;
	double c;
	char d;
	
	cout<<"Enter Integer : ";
	cin>>a;
	cout<<print(a)<<endl;
	
	cout<<"Enter float : ";
	cin>>b;
	cout<<print(b)<<endl;
	
	cout<<"Enter Double : ";
	cin>>c;
	cout<<print(c)<<endl;
	
	cout<<"Enter char : ";
	cin>>d;
	cout<<print(d)<<endl;


	cout<<print(a,b,c)<<endl;
		
	return 0;
}
