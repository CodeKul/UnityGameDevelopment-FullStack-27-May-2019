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
	
	fout.open("sample.txt",ios::ate);
	
	fout.seekp(50,ios::beg);
	int m = fout.tellp();
	cout<<m<<endl;
	
	cout<<"Enter Name : ";
	cin>>name;
	
	cout<<"Enter Age: ";
	cin>>age;
	
	fout<mijk<endl;
	fout<<age;

	fout.close();	
	
	fin.open("sample.txt");
//	int n = fin.tellg();
	fin.seekg(2,ios::beg);
	int n = fin.tellg();
	cout<<n<<endl;
	fin>>name1;
	fin>>age1;
	
	cout<<"Reading from File : "<<endl;
	cout<<name1<<endl;
	cout<<age1;
	
	fin.close();
	
//	fin1.open("sample1.txt");

//	while(fin1.eof() == 0){
//		fin1.getline(line,size);
//		cout<<line<<endl;
//	}
}
