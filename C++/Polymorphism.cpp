/*Polymorphism*/

#include<iostream>
using namespace std;

class Shape{
	public:
		int width,height;
		Shape(int w = 0, int h = 0){
			width = w;
			height = h;
		}
		
		virtual int area() = 0;
};

class Rectangle:public Shape{
	public:
	Rectangle(int a = 0, int b = 0):Shape(a,b){

	}
	
	int area(){
		cout<<"In Rectangle Area"<<endl;
		return (width*height);
	}
};

class Triangle:public Shape{
	public:
	Triangle(int a = 0, int b = 0):Shape(a,b){}

	
	int area(){
		cout<<"In Triangle Area"<<endl;
		return ((width*height)/2);
	}
};

int main(){
	Shape *shape;
	Rectangle rect(10,15);
	Triangle tri(20,10);
	
	//shape = &rect;
//	shape->area();
	
	shape = &tri;
	shape->area();
}




