#include<stdio.h>
void Common(int arr1[],int arr2[],int size){
    int found=0; 
    printf("Common elements: ");
    for (int i=0;i<size;i++){
        int isDuplicate=0;
        for (int k=0;k<i;k++){
            if(arr1[i]==arr1[k]){
                isDuplicate=1;
                break;
            }
        }
        if(isDuplicate) continue;
        for(int j=0;j<size;j++){
            if(arr1[i]==arr2[j]){
                printf("%d ",arr1[i]);
                found=1;
                break;
            }
        }
    }
    if(!found){
        printf("No common elements");
    }
    printf("\n");
}
int main(){
    int arr1[10],arr2[10];
    printf("Enter 10 integers for the first array:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter 10 integers for the second array:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr2[i]);
    }
    Common(arr1,arr2,10);
    return 0;
}