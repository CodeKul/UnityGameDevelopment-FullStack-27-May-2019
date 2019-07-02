/*This Pointer*/

#include<iostream>
using namespace std;

class Box{
	private:
		int length;
		int breadth;
		int height;
		
	public:
		static int count;
		
		Box(int l,int b,int h){
			length = l;
			breadth = b;
			height = h;
			cout<<"Object Created"<<endl;
			
			count++;
		}
		
		int getVolume(){
			return length * breadth * height; 
		}
		
		void compare(Box b){
		 	if(b.getVolume() > this->getVolume()){
		 		cout<<"Greater volume : "<<b.getVolume();
			}else{
				cout<<"Greater volume : "<<this->getVolume();
			}
		}
};

int Box::count = 0;

int main(){
	
	Box b1(10,10,10);
	Box b2(20,20,20);
	Box b3(20,20,20);
	Box b4(20,20,20);
	Box b5(20,20,20);
//	cout<<"Volume of B1 : "<<b1.getVolume()<<endl;
//	cout<<"Volume of B2 : "<<b2.getVolume()<<endl;
	
	//b2.compare(b1);	
	
	cout<<"count is : "<< Box::count; 
	//cout<<"Count is : "<<Box::count;
	return(0);
}









