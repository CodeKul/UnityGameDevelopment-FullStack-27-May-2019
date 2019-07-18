/*File Handling*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
	const int size = 5;
	char line[size];
	string name,name1;
	int age,age1;
	ofstream fout;
	ifstream fin,fin1;
	
	fout.open("sample.txt");

//	cout<<"Enter Name : ";
//	cin>>name;
//	
//	cout<<"Enter Age: ";
//	cin>>age;
	
	fout<<"jayasd"<<endl;
	fout<<235;

	fout.close();	
	
	fin.open("sample.txt");
	
	fin>>name1;
	fin>>age1;
	
	cout<<"Reading from File : "<<endl;
	cout<<name1<<endl;
	cout<<age1;
	
	//fin.close();
	
	fin1.open("sample1.txt");

	while(fin1.eof() == 0){
		fin1.getline(line,size);
		cout<<line<<endl;
	}
}
