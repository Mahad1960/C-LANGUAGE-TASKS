#include<stdio.h>
#include<string.h>
#define MAX 20
struct movie {
    char title[30], genre[30], director[30], release[30];
    float rating;
};
int main(){
    int choice, count = 5;
    char text[30];
    struct movie sub[MAX]={
        {"Singham", "Action", "Rahul Shetty", "2005", 6.3},
        {"Pathan", "Spy Thriller", "Sidhu Paji", "2023", 8.6},
        {"Jawan", "Thriller", "Sidharth", "2024", 8.9},
        {"3 Idiots", "Comedy", "Nitesh Tiwari", "2011", 7.4},
        {"Dangal", "Sports", "Rajkumar Chopra", "2012", 8.0}
    };
    while(1){
        printf("\n=================\n---NUPLEX---\n=================");
        printf("\n1. Search Movie by Genre\n2. Add Movie\n3. Exit\nEnter Choice: ");
        scanf("%d",&choice);
        if(choice == 1){
            printf("Enter Genre: ");
            scanf("%s",text);
            int found=0;
            for(int i=0;i<count;i++){
                if(strcmp(sub[i].genre,text) == 0){
                    printf("\nTitle: %s\nDirector: %s\nRelease: %s\nRating: %.1f\n", sub[i].title, sub[i].director, sub[i].release, sub[i].rating);
                    found = 1;
                }
            }
            if(!found){
			   printf("\nNo movies found.\n");}
        }
        else if(choice == 2){
            if(count >= MAX){
               printf("\nMemory full!\n");
			} 
            else{
                printf("Enter Title: ");
                scanf("%s", sub[count].title);
                printf("Enter Genre: ");
                scanf("%s", sub[count].genre);
                printf("Enter Director: ");
                scanf("%s", sub[count].director);
                printf("Enter Release Year: ");
                scanf("%s", sub[count].release);
                printf("Enter Rating: ");
                scanf("%f", &sub[count].rating);
                printf("\nMovie added!\n");
                count++;
            }
        }
        else if(choice == 3){
            printf("\nExiting... Thank You For Using Our Service!");
            break;
        }
        else{
        	printf("Invalid choice!\n");
		} 
    }
    return 0;
}
