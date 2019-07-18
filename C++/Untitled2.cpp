/*File Handling*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
	string name;
	int age;
	ofstream fout;
	
	fout.open("sample.txt");

	cout<<"Enter Name : ";
	cin>>name;
	
	cout<<"Enter Age: ";
	cin>>age;
}
