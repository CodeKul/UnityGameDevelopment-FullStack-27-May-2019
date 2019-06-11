/*Funtions*/
#include<stdio.h>

void max(int x, int y);

void temp(int z){
	z = 20;
	printf("\n%d\n",z);
}

int main(){

	int a,b;
	
	printf("Enter Num1 : ");
	scanf("%d",&a);
	
	printf("Enter Num2 : ");
	scanf("%d",&b);

	max(a,b);
//	a = 10;
//	b = 20;
	
//	temp(a);
	
//	printf("%d",a);
}

void max(int x,int y){
	if(x>y){
		printf("\n %d is greater",x);
	}else{
		printf("\n %d is greater",y);
	}
}

