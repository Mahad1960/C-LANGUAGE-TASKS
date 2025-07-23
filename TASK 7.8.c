#include<stdio.h>
int main(){
	int n,i,max=0,min=1;
	printf("Enter the size of Array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the Array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);}
	printf("Following are the elements of the Array:\n");
	for(i=0;i<n;i++){
		printf(" %d",arr[i]);}
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];}
		if(arr[i]<min){
			min=arr[i];}		
	}
	printf("\n%d is the maximum number in your array.",max);	
	printf("\n%d is the minimum number in your array.",min);	
}
