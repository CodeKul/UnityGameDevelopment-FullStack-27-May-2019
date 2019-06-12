/*Sum of Natural numbers using Rescursion*/

#include<stdio.h>

int SumOfNumber(int start,int end);
int SumOfNumberUpper(int end);
int main(){
	int upper,lower,sum;
	
	printf("Enter Upper Limit : ");
	scanf("%d",&upper);
	
//	printf("Enter Lower Limit : ");
//	scanf("%d",&lower);
	
	//sum = SumOfNumber(lower,upper);
	sum = SumOfNumberUpper(upper);
	printf("\n sum = %d",sum);
}

int SumOfNumber(int start,int end){
	
	if(start == end){
		return start;
	}else{
		return start + SumOfNumber(start+1,end);
	}
}

int SumOfNumberUpper(int end){
	if(end == 1){
		return end;
	}else{
		return end + SumOfNumberUpper(end-1);
	}
}
