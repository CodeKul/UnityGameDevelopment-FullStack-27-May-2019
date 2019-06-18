/*Strings*/

#include<stdio.h>
#include<string.h>

int main(){
	
	char str1[50] = "CodeKul";
	char str2[20];
	int sum;
	
	printf("%s\n",str1);
	
	printf("Enter String : ");
	//scanf("%s",str2);
	gets(str2);
	
	puts(str2);
	//printf("%s\n",str2);
	sum = strlen(str1);
	printf("\n%d",sum);
	
	strcat(str1,str2);
	
	puts(str1);
	
	
}
