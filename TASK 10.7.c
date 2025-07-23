#include<stdio.h>
const float MAX_TEMP = 40.0; 
void checkTemperature(float temp){
    static int exceedCount = 0; 
    if(temp > MAX_TEMP){
        exceedCount++;
        printf("Temperature %.2f Celsius exceeds the limit! (Exceed count: %d)\n", temp, exceedCount);
    }else{
        printf("Temperature %.2f Celsius is within the safe limit.\n", temp);
    }
}
int main(){
    float temp;
    char choice = 'y';
    while(choice == 'y' || choice == 'Y'){
        printf("\nEnter current temperature (in Celsius): ");
        scanf("%f", &temp);
        checkTemperature(temp);
        printf("\nDo you want to enter another temperature? (y/n): ");
        scanf(" %c", &choice); 
    }
    printf("\nThank you! Stay safe.\n");
    return 0;
}
