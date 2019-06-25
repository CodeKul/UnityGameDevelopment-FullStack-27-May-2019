/*
Operators.
*/

#include<stdio.h>

int a,b;
int result;
int main(){
	
	printf("Please Input no.1 : ");
	scanf("%d",&a);
	printf("Please Input no.2 : ");
	scanf("%d",&b);
	
	result = a + b;
	printf("Addition is : %d\n",result);
	
	result = a - b;
	printf("subtraction is : %d\n",result);
	
	result = a * b;
	printf("multiplication is : %d\n",result);
	
	result = a / b;
	printf("division is : %d\n",result);
	
	result = a % b;
	printf("remainder is : %d\n",result);
	
	b++;
	printf("Unary Operator + : %d\n",b);
	
	a--;
	printf("Unary Operator - : %d\n",a);
	
		
}
