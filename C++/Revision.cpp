/*Revision*/

#include<iostream>
using namespace std;

class Box{
	private:
		int lenght;
		int breadth;
		int height;
	
	public:	
	
	static int count;
	
	
	Box(int l=10,int b=10,int h=10){
		cout<<"in Parameterized Constructor!";
		lenght = l;
		breadth = b;
		height = h;
		count++;
	}
	
	~Box(){
		cout<<"Object Destroyed"<<endl;
		count--;
	}
	
	void setParam(int l,int b,int h){
		lenght = l;
		breadth = b;
		height = h;
	}
	
	inline void getParam();
	friend int getVolume(Box);
	
	void compare(Box temp){
		if(temp.lenght > this->lenght){
			cout<<"First box is bigger";
		}else{
			cout<<"Second Box is Bigger";
		}
	}
};

void Box::getParam(){
	cout<<"\n Lenght : "<<lenght<<" Breadth : "<<breadth<<" Height : "<<height<<endl;
}

int getVolume(Box b){
	return b.lenght * b.breadth * b.height;
}
s
int Box::count;
int main(){
	Box a;
	Box b(11,22,33);
	//Box as,fg,uoi,cxv,e,hgfg;
	cout<<"Total objects are : "<<Box::count<<endl;
	a.getParam();
	b.getParam();
//	b1.setParam(10,20,30);

}

