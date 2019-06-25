/*Structers*/
#include<stdio.h>
#include<string.h>

struct Employee{
	char name[10];
	int salary;
};

void display(struct Employee *e,int size){
	int i;
	for(i = 0;i<size;i++){
		printf("\nEmployee Details %d",(i+1));
		printf("\nName : %s",e[i].name);
		printf("\nSalary : %d",e[i].salary);	
	}
}

int main(){
//	struct Employee e1,e2;
//	
//	printf("Enter Name : ");
//	gets(e1.name);
//	
//	printf("Enter Salary : ");
//	scanf("%d",&e1.salary);
//
//	display(e1);

//	printf("\n Name : %s \t salary : %d",e1.name,e1.salary);

	struct Employee emp[5];
	int i;
	for(i = 0;i<5;i++){
		printf("\nEnter %d Employee Details",(i+1));
		printf("\nName : ");
		scanf("%s",&emp[i].name);
		printf("\nSalary : ");
		scanf("%d",&emp[i].salary);	
	}
	display(emp,5);
//	for(i = 0;i<5;i++){
//		printf("\nEmployee Details %d",(i+1));
//		printf("\nName : %s",emp[i].name);
//		printf("\nSalary : %d",emp[i].salary);	
//	}
}
