/*
LCM
*/

#include<stdio.h>

int num1,num2;
int max,lcm;

int main(){
	printf("Enter Number 1 : ");
	scanf("%d",&num1);
	printf("Enter Number 2 : ");
	scanf("%d",&num2);
	
	if(num1 > num2){
		max = num1;
	}else{
		max = num2;
	}
	
	while(1){
		if(max % num1 == 0 && max % num2 == 0){
			//lcm found = max
			lcm = max;
			break;
		}else{
			max = max + max;
		}
	}
	printf("LCM : %d",lcm);
}
