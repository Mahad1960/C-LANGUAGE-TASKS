#include<stdio.h>
int main(){
	printf("=============");
	printf("\n **PATTERN**\n");
	printf("=============\n");
	printf("\n");
	int i,j;
	for(i=0;i<=6;i++){
		if(i==0 || i==2 || i==4 || i==6){
		    printf(" %d   %d   %d   %d ",i,i,i,i);
		    printf("\n");}
		else{
			printf("     %d   %d      ",i,i);
			printf("\n");}
	}
}
