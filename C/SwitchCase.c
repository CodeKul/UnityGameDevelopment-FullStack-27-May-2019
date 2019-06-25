/*
Switch Case
*/
#include<stdio.h>

int n;
char choice;

int main(){
	do{
		
		printf("Please Input Number : ");
		scanf("%d",&n);
		
		switch(n){
			case 1:
				printf("Sunday \n"); 
			break;
			
			case 2:
				printf("Monday \n"); 
			break;
			
			case 3: 
				printf("Tuesday \n");
			break;
			
			case 4: 
				printf("Wednesday \n");
			break;
			
			case 5:
				printf("Thursday \n"); 
			break;
			
			case 6: 
				printf("Friday \n");
			break;
			
			case 7: 
				printf("Saturday \n");
			break;
			
			default: 
				printf("Invalid Input \n");
			break;
		}
		
		
		printf("Do You Want to Continue? <Y/N>");
		scanf("  %c", &choice);
		
	
	} while(choice == 'y' || choice == 'Y');
}
