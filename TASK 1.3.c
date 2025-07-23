#include<stdio.h>
int main(){
	int i,j,found=0;
	char text[2][30];
	for(i=0;i<2;i++){
	printf("Enter Text %d: ",i+1);
	scanf("%[^\n]",text[i]);
	getchar();
    }
   	for(j=0;text[0][j]!='\0' || text[1][j]!='\0';j++){
    	if(text[0][j]!=text[1][j]){
    		printf("Text 1 And Text 2 Are Not Same.");
    		return 0;
		}else{
			found=1;
		}	
	}
	if(found==1){
		printf("Text 1 And Text 2 Are Same.");
	}
}
