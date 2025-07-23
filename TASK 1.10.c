#include<stdio.h>
int sumevennumbers(int start,int end){
	int i,sum=0;
	for(i=start;i<=end;i++){
		if(i%2==0){
			sum+=i;
	    }
	}
	return sum;
}
int main(){
	int start,end;
	printf("Enter Starting Number: ");
	scanf("%d",&start);
	printf("Enter Ending Number: ");
	scanf("%d",&end);
	if(start>end){
		printf("\n**INVALID RANGE ENTERED**");
		return 0;
	}
	int sum=sumevennumbers(start,end);
	printf("\n%d is sum of even numbers between %d and %d.",sum,start,end);
	if(sum>100){
		printf("\nThe Sum Exceeds 100!");
	}
}