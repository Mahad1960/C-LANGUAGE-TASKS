#include<stdio.h>
int main(){
	int matchsticks=21,user,comp;
	printf("=====================");
	printf("\n **MATCHSTICK GAME**\n");
	printf("=====================\n");
	printf("     **RULES**\n");
	printf("    ===========\n");
	printf("\n1.Pick 1,2,3,4 Matchsticks.");
	printf("\n2.Whoever will pick last matchstick will lose.\n");
	while(matchsticks>1){
		printf("\nMATCHSTICKS LEFT: %d",matchsticks);
		printf("\nPick 1,2,3,4 matchsticks: ");
		scanf("%d",&user);
		if(user<1 || user>4){
			printf(" \n**Invalid Choice.Pick matchsticks between 1 and 4**\n");
			continue;}  
		matchsticks-=user;
		if(matchsticks==1){
			printf("\nOnly One Matchstick Left.You lose!");
			break;}
		comp=5-user;
		printf("Computer picks %d matchsticks.",comp);
		matchsticks-=comp;
		if(matchsticks==1){
			printf("\nOnly One Matchstick Left.Computer wins!");
			break;}			
	}
}
