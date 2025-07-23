#include<stdio.h>
int main(){
	float num,sum=0;
	int count=0;
	float avg;
	while(1){
	printf("Enter number (Negative number will stop the program and show your Final Result): ");
	scanf("%f",&num);
	if(num<0){
		break;}
	sum+=num;
	count++;
	}
    if(count>0){
    	avg=sum/count;
    	printf("%.2f is the average of %d numbers.",avg,count);}
    else{
    	printf("There is no average because your first number entered is negative.");}	
}
