/*Operator Overloading*/

#include<iostream>
using namespace std;

class Box{
	private:
		int length;
		int breadth;
		int height;
	public:
		Box(int l,int b,int h){
			length = l;
			breadth = b;
			height = h;
		}
		Box(){
			
		}
		void printParam(){
			cout<<"Lenght : "<<length<<endl;
			cout<<"breadth : "<<breadth<<endl;
			cout<<"height : "<<height<<endl;
		}
	
		void printVolume(){
			int volume = length * breadth * height;
			cout<<"Volume is : "<<volume<<endl; 
		}
		
		Box operator+(Box b){
			Box result;
			result.length = this->length + b.length;
			result.breadth = this->breadth + b.breadth;
			result.height = this->height + b.height;
			
			return result;
		}
		
		Box operator- (Box a){
			Box result;
			result.length = this->length - a.length;
			result.breadth = this->breadth - a.breadth;
			result.height = this->height - a.height;
			
			return result;
		}
};


int main(){
	Box b1(50,60,70);
	Box b2(1,2,3);
	Box b3,b4;
	
	b1.printParam();
	b1.printVolume();
	
	b2.printParam();
	b2.printVolume();
	
	cout<<"Before Addition : "<<endl;
	b3.printParam();
	b3 = b1 + b2; 
	cout<<"After Addition : "<<endl;
	b3.printParam();
	
	b4 = b2-b1;
	b4.printParam();
	
}
