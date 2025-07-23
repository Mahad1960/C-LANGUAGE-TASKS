#include<stdio.h>
#include<string.h>
#include<ctype.h>
void reverseString(char str[],char reversed[]){
    int len=strlen(str);
    for(int i=0;i<len;i++){
        reversed[i]=str[len-1-i];
    }
    reversed[len]='\0';
}
int countVowels(char str[]){
    int count=0;
    for(int i=0;str[i];i++){
        char ch=tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            count++;
        }
    }
    return count;
}
int countConsonants(char str[]){
    int count=0;
    for(int i=0;str[i];i++){
        char ch=tolower(str[i]);
        if(isalpha(ch) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')){
            count++;
        }
    }
    return count;
}
int main(){
    char str[100],reversed[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str); 
    reverseString(str,reversed);
    printf("Reversed string: %s\n",reversed);
    if(strcmp(str,reversed)== 0){
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }
    int vowels=countVowels(str);
    int consonants=countConsonants(str);
    printf("Vowels: %d\n",vowels);
    printf("Consonants: %d\n",consonants);
    return 0;
}