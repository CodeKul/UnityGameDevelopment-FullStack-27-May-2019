/*Copy Constructor*/

#include<iostream>
using namespace std;


class Box{
	public:
		int h;
		int w;
		
		
		Box(int height = 0,int width = 0){
			cout<<"In Normal Constructor!"<<endl;
			h = height;
			w = width;
		}
		
		Box(const Box &b)
		{
			cout<<"In Copy Constructor!"<<endl;
			h = b.h;
			w = b.w;
		}
};

int main(){
	Box a(10,20);
	Box b = a;
}
