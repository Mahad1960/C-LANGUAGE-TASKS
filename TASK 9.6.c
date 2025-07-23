#include<stdio.h>
#include<string.h>
int isRotation(char str1[],char str2[]){
    if(strlen(str1)!=strlen(str2)){
        return 0;
    }
    char temp[2*strlen(str1)+1];
    strcpy(temp,str1);
    strcat(temp,str1);
    if(strstr(temp,str2)!=NULL){  
        return 1;  
    }
    return 0; 
}
int main(){
    char str1[30],str2[30];
    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);
    if(isRotation(str1,str2)){
        printf("%s is a rotation of %s.\n",str2,str1);
    }else{
        printf("%s is not a rotation of %s.\n",str2,str1);
    }
    return 0;
}