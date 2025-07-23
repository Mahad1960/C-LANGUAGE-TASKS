#include<stdio.h>
int main(){
	char username[]={"Admin_123"};
	int password;
	printf("Username: %s",username);
	printf("\nEnter Your Password: ");
	scanf("%d",&password);
	if(password==1234){
		printf("Basic Subscription : General Articles.");
	}else if(password==1235){
		printf("Premium Subscription : Articles,Premium Videos.");
	}else if(password==1236){
		printf("VIP Subscription : Article,Videos,Exclusive Content.");
	}else{
		printf("Invalid Credentials : Access Denied.");
	}   
}
