#include<stdio.h>
int main(){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num==0){
		printf("%d number is not multiple of 3.",num);}	
	else if(num%3==0){
		printf("%d number is multiple of 3.",num);}
	else{
		printf("%d number is not multiple of 3.",num);}		
}
