#include<stdio.h>
int main(){
	int i,count=0;
	char text[40];
	printf("Enter Any Text: ");
	scanf("%[^\n]",text);
	printf("Original Text: %s",text);
	for(i=0;text[i]!='\0';i++){
			count++;
	    }
	printf("\nReverse Order Text: ");
    for(i=count;i>=0;i--){
		printf("%c",text[i]);
	} 
}