#include<stdio.h>
int main(){
	char text[50],palindrome[50],found=1;
	printf("Enter any Text: ");
	scanf("%s",text);
	int i,length=0;
	while(text[length]!='\0'){
		length++;
	}
	for(int i=0;i<length/2;i++){
        if(text[i]!=text[length-1-i]){
            found=0;  
            break;}
    }
	if(found){
		printf("The entered text is palindrome.");}
	else{
		printf("The entered text is not palindrome.");}
}
