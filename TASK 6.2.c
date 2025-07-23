#include<stdio.h>
int main(){
	int limit,first=0,second=1,i,next;
	printf("=====================");
	printf("\n **FIBONACCI SEIES**");
	printf("\n=====================\n");
	printf("How many outcomes you want: ");
	scanf("%d",&limit);
	for(i=0;i<limit;i++){
		if(i<=1){
			next=i;
			printf(" %d",next);}
		else{
			next=first+second;
			first=second;
			second=next;
		    printf(" %d",next);}
	}
}
