/*Write Tabel to file*/

#include<stdio.h>

int main(){
	
	int num,i;
	FILE *fp;
	char data[50];
	
	fp = fopen("Table.txt","a");
	
	if(fp == NULL){
		printf("File not Open");
	}else{	
		printf("\nEnter Number : ");
		scanf("%d",&num);
		
		for(i = 1; i <= 10 ; i++){
			fprintf(fp,"\n%d X %d = %d\n",num,i,(num*i));
		}
		printf("File Write Successful");
		fclose(fp);
		
	}
}
