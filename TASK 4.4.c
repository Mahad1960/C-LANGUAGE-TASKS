#include<stdio.h>
int main(){
	float cost,discount,payable;
	printf("Enter Your Purchasing Amount:");
	scanf("%f",&cost);
	if(cost>500 && cost<2000){
		discount=cost*0.05;
		printf("%.2f is the discount on your purchasing amount.",discount);
		payable=cost-discount;
		printf("\n%.2f is the payable amount after discount.",payable);}
	else if(cost>=2000 && cost<4000){
		discount=cost*0.01;
		printf("%.2f is the discount on your purchasing amount.",discount);
		payable=cost-discount;
		printf("\n%.2f is the payable amount after discount.",payable);}
	else if(cost>=4000 && cost<6000){
		discount=cost*0.02;
		printf("%.2f is the discount on your purchasing amount.",discount);
		payable=cost-discount;
		printf("\n%.2f is the payable amount after discount.",payable);}
	else if(cost>=6000){
		discount=cost*0.35;
		printf("%.2f is the discount on your purchasing amount.",discount);
		payable=cost-discount;
		printf("\n%.2f is the payable amount after discount.",payable);}	
	else{ 
	    printf("There is no discount on your %.2f purchasing amount.",cost);}  	 		
}
