#include<stdio.h>
int main(){
	int age,cond;
	float weight;
	printf("Did You Have Any Medial Disease?");
	printf("\nPress 1 for (YES) or 0 for (NO): ");
	scanf("%d",&cond);
	if(cond==0){
		printf("Sorry,you are not fulfilling our requirements.");
		return 0;}
	else{
		printf("\nEnter further following details.");
		printf("\nEnter your age: ");
		scanf("%d",&age);
		printf("Enter your weight: ");
		scanf("%f",&weight);
		if((age>=16 && age<=60) && (weight>=50 && weight<=100)){
			printf("\nYou are eligible for our GYM memberhip.");}
		else{
			printf("\nYou are not eligible for our GYM memberhip.");}	
	}	
}
