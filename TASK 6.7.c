#include<stdio.h>
int main(){
	int start,end,num,i;
	printf("Enter starting number: ");
	scanf("%d",&start);
	printf("Enter ending number: ");
	scanf("%d",&end);
	if(end<start){
		printf("\n WARNING : You have entered starting number greater than ending number.\n");
		return 0;}	
	printf("The Prime Numbers between %d and %d are:",start,end);			
	for(num=start;num<=end;num++){
		if(num<2){
			continue;}
		int isprime=1;
		for(i=2;i*i<=num;i++){
			if(num%i==0){
				isprime=0;
				break;}
		    }
	        if(isprime){
	            printf(" %d",num);}		
	    }
    }
