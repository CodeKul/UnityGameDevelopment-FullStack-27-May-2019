/**/

#include<iostream>
using namespace std;

class Student{
	public:
		
		int rno;
		
		void getRno(int temp = 0){
			rno = temp;
		}	
		void putRno(){
			cout<<"Roll No : "<<rno<<endl;
			//return rno;
		} 
};

class Test: virtual public Student{
	public:
		int mark1,mark2;
		
		void getMarks(int temp1 = 0, int temp2 = 0){
			mark1 = temp1;
			mark2 = temp2;
		}
		
		void putMarks(){
			cout<<"Subject 1: "<<mark1<<endl;
			cout<<"Subject 2: "<<mark2<<endl;
		}
	
};

class Sports : public virtual Student{
	public:
		int score;
		
		void getScore(int temp = 0){
			score = temp;
		}
		
		void putScore(){
			cout<<"Score is: "<<score<<endl;
		}
};

class Result:public Test, public Sports{
	public:
		int total;
		void display(){
			total = mark1 + mark2 + score;
			putRno();
			putMarks();
			putScore();
			cout<<"Total : "<<total<<endl;
		}
	
};

int main(){
	Result r1,r2;
	r1.getRno(7);
	r1.getMarks(100,9);
	r1.getScore(50);
	r1.display();
	
	r2.getRno(77);
	r2.getMarks(10,90);
	r2.getScore(50);
	r2.display();
}
