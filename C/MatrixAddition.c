/*
2D Array - Matrices
*/

#include <stdio.h>
#define SIZE 3

int main(){
	int a[SIZE][SIZE];
	int b[SIZE][SIZE];
	int sum[SIZE][SIZE];
	
	int row,col;
	
	printf("Enter Elements of Array 1 : \n");
	for(row = 0;row<SIZE;row++){
		for(col = 0; col<SIZE ;col++){
			scanf("%d",&a[row][col]);
		}
	}
	
	printf("Enter Elements of Array 2 : \n");
	for(row = 0;row<SIZE;row++){
		for(col = 0; col<SIZE ;col++){
			scanf("%d",&b[row][col]);
		}
	}

	for(row = 0;row<SIZE;row++){
		for(col = 0; col<SIZE ;col++){
			sum[row][col] = a[row][col] + b[row][col];
			
		}
	}
	
	printf("\n Sum is : \n");
	for(row = 0;row<SIZE;row++){
		for(col = 0; col<SIZE ;col++){
			printf("%d \t",sum[row][col]);
		}
		printf("\n");
	}
	
}

