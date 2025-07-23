#include<stdio.h>
int main(){
	int i,count=0;
	char text[30];
	printf("Enter Any Text:\n");
	scanf("%[^\n]",text);
	for(i=0;text[i]!='\0';i++){
        if(text[i]!=' '){ 
            count++;
        }
    }
	printf("The Above Sentence has %d Length Without Spaces.",count);
}
