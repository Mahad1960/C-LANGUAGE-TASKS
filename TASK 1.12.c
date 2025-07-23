#include <stdio.h>
float celsiusToFahrenheit(float celsius){
    return (celsius*9.0/5.0)+32;
}
int main(){
    float celsius;
    int totalReadings=0;
    int coldCount=0,moderateCount=0,hotCount=0;
    printf("Enter temperature values in Celsius (-999 to stop):\n");
    while(1){
        printf("Enter temperature: ");
        scanf("%f",&celsius);
        if(celsius==-999){
            break;
        }
        float fahrenheit=celsiusToFahrenheit(celsius);
        totalReadings++;
        printf("Fahrenheit: %.2f, Category: ",fahrenheit);
        if(celsius<10.0){
            printf("Cold\n");
            coldCount++;
        }else if(celsius<=30.0){
            printf("Moderate\n");
            moderateCount++;
        }else{
            printf("Hot\n");
            hotCount++;
        }
    }
    printf("\nSummary:\n");
    printf("Total temperatures entered: %d\n",totalReadings);
    printf("Cold: %d\n",coldCount);
    printf("Moderate: %d\n",moderateCount);
    printf("Hot: %d\n",hotCount);
    return 0;
}