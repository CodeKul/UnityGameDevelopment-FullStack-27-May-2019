/*Array with Pointer*/

#include<stdio.h>



int main(){

	int arr[5];
	int *ptr[5];
	int i;
		
	//ptr = arr;
	printf("Enter Elements : ");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	
	for(i=0;i<5;i++){
		ptr[i] = &arr[i];
	}
//	ptr = arr;
	for(i=0;i<5;i++){
		printf("%d",*ptr[i]);
	}
}
