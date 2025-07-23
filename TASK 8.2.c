#include<stdio.h>
int main(){
	int i,j,k;
	int a[2][3][3],sum[3][3];
	printf("Enter numbers for matrix:\n");
	for(k=0;k<=1;k++){
	    for(i=0;i<3;i++){
		    for(j=0;j<3;j++){
			scanf("%d",&a[k][i][j]);}
		}
    }
	printf("\nMATRIX : 1\n");
	for(k=0;k<1;k++){	
	    for(i=0;i<3;i++){
		    for(j=0;j<3;j++){
			printf(" %d",a[k][i][j]);}  
			printf("\n");
		}		
	}
	printf("\nMATRIX : 2\n");
	for(k=1;k<2;k++){	
	    for(i=0;i<3;i++){
		    for(j=0;j<3;j++){
			printf(" %d",a[k][i][j]);}  	
			printf("\n");
		}		
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum[i][j]=a[0][i][j]+a[1][i][j];	
		}
	}
	printf("\nSUM OF MATRIXES:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d",sum[i][j]);	
		}
		printf("\n");
	}			
}
