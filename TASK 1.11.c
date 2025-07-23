#include<stdio.h>
#include <stdbool.h>
bool hasDuplicate(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                return true; 
            }
        }
    }
    return false;
}
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size]; 
    printf("Enter %d integers:\n", size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    if(hasDuplicate(arr,size)){
        printf("Duplicate found\n");
    }else{
        printf("No duplicate found\n");
    }
    return 0;
}