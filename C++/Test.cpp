/*Book Store*/

#include<iostream>
#include<string.h>
using namespace std;

class Book{
	public:
		char title[10];
		float price;
		int stock;
		
		void getData(){
			cout<<"Enter Title : ";
			cin>>title;
			cout<<"Enter Price : ";
			cin>>price;
			cout<<"Enter Stock : ";
			cin>>stock;
		}
		
		void display(){
			cout<<"Title is : "<<this->title<<endl;
			cout<<"Price is : "<<this->price<<endl;
			cout<<"Stock is : "<<this->stock<<endl;
		}
		
//		int compareOpp(string s){
//			if((this->title.compare(s)) == 0){
//				return 0;
//			}else{
//				return 1;
//			}
//		}	
};

bool compareFunction(string s1, string s2){
	int x = s1.compare(s2); 
	
	if(x == 0){
		return true;
	}else{
		return false;
	}
}

int main(){
	int i,n;
	char choice;
	char searchTitle[10];
	Book b[10];
	
	for(i=0;i<3;i++){
		cout<<"Enter Data for Book "<<i+1;
		b[i].getData();
	}
	
	do{
	
	cout<<"Enter Name of book to search : ";
	cin>>searchTitle;
	
	
	for(i=0;i<3;i++){
		string temp = b[i].title;
		if(temp.compare(searchTitle) == 0){
			cout<<"Book Found! Details are :"<<endl;
			b[i].display();
			cout<<"Enter no of copies :";
			cin>>n;
			if(b[i].stock>=n){
				cout<<"Final Amount to be paid :"<<b[i].price * n;
			}else{
				cout<<"Utna nahiye";
			}
			break;
		}
	}
	
		if(i==3)
			cout<<"No Matches Found"<<endl;
		cout<<"Do you want to search Again(y/n) => ";
		cin>>choice;
	}while(choice == 'y' || choice == 'Y');
}


