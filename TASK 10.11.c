#include <stdio.h>
#define METERS_TO_KM 1000.0 
void convertToKm(float meters){
    static int callCount = 0; 
    float kilometers = meters / METERS_TO_KM;
    callCount++; 
    printf("Conversion #%d: %.2f meters = %.4f kilometers\n", callCount, meters, kilometers);
}
int main(){
    float distance;
    printf("\nEnter distance in meters: ");
    scanf("%f", &distance);
    convertToKm(distance);
    printf("\nEnter another distance in meters: ");
    scanf("%f", &distance);
    convertToKm(distance);
    printf("\nEnter one more distance in meters: ");
    scanf("%f", &distance);
    convertToKm(distance);
    return 0;
}
