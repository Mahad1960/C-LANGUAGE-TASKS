#include<stdio.h>
void common(int a[],int n1,int b[],int n2){
	int found=0;
	int i,j;
	printf("\nCommon Elements are:\n");
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(a[i]==b[j]){
				printf("%d is common in array.\n",a[i]);
	            found=1;
			}
		}
	}
	if(found==0){
		printf("No Common Elements Are Present In Array.");
	}
}
int main(){
	int n1,n2,i;
	printf("Enter The Size Of 1st Array:");
	scanf("%d",&n1);
	printf("Enter The Size Of 2nd Array:");
	scanf("%d",&n2);
	int a[n1];
	printf("\nEnter The Elements In 1st Array:\n");
	for(i=0;i<n1;i++){
		scanf("%d",&a[i]);}
    int b[n2];
	printf("\nEnter The Elements In 2nd Array:\n");
	for(i=0;i<n2;i++){
		scanf("%d",&b[i]);}
	common(a,n1,b,n2);	 
}
