/*
Program to find Area of Circle.

Require Constant PI
	Require Variable for Radius.
*/

#include<stdio.h>
#include<math.h>

#define PI 3.14

int r;

int main(){
	printf("Please Give Radius : ");
	scanf("%d",&r);
	float area = PI * r * r;
	
	printf("%f",area);
	
	printf("Please Give Radius : ");
	scanf("%d",&r);
	area = PI * r * r;
	
	printf("%f",area);
	
	return 0;
}
