#include<stdio.h>
int main(){
	while(1){
	int choice;
	printf("\n=================\n");
	printf(" **CALCULATION**\n");
	printf("=================");
	printf("\nEnter 1 To Perform Addition:");
	printf("\nEnter 2 To Perform Subtraction:");
	printf("\nEnter 3 To Perform Multiplication:");
	printf("\nEnter 4 To Exit Calculation:\n");
	printf("\nEnter Your Choice: ");
	scanf("%d",&choice);
	if(choice==1){
		int a,b,answer;
		printf("Enter 1st Number:");
		scanf("%d",&a);
		printf("Enter 2nd Number:");
		scanf("%d",&b);
		answer=a+b;
		printf("Addition of %d and %d is %d.\n",a,b,answer);
	}
	else if(choice==2){
		int a,b,answer;
		printf("Enter 1st Number:");
		scanf("%d",&a);
		printf("Enter 2nd Number:");
		scanf("%d",&b);
		answer=a-b;
		printf("Subtraction of %d and %d is %d.\n",a,b,answer);
	}
	else if(choice==3){
		int a,b,answer;
		printf("Enter 1st Number:");
		scanf("%d",&a);
		printf("Enter 2nd Number:");
		scanf("%d",&b);
		answer=a*b;
		printf("Multiplication of %d and %d is %d.\n",a,b,answer);
	}
	else if(choice==4){
		printf("**THANK YOU! FOR USING OUR SERVICES**");
		return 0;
	}
	else{
		printf("**INVALID CHOICE**");
		return 0;
	}
  }
}
