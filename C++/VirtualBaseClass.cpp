#include<iostream>
using namespace std;

class gParent{
	public :
		int a;
		gParent(int b = 0){
			cout<<"GParent"<<endl;
			a = b;
		}
};

class Parent1 : virtual public gParent{
	public:
		//int p2;
		Parent1(int b = 0){
			cout<<"Parent1"<<endl;
			//gParent();	
		}
};

class Parent2 : virtual public gParent{
	public:
		//int p2;
		Parent2(int b = 0){
			cout<<"Parent2"<<endl;
			//gParent();
		}
		
};

class Child : public Parent1, public Parent2{
	public:
		Child(int b = 0){
			cout<<"Child"<<endl;
		}
};

int main(){
	Parent1 p1;
	Parent2 p2;
	
	Child c;
	
	return 0;
}
