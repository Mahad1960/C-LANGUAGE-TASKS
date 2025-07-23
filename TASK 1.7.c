#include<stdio.h>
int count_frequency(char str[],char ch){
	int i,count=0;
	for(i=0;str[i]!='\0';i++){
		if(str[i]==ch){
			count++;
		}
	}
	printf("\n%c character appears in your text %d times.",ch,count);
}
int main(){
	char str[50],ch;
	printf("Enter Any Text In Your String: ");
	scanf("%[^\n]",str);
	getchar();
	printf("Enter Any Character In Your String: ");
	scanf("%c",&ch);
	count_frequency(str,ch);
}