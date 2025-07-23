#include <stdio.h>
#include <string.h>
#define MAX_FLIGHTS 5
struct Flight {
    int flightID;
    char destination[50];
    char departure[50];
    char date[20];
    int availableSeats;
};
int main(){
    struct Flight flights[MAX_FLIGHTS]={
        {101, "Karachi", "Lahore", "2025-05-01", 50},
        {102, "Islamabad", "Karachi", "2025-05-02", 60},
        {103, "Lahore", "Peshawar", "2025-05-03", 40},
        {104, "Quetta", "Multan", "2025-05-04", 35},
        {105, "Faisalabad", "Islamabad", "2025-05-05", 20}
    };
    int choice,flightID,i,found;
    while(1){
    	printf("\n================================");
        printf("\n--- Flight Management System ---\n");
        printf("================================\n");
        printf("1. Display Flight Details\n");
        printf("2. Book a Seat\n");
        printf("3. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        if(choice==1){
            printf("\n%-10s %-15s %-15s %-15s %-10s\n","FlightID","Destination","Departure","Date","Seats");
            for(i=0;i<MAX_FLIGHTS;i++){
                printf("%-10d %-15s %-15s %-15s %-10d\n",
                       flights[i].flightID,
                       flights[i].destination,
                       flights[i].departure,
                       flights[i].date,
                       flights[i].availableSeats);
            }
        }else if(choice==2){
            printf("Enter Flight ID to book a seat: ");
            scanf("%d",&flightID);
            found=0;
            for(i=0;i<MAX_FLIGHTS;i++){
                if(flights[i].flightID==flightID){
                    found=1;
                    if(flights[i].availableSeats>0){
                        flights[i].availableSeats--;
                        printf("Seat booked successfully! Remaining seats: %d\n",flights[i].availableSeats);
                    }else{
                        printf("No seats available on this flight.\n");
                    }
                    break;
                }
            }
            if(!found){
                printf("Flight with ID %d not found.\n",flightID);
            }
        }else if(choice==3){
            printf("**THANK U For Using Our Service**");
            break;
        }else{
            printf("**Invalid choice.Try again**\n");
        }
    }
    return 0;
}
