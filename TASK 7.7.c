#include<stdio.h>
int main(){
	int n,i,sum=0;
	printf("Enter the size of your array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements in your array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);} 
	printf("Following are the elements of your Array.\n");	
	for(i=0;i<n;i++){
		printf(" %d",arr[i]);}
	for(i=0;i<n;i++){
		sum+=arr[i];}
	printf("\n%d is the Sum of your Array.",sum);	
}
