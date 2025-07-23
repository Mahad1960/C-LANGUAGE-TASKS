#include<stdio.h>
int main(){
	int a,b,result;
	char c;
	printf("Enter 1st Number:");
	scanf("%d",&a);
	printf("Enter 2nd Number:");
	scanf("%d",&b);
	getchar();
	printf("Enter the Operation(+,-,*,/) you would like to perform:");
	scanf("%c",&c);
	switch(c){
		case '+':
		result=a+b;
		printf("%d is the addition of %d and %d.",result,a,b);
		break;
		case '-':
		result=a-b;
		printf("%d is the subtraction of %d and %d.",result,a,b);
		break;
		case '*':
		result=a*b;
		printf("%d is the multiplication of %d and %d.",result,a,b);
		break;
		case '/':
		result=a/b;
		printf("%d is the division of %d and %d.",result,a,b);
		break;
		default:
		printf("You have entered Invalid Operation.");
		break;
	}
}
