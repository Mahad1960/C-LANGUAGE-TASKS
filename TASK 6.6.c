#include<stdio.h>
int main(){
	int limit,i,count=0,num=2,product=1;
	printf("==================");
	printf("\n**PRIME NUMBERS**\n");
	printf("==================");
	printf("\nEnter the outcomes you want: ");
	scanf("%d",&limit);
	printf("The Prime Numbers are:");
	if(limit<=0){
		printf("Enter Positive Range.");
		return 0;}
	while(count<limit){
		int isprime=1;
		for(i=2;i*i<=num;i++){
			if(num%i==0){
				isprime=0;
				break;}
			}
			if(isprime){
				printf(" %d",num);
				product*=num;
				count++;}
			num++;		
	}
	printf("\nThe Product of first %d Prime numbers is %d.",limit,product);
}
