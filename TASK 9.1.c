#include<stdio.h>
#include<string.h>
int palindrome(char text[]){
	int left=0,right=strlen(text)-1;
	while(left<right){
		if(text[left]!=text[right]){
		   return 0;}
		else{
			left++;
			right--;}
	}
	return 1;
}
int main(){
   char text[20];
   int i;
   for(i=0;i<5;i++){
   printf("Enter your text: ");
   scanf("%s",text);
   if(palindrome(text)){
      printf("%s text is palindrome.\n",text);}
   else{
   	  printf("%s text is not palindrome.\n",text);}	
   }  
}
