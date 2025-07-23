#include<stdio.h>
int vowel(char text[]){
	int i,count=0;
	for(i=0;text[i]!='\0';i++){
		if(text[i]=='a' || text[i]=='e' || text[i]=='i' || text[i]=='o' || text[i]=='u' || text[i]=='A' || text[i]=='E' || text[i]=='I' || text[i]=='O' || text[i]=='U'){
			count++;
		}
	}
	return count;
}
int main(){
	char text[30];
	printf("Enter Any Text:\n");
	scanf("%[^\n]",text);
	int count=vowel(text);
	printf("\nThere are %d vowels in your text.",count);
}