#include<stdio.h>
int main(){
	int a,b,i,hcf,lcm;
	printf("Enter First Number: ");
	scanf("%d",&a);
	printf("Enter Second Number: ");
	scanf("%d",&b);
    int min=(a<b)?a:b;
    for(i=1;i<=min;i++){
    	if(a%i==0 && b%i==0){
    		hcf=i;
		}
	}
	printf("\nThe HCF of %d and %d number is %d.\n",a,b,hcf);
	lcm=(a*b)/hcf;
	printf("The LCM of %d and %d number is %d.",a,b,lcm);
}
