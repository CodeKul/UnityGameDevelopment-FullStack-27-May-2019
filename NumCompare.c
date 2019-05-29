/*
Program to find Greatest Number
*/

#include<stdio.h>

int num1;
int num2;
int num3;

int main(){
	printf("Please Input Num 1 : ");
	scanf("%d",&num1);
	printf("Please Input Num 2 : ");
	scanf("%d",&num2);
	printf("Please Input Num 3 : ");
	scanf("%d",&num3);
	
	//Simple IF-Else
//	if(num1 > num2){
//		printf(" %d is Greater",num1);
//	} else  {
//		printf("%d is Greater", num2);
//	}

	//IF-Else ladder
//	if(num1 > num2){					
//		printf(" %d is Greater",num1);
//	} else if(num2 > num1){
//		printf(" %d is Greater",num2);
//	}else if(num1 == num2){
//		printf("Numbers Are Equal");
//	}
	
//	if(num1 > num2){
//		if(num1 > num3){
//			printf("%d is Greatest",num1);
//		}else{
//			printf("%d is Greatest",num3);	
//		}
//	}else {
//		if(num2 > num3){
//			printf("%d is Greatest",num2);
//		}else {
//			printf("%d is Greatest",num3);
//		}
//	}

	if(num1 > num2 && num1 > num3){
		printf("%d Is Greater",num1);
	}else if(num2 > num1 && num2 > num3){
			printf("%d Is Greater",num2);
	}else {
		printf("%d Is Greater",num3);
	}
}







