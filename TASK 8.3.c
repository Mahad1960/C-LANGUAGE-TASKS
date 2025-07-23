#include<stdio.h>
int main(){
	int a,b,i,j,isprime;
	printf("Enter Starting Range: ");
	scanf("%d",&a);
	printf("Enter Ending Range: ");
	scanf("%d",&b);
	if(a>b){
		printf("\n *ERROR* Starting range is greater than ending range.\n");
		return 0;}
	if(a<0 || b<0){
        printf("\n *ERROR* Prime numbers are only defined for positive integers.\n");
        return 0;}	
	for(i=a;i<=b;i++){
		if(i>=0 && i<2){
		    continue;}	
		isprime=1;    
		for(j=2;j*j<=i;j++){
			if(i%j==0){
				isprime=0;
				break;}	
		}
	if(isprime){
		printf("\n%d is prime number between %d and %d.",i,a,b);}	
	}
}
