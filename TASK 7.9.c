#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the Array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);}
	printf("Following are the elements of the Array:\n");
	for(i=0;i<n;i++){
		printf(" %d",arr[i]);}
	printf("\n**REVERSE ORDER**\n");
	for(i=n-1;i>=0;i--){
		printf(" %d",arr[i]);}
}
