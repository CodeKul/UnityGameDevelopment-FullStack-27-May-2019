/*File Handling - read*/

#include<stdio.h>
#include<string.h>

int main(){
	
	FILE *fp;
	
	char data[50];
	
	fp = fopen("TEST.txt","r");
	
	if(fp == NULL){
		printf("File Not Opened");
	}else{
		
		while((fgets(data,50,fp)) != NULL){
			printf("%s",data);
		}
		
		printf("\nRead Successful");
		fclose(fp);
	}
}
