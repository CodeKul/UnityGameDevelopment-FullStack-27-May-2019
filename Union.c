/*UNIONS*/

#include<stdio.h>

union Test {
	int x,y;
	char str[10];
};

int main(){
	
	union Test t;
	
	t.x = 10;
	printf("Value after x = 10 is \n x: %d \t y = %d \t string : %s",t.x,t.y,t.str);
	
	gets(t.str);
	printf("Value after x = 10 is \n x: %d \t y = %d \t string : %s",t.x,t.y,t.str);
}
