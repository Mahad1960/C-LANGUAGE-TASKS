#include<stdio.h>
#include<math.h>
struct Point {
    float x, y;
};
float distance(struct Point p1, struct Point p2) {
    return sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));
}
int main(){
    struct Point p1, p2, p;
    float d;
    float minX = 0, minY = 0, maxX = 10, maxY = 10; 
    printf("Enter coordinates of Point 1 (x y):\n");
    scanf("%f%f", &p1.x, &p1.y);
    printf("Enter coordinates of Point 2 (x y):\n");
    scanf("%f%f", &p2.x, &p2.y);
    d = distance(p1, p2);
    printf("\nDistance between the points = %.2f\n", d);
    printf("\nEnter a point to check inside rectangle (x y):\n");
    scanf("%f%f", &p.x, &p.y);
    if(p.x >= minX && p.x <= maxX && p.y >= minY && p.y <= maxY)
        printf("\nPoint lies inside the rectangle.\n");
    else
        printf("\nPoint lies outside the rectangle.\n");
    return 0;
}
