/*Pointers*/

#include<stdio.h>

int main(){
	int a = 10;
	int b = 20;
	int sum;
	int *ptr1,*ptr2;
	
	ptr1 = &b;
	ptr2 = &a;
	
	
	sum = a+b;
	sum = *ptr1 +*ptr2;
	
	printf("\nSum is : %d",sum);
	
	printf("\nAddress of Variable 1 = %d",&a);
	
	printf("\nAddress of Variable 1 = %d",*ptr1);
	
	printf("\nVariable 2 = %d",b);
}
