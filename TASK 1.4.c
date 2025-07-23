#include<stdio.h>
#include<stdbool.h>
bool isprime(int num){
	int i;
	if(num<=1){
		return false;
	}
	for(i=2;i*i<=num;i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int num;
	printf("Enter Any Positive number: ");
	scanf("%d",&num);
	if(isprime(num)){
		printf("%d is Prime Number.",num);
	}else{
		printf("%d is not Prime Number.",num);
	}
}
