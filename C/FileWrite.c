/*FILE HANDLING*/

#include<stdio.h>
#include<string.h>

int main(){
	
	char data[50];
	
	FILE *fp;
	
	fp = fopen("TEST.txt","a");
	
	if(fp == NULL){
		printf("File not Opened\n");
	}else{
		printf("File Opened\n");
		printf("Enter String to write in the file : ");
		gets(data);
		
		if(strlen(data) > 0 ){
			fputs(data,fp);
			fputs("\n",fp);
		}
		
		printf("\nData has been Written");
		fclose(fp);
	}
	
}
