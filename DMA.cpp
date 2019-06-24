/*Dynamic Memory allocation*/

#include<stdio.h>
#include<stdlib.h>

int *ptr,*ptr1;
int size,i,newsize;

int main(){

	printf("Please Enter Size : ");
	scanf("%d",&size);

	ptr = (int *) malloc(size * sizeof(int));
//	ptr1 = (int *) calloc(size, sizeof(int));
	
	if(ptr == NULL){
		printf("\nMemory Wasn't Allocated!'");
		exit(0);
	}else{
		printf("\nMemory Was Allocated!'");
		
		printf("\nPlease enter MALLOC Elements\n");
		
		for(i = 0;i<size;i++){
			scanf("%d",&ptr[i]);
		}
		
		printf("\Elements\n");
		for(i = 0;i<size;i++){
			printf("\n%d",ptr[i]);
		}
		
		printf("Enter New Size : ");
		scanf("%d",&newsize);
		
		ptr = (int *)realloc(ptr,newsize);
		
	}
}
