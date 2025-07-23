#include <stdio.h>
#include <string.h>
#define MAX_PACKAGES 100
struct TravelPackage {
    char packageName[50];
    char destination[50];
    int duration; 
    float cost;
    int seatsAvailable;
};
int main(){
    struct TravelPackage packages[MAX_PACKAGES]={
        {"Summer Special", "Hawaii", 7, 1500.00, 10},
        {"Winter Wonderland", "Switzerland", 5, 2000.00, 5},
        {"Desert Adventure", "Dubai", 4, 1200.00, 8},
        {"Beach Paradise", "Maldives", 6, 2500.00, 6},
    };
    int packageCount = 4; 
    int choice;
    do{
        printf("\n--- Travel Agency Menu ---\n");
        printf("1. Display Available Packages\n");
        printf("2. Book a Travel Package\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        if(choice == 1){
            if(packageCount == 0){
                printf("No packages available.\n");
            }else{
                printf("\n--- Available Travel Packages ---\n");
                for(int i = 0; i < packageCount; i++){
                    printf("Package %d:\n", i + 1);
                    printf(" Name: %s\n", packages[i].packageName);
                    printf(" Destination: %s\n", packages[i].destination);
                    printf(" Duration: %d days\n", packages[i].duration);
                    printf(" Cost: $%.2f\n", packages[i].cost);
                    printf(" Seats Available: %d\n\n", packages[i].seatsAvailable);
                }
            }
        }else if(choice == 2){
            if(packageCount == 0){
                printf("No packages available to book.\n");
            }else{
                int bookChoice;
                printf("\nEnter package number to book (1 to %d): ", packageCount);
                scanf("%d", &bookChoice);
                if(bookChoice < 1 || bookChoice > packageCount){
                    printf("Invalid package number.\n");
                }else if(packages[bookChoice - 1].seatsAvailable == 0){
                    printf("Sorry, no seats available for this package.\n");
                }else{
                    packages[bookChoice - 1].seatsAvailable--;
                    printf("Booking successful! Remaining seats: %d\n", packages[bookChoice - 1].seatsAvailable);
                }
            }
        }else if(choice == 3){
            printf("Exiting program. Goodbye!\n");
        }else{
            printf("Invalid choice. Please try again.\n");
        }
    }while(choice != 3);
}
