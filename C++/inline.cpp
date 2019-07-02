/*Inline Function*/

#include<iostream>
using namespace std;

inline int max(int x, int y){
	return (x>y) ? x : y;
}

int main(){
	int a,b;
	cin>>a;
	cin>>b;
	
	cout<<"Max is : "<<max(a,b);
}
