#include<stdio.h>
int maximum(int arr[],int size){
	int i,max=1;
	for(i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("\n%d is maximum number in your array.",max);
}
int minimum(int arr[],int size){
	int i,j,temp;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-1-i;j++){
	       if(arr[j]>arr[j+1]){
	       	temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;}      	
	    }
	}
	printf("\n%d is minimum number in your array.",arr[0]);	
}
int main(){
	int arr[10];
	int i;
	printf("Enter Any Ten Numbers In Your Array:\n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	int choice;
	printf("\nEnter 1 To Find Maximum Number:");
	printf("\nEnter 2 To Find Minimum Number:");
	printf("\nEnter Your Choice: ");
	scanf("%d",&choice);
	if(choice==1){
		maximum(arr,10);
	}
	else if(choice==2){
		minimum(arr,10);
	}
	else{
		printf("\n**INVALID CHOICE**");
		return 0;
	}
}