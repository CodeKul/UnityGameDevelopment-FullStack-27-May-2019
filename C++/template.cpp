/*Templates*/

#include<iostream>
using namespace std;

template <class T>
T Max(T x, T y){
	if(x>y){
		return x;
	}else{
		return y;
	}	
	//return (x>y) ? x : y;
}

template <class T>
class Box{
	public:
		T h;
		T w;
		
		Box(T height,T width){
			h = height;
			w = width;
		}
		
		int Area(){
			return (h*w);
		}
};


int main(){
//	char a,b;
//	cout<<"Enter numbers : ";
//	cin>>a;
//	cout<<"Enter Number 2 :";
//	cin>>b;
//	cout<<"Large Number is : "<<Max(a,b);	

	Box<int> b(10,20);
	cout<<"Area is : "<<b.Area();
	
	Box<float> b1(5.2,6.4);
	cout<<"Area is : "<<b1.Area();
}
