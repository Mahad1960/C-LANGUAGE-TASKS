#include<stdio.h>
int main(){
	char answer;
	printf("Enter any digit or alphabet or special character.");
	scanf("%c",&answer);
	if(answer>='a' && answer<='z'){
		printf("%c is Lower Case Alphabet.",answer);}
	else if(answer>='A' && answer<='Z'){
		printf("%c is Upper Case Alphabet.",answer);}
	else if(answer>='0' && answer<='9'){
		printf("%c is a Digit.",answer);}
	else{
		printf("%c is a special character.",answer);}   
}
