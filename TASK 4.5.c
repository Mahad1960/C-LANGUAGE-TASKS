#include<stdio.h>
int main(){
	int id,unit;
	float charge,amount,surcharge;
	char name[25];
	printf("Enter your Name:");
    gets(name);
    printf("Enter your Bill ID:");
    scanf("%d",&id);
    printf("Enter your Units consumed this month:");
    scanf("%d",&unit);
    if(unit>=0 && unit<=199){
    	charge=unit*16.20;
    	printf("%.2f are the charges of your Bill.",charge);
    	if(charge>=18000){
    		surcharge=charge*0.15;
    		printf("\n%.2f is the surcharge amount.",surcharge);
    		amount=surcharge+charge;
    		printf("\n%.2f is your bill after adding surcharge amount.",amount);}
    	else{
    		printf("\nThere is no surcharge amount added on your bill.");}	
	}
	else if(unit>=200 && unit<300){
    	charge=unit*20.10;
    	printf("%.2f are the charges of your Bill.",charge);
    	if(charge>=18000){
    		surcharge=charge*0.15;
    		printf("\n%.2f is the surcharge amount.",surcharge);
    		amount=surcharge+charge;
    		printf("\n%.2f is your bill after adding surcharge amount.",amount);}
    	else{
    		printf("\nThere is no surcharge amount added on your bill.");}	
	}
	else if(unit>=300 && unit<500){
    	charge=unit*27.10;
    	printf("%.2f are the charges of your Bill.",charge);
    	if(charge>=18000){
    		surcharge=charge*0.15;
    		printf("\n%.2f is the surcharge amount.",surcharge);
    		amount=surcharge+charge;
    		printf("\n%.2f is your bill after adding surcharge amount.",amount);}
    	else{
    		printf("\nThere is no surcharge amount added on your bill.");}	
	}
	else if(unit>=500){
    	charge=unit*35.90;
    	printf("%.2f are the charges of your Bill.",charge);
    	if(charge>=18000){
    		surcharge=charge*0.15;
    		printf("\n%.2f is the surcharge amount.",surcharge);
    		amount=surcharge+charge;
    		printf("\n%.2f is your bill after adding surcharge amount.",amount);}
    	else{
    		printf("\nThere is no surcharge amount added on your bill.");}	
	}
	else{
		printf("***Invalid Units Entered***");}
}
