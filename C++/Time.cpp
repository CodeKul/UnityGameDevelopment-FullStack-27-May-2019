/*Time*/

#include<iostream>
using namespace std;

class Time{
	public : 
		int h,m,s;
	
	Time(int hours = 0, int min = 0, int sec = 0){
		h = hours;
		m = min;
		s = sec;
	}
	
	void displayTime(){
		cout<<"Time is : "<<h<<":"<<m<<":"<<s<<endl;
	}
	
	void calculateSeconds(){
		int ans;
		ans = s + (m*60) + (h*3600);
		cout<<"Time in seconds is : "<<ans<<endl;
	}
};

int main(){
	Time t(1,2,3);
	t.displayTime();
	t.calculateSeconds();
}
