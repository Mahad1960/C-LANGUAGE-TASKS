#include<stdio.h>
int duplicate(int arr[],int n){
	int uniqueIndex=0;
    for(int i=0;i<n;i++){
        int isDuplicate=0;
        for(int j=0;j<uniqueIndex;j++){
            if(arr[i]==arr[j]){
                isDuplicate=1; 
                break;}
        }
        if(!isDuplicate){
            arr[uniqueIndex]=arr[i];
            uniqueIndex++;}
    }
    return uniqueIndex;
}
int main(){
	int n,i;
	printf("Enter the size of your array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in your array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);}
	printf("Elements In Your Array Are:\n");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);}		
	int new_size=duplicate(arr,n);
	printf("Array Without Duplicates:\n");
	for(i=0;i<new_size;i++){
        printf("%d\n",arr[i]);}	
}
