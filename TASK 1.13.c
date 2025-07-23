#include <stdio.h>
float calculation(float math,float science,float history){
    return (math*0.5)+(science*0.3)+(history*0.2);
}
char grade(float average){
    if(average>=90){
        return 'A';
    }else if(average>=80){
        return 'B';
    }else if(average>=70){
        return 'C';
    }else if(average>=60){
        return 'D';
    }else{
        return 'F';
    }
}
int main(){
    char name[50];
    float math,science,history,average;
    char finalGrade;
    printf("Enter student's name: ");
    scanf(" %[^\n]",name);
    printf("Enter Math score: ");
    scanf("%f",&math);
    printf("Enter Science score: ");
    scanf("%f",&science);
    printf("Enter History score: ");
    scanf("%f",&history);
    average=calculation(math,science,history);
    finalGrade=grade(average);
    printf("\n--- Student Report ---\n");
    printf("Name: %s\n",name);
    printf("Math Score: %.2f\n",math);
    printf("Science Score: %.2f\n",science);
    printf("History Score: %.2f\n",history);
    printf("Weighted Average: %.2f\n",average);
    printf("Final Grade: %c\n",finalGrade);
    return 0;
}