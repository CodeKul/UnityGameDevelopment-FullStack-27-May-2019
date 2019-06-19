/*Swap numbers with pointers*/

#include<stdio.h>

int num1,num2;
int *ptr1,*ptr2;

void swap(int *p1,int *p2);
int main(){
	
	printf("Enter Num 1 : ");
	scanf("%d",&num1);
	printf("Enter Num 2 : ");
	scanf("%d",&num2);
	
	
	swap(&num1,&num2);
}

void swap(int *p1,int *p2){
	
	printf("NUMBERS BEFORE SWAP : %d \t %d",*p1,*p2);
	
	int temp;
	
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	
	printf("NUMBERS after SWAP : %d \t %d",*p1,*p2);
}
