#include<stdio.h>
int main(){
	int i,j,count=0;
	char text[5][30];
	printf("Enter The Following Information\n");
	for(i=0;i<5;i++){
		printf("Enter Name Of Student %d : ",i+1);
		scanf("%[^\n]",text[i]);
		getchar();
	}
	for(i=0;i<5;i++){
		count=0;
		for(j=0;text[i][j]!='\0';j++){
			if(text[i][j]!=' '){
				count++;
			}
		}
	printf("Name %d has %d length without spaces.\n",i+1,count);	
	}
}