#include<stdio.h>
int main(){
	int a,b,i;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("\n NEW VERSION: \n"); 
	if(a>b){
		printf(" *Error*");
		return 0;}
	for(i=a;i<=b;i++){
		if(i>9){
			if(i%2==0){
				printf("Even.\n");}
			else{
				printf("Odd.\n");}		
		    }
		else if(i>=0 && i<=9){
			if(i==0){
				printf("Zero.\n");}
			else if(i==1){
				printf("One.\n");}
			else if(i==2){
				printf("Two.\n");}	
			else if(i==3){
				printf("Three.\n");}
			else if(i==4){
				printf("Four.\n");}		
			else if(i==5){
				printf("Five.\n");}
			else if(i==6){
				printf("Six.\n");}	
			else if(i==7){
				printf("Seven.\n");}
			else if(i==8){
				printf("Eight.\n");}
			else{
				printf("Nine.\n");}			
		}
		else{
			printf("Less than zero.\n");}    
	}
}
