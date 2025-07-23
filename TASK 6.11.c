#include<stdio.h>
#include<math.h>
int main(){
	int n=0,num,original,temp,remainder,sum=0;
	printf("=====================");
	printf("\n**ARMSTRONG NUMBER**\n");
	printf("=====================");
	printf("\nEnter a nummber: ");
	scanf("%d",&num);
	temp=num;
	original=num;
	while(temp!=0){
		temp/=10;
		n++;
	}
	temp=num;
	while(temp!=0){
		remainder=temp%10;
		sum+=pow(remainder,n);
		temp/=10;
	}
	if(sum==original){
		printf("%d number is an Armstrong Number.",num);}
	else{
		printf("%d number is not an Armstrong Number.",num);}
}
