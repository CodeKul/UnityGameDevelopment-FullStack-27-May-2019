/*Inheritance*/

#include<iostream>
using namespace std;

class Shape{
	protected : 
		int height;
		int width;
	public:
		Shape(){
			cout<<"Shape Constructor Called"<<endl;
		}
		~Shape(){
			cout<<"Shape Destructor Called"<<endl;
		}
		void setHeight(int h){
			height = h;
		}
		void setWidth(int w){
			width = w;
		}
};

class Paint{
	public:
		Paint(){
			cout<<"Paint Contructor called"<<endl;
		}
		void getCost(int area){
			cout<<"Cost for painting the area is :"<<area * 70;
		}
		~Paint(){
			cout<<"Paint Destructor called"<<endl;
		}
};

class Rectangle : public Shape,public Paint{
	public :
		Rectangle(int h,int w){
			cout<<"Rectangle Constructor called"<<endl;
			height = h;
			width = w;
		}
		int getArea(){
			return height * width;
		}
		
		~Rectangle(){
			cout<<"Rectangle Destructor Called"<<endl;
		}
	
};


int main(){
	Rectangle rect(5,10);
	int a;
	
//	rect.setHeight(5);
//	rect.setWidth(10);
	
	a = rect.getArea();
	
	cout<<"Area of Rectangle is : "<<rect.getArea()<<endl;	
	
	rect.getCost(a);
}





