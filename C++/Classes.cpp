/*Classes*/

#include<iostream>

using namespace std;

class Box{
	protected:
		int length;
		int breadth;
		int height;
	
	public:	
		int getVolume(){
			return length * breadth * height;
		}
		
		void setLength(int l){
			length = l;
		}
		
		void setBreadth(int b){
			breadth = b;
		}
		
		void setHeight(int);
		
};

class SmallBox:Box{
	public:
		int getArea(){
			return length + breadth + height;
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
};

void Box::setHeight(int h){
	height = h;
}

int main(){
	Box b1,b2;
	SmallBox sb1;
	
	
	
	
	sb1.setLength(10);
	sb1.setBreadth(10);
	sb1.setHeight(10);

//	b2.length = 7;
//	b2.breadth = 8;
//	b2.height = 9;
	
//	cout<<"box1 properties are : "<<b1.length<<"\t"<<b1.breadth<<"\t"<<b1.height<<endl;
	
	cout<<"Volume is :"<<sb1.getArea()<<endl;
	
	cout<<"Volume is :"<<b2.getVolume();
}
