#include<stdio.h>
int multiplication(int a[][2],int n1,int b[][2],int n2,int result[][2],int n3){
	int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			result[i][j]=0;
			for(k=0;k<2;k++){
				result[i][j]+=a[i][k]*b[k][j];
			}
		}
		printf("\n");	
	}
	return result[2][2];
} 
int main(){
	int i,j;
    int a[2][2],b[2][2],result[2][2];
    printf("Enter Elements In Matrix 1:\n");
    for(i=0;i<2;i++){
    	for(j=0;j<2;j++){
    		scanf("%d",&a[i][j]);
	    }
	}
	printf("Enter Elements In Matrix 2:\n");
    for(i=0;i<2;i++){
    	for(j=0;j<2;j++){
    		scanf("%d",&b[i][j]);
	    }
	}
	result[2][2]=multiplication(a,2,b,2,result,2);	
	printf("MULTIPLICATION OF MATRIXES:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf(" %d",result[i][j]);
		}
		printf("\n");
	}
}