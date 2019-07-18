/*Dynamic memory Allocation*/

#include<iostream>
#include<string.h>
using namespace std;

class Box{
	public:
		Box(){
			cout<<"Object Created \t";
		}
		
		~Box(){
			cout<<"Object Destroyed"<<endl;
		}
		
		void display(){
			cout<<"In Display"<<endl;
		}
};

int main(){
	//Basic Variables..
	float *ptr = NULL;
	ptr = new float;
	*ptr = 3.14f;
	
	cout<<"Address : "<<ptr<<endl;
	cout<<"Value : "<<*ptr<<endl;
	
	//Arrays..
	
	int *ptr1 = NULL;
	
	ptr1 = new int[20];
	
	int i;
	for(i=0;i<5;i++){
		cin>>ptr1[i];
	}
	
	for(i=0;i<5;i++){
		cout<<"Address : "<<&ptr1[i]<<endl;
		cout<<ptr1[i];
	}
	
//	cout<<"Value : "<<ptr1<<endl;

	Box *ptr2 = NULL;
	
	ptr2 = new Box[5];
	
	for(i=0;i<5;i++){	
		ptr2[i].display();
	}
	
	delete ptr;
	delete [] ptr1;
	delete [] ptr2;
}


