/*
Data Types
*/

#include<stdio.h>

int a;
float b;
double c;
char d;

int main(){

a = 10.52314;
b = 10.52314;
c = 10.5231412312312;
d = 'd';

	printf("%d \t",a);
	printf("%d \n",sizeof(a));
	
	printf("%f \t",b);
	printf("%d \n",sizeof(b));
	
	printf("%lf \t",c);
	printf("%d \n",sizeof(c));
	
	printf("%c \t",d);
	printf("%d \n",sizeof(d));
	
}
