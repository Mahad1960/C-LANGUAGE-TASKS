#include <stdio.h>
#include <string.h>
#define MAX_CARS 100
struct Car{
    char make[50];
    char model[50];
    int year;
    float price;
    int mileage;
};
int main(){
    struct Car cars[MAX_CARS];
    int carCount = 0;
    int choice;
    do{
        printf("\n--- Car Dealership Menu ---\n");
        printf("1. Add a New Car\n");
        printf("2. Display All Cars\n");
        printf("3. Search for a Car\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar(); 
        if(choice == 1){
            if(carCount >= MAX_CARS){
                printf("Car dealership is full!\n");
            }else{
                printf("Enter car make: ");
                scanf(" %[^\n]", cars[carCount].make);
                printf("Enter car model: ");
                scanf(" %[^\n]", cars[carCount].model);
                printf("Enter car year: ");
                scanf("%d", &cars[carCount].year);
                printf("Enter car price: ");
                scanf("%f", &cars[carCount].price);
                printf("Enter car mileage: ");
                scanf("%d", &cars[carCount].mileage);
                getchar(); 
                carCount++;
                printf("Car added successfully!\n");
            }
        }else if(choice == 2){
            if(carCount == 0){
                printf("No cars available.\n");
            }else{
                printf("\n--- Available Cars ---\n");
                for(int i = 0; i < carCount; i++){
                    printf("Car %d:\n", i + 1);
                    printf(" Make: %s\n", cars[i].make);
                    printf(" Model: %s\n", cars[i].model);
                    printf(" Year: %d\n", cars[i].year);
                    printf(" Price: $%.2f\n", cars[i].price);
                    printf(" Mileage: %d miles\n\n", cars[i].mileage);
                }
            }
        }else if(choice == 3){
            if(carCount == 0){
                printf("No cars available to search.\n");
            }else{
                char searchMake[50], searchModel[50];
                int found = 0;
                printf("Enter make to search: ");
                scanf(" %[^\n]", searchMake);
                printf("Enter model to search: ");
                scanf(" %[^\n]", searchModel);
                printf("\n--- Search Results ---\n");
                for(int i = 0; i < carCount; i++){
                    if(strcasecmp(cars[i].make, searchMake) == 0 && strcasecmp(cars[i].model, searchModel) == 0){
                        printf(" Make: %s\n", cars[i].make);
                        printf(" Model: %s\n", cars[i].model);
                        printf(" Year: %d\n", cars[i].year);
                        printf(" Price: $%.2f\n", cars[i].price);
                        printf(" Mileage: %d miles\n\n", cars[i].mileage);
                        found = 1;
                    }
                }
                if(!found){
                    printf("No matching cars found.\n");
                }
            }
        }else if(choice == 4){
            printf("Exiting program. Goodbye!\n");
        }else{
            printf("Invalid choice. Please try again.\n");
        }
    }while (choice != 4);
}
