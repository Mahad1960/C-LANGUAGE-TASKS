#include <stdio.h>
#define MAX 5
void matrixAdd(int a[][10],int b[][10],int result[][10],int m,int n){
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            result[i][j]=a[i][j]+b[i][j];
}
void matrixSubtract(int a[][10],int b[][10],int result[][10],int m,int n){
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            result[i][j]=a[i][j]-b[i][j];
}
void matrixMultiply(int a[][10],int b[][10],int result[][10],int m,int n,int p){
    for(int i=0;i<m;i++)
        for(int j=0;j<p;j++){
            result[i][j]=0;
            for(int k=0;k<n;k++)
                result[i][j]+=a[i][k]*b[k][j];
        }
}
void inputMatrix(int mat[][10],int r,int c){
    for (int i=0;i<r;i++)
        for(int j=0;j<c;j++){
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
}
void printMatrix(int mat[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}
int main(){
    int choice;
    int a[10][10],b[10][10],result[10][10];
    int m,n,p;
    printf("1. Add\n2. Subtract\n3. Multiply\nEnter Your Choice: ");
    scanf("%d", &choice);
    if(choice == 1 || choice == 2){
        printf("Enter rows and columns: ");
        scanf("%d%d",&m,&n);
        printf("Enter Matrix 1:\n");
        inputMatrix(a,m,n);
        printf("Enter Matrix 2:\n");
        inputMatrix(b,m,n);
        if(choice==1)
            matrixAdd(a,b,result,m,n);
        else
            matrixSubtract(a,b,result,m,n);
        printf("Result:\n");
        printMatrix(result,m,n);
    }
    else if(choice==3){
        printf("Enter rows and columns of Matrix 1: ");
        scanf("%d%d",&m,&n);
        printf("Enter columns of Matrix 2: ");
        scanf("%d",&p);
        printf("Enter Matrix 1:\n");
        inputMatrix(a,m,n);
        printf("Enter Matrix 2:\n");
        inputMatrix(b,n,p); 
        matrixMultiply(a,b,result,m,n,p);
        printf("Result:\n");
        printMatrix(result,m,p);
    }
    else{
        printf("Invalid choice.\n");
    }
    return 0;
}