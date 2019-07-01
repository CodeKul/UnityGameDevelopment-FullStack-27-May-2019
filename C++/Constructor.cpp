/*Contructor and Destructors*/

#include<iostream>
using namespace std;

class Box{
	public:
		int length,breadth,height;
	
		int getVolume(){
			return length * breadth * height;
		}
		
		void setLength(int l){
			length = l;
		}
		
		void setBreadth(int b){
			breadth = b;
		}
		
		void setHeight(int h){
			height = h;
		}
		
//		Box(){
//			cout<<"Constructor Called. OBject is created";
//		}
		
		Box(int l = 10,int b = 10,int h = 10){
			cout<<"Inside Parameterized constructor";
			length = l;
			breadth = b;
			height = h;
		}
		
		~Box(){
			cout<<"OBJECT DELETED"<<endl;
		}
		
		friend void getParam(Box);
};

void getParam(Box box){
	cout<<"Length : "<<box.length<<"\tBreadth : "<<box.breadth<<"\tHeight :"<<box.height<<endl;
}

int main(){
	Box b1;
	cout<<"Volume : "<<b1.getVolume()<<endl;
	
	Box b2(10,20,30);
	cout<<"Volume : "<<b2.getVolume()<<endl;
	getParam(b2);
	
}







