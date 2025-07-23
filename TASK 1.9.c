#include<stdio.h>
#include<string.h>
int count_vowels(char text[][30],int size,int count[]){
	int i,j;
	for(j=0;j<size;j++){
		count[j]=0;
	    for(i=0;text[j][i]!='\0';i++){
		    if(text[j][i]=='a' || text[j][i]=='e' || text[j][i]=='i' || text[j][i]=='o' || text[j][i]=='u' || text[j][i]=='A' || text[j][i]=='E' || text[j][i]=='I' || text[j][i]=='O' || text[j][i]=='U'){
			count[j]++;
		    }
		}
	}
	return count[3];
}
char sort_strings(char text[][30],int size){
	int i,j;
	char temp[30];
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(strcmp(text[i],text[j])>0){
				strcpy(temp,text[i]);
				strcpy(text[i],text[j]);
				strcpy(text[j],temp);
			}
		}
	}
	return text;
}
int main(){
	char text[3][30];
	int i,count[3];
	for(i=0;i<3;i++){
		printf("Enter Text in String %d: ",i+1);
		scanf("%[^\n]",text[i]);
		getchar();
	}
	count[3]=count_vowels(text,3,count);
	sort_strings(text,3);
	for(i=0;i<3;i++){
		printf("\nText %d has %d Vowels.",i+1,count[i]);}
	printf("\n");	
	for(i=0;i<3;i++){	
	    if(count[i]>3){
	    	printf("\n%s text has more than three vowels.",text[i]);
		}  
	}
	printf("\n");
	printf("\n**SORTED STRING**\n");	
	for(i=0;i<3;i++){
		printf("\nString %d: %s",i+1,text[i]);
	}
}