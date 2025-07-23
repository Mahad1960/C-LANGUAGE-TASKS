#include<stdio.h>
int main(){
	int i,sum=0;
	for(i=100;i<=200;i++){
		if(i%9==0){
			printf("%d number is divisible by 9.\n",i);
			sum+=i;
		}
	}
	printf("\n");
	printf("\nThe Sum of numbers divisible by 9 is %d.",sum);
}
