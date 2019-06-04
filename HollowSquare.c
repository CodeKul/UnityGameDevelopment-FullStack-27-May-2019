/*
Hollow Square
*/

#include<stdio.h>

int rows,column;

int main(){
	printf("Enter No. of Rows");
	scanf("%d",&rows);
	printf("Enter No. of Column");
	scanf("%d",&column);
	
	int i,j;
	for(i=1;i<=rows;i++){
		for(j=1;j<=column;j++){
			if(i == 1 || i == rows || j == 1 || j == column){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
}
