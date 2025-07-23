#include<stdio.h>
#include<ctype.h>
int main(){
	int i,j,choice;
	char text[3][20];
	printf("Enter Your Name:\n");
	for(i=0;i<3;i++){
	scanf("%s",text[i]);}
	printf("\nPress 1 For Lowercase:");
	printf("\nPress 2 For Uppercase:");
	printf("\nEnter Your Choice: ");
	scanf("%d",&choice);
	if(choice==1){
	printf("\n**FORMATTING**\n");
	printf("\n");
	for(i=0;i<3;i++){
        for(j=0;text[i][j]!='\0';j++){
            text[i][j]=tolower(text[i][j]);
        }
      }
    }
    else if(choice==2){
    printf("\n**FORMATTING**\n");
	printf("\n");	
    for(i=0;i<3;i++){
        for(j=0;text[i][j]!='\0';j++){
            text[i][j]=toupper(text[i][j]);
        }
      }
    }
    else{
    	printf("\n**INVALID CHOICE**");
    	return 0;
	}
    for(i=0;i<3;i++){
        printf("%s\n",text[i]);
    }
    printf("\n");
}