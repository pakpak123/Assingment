#include<stdio.h>
main() 
{
    float weight = 0, height = 0, calbmi;
    printf("You weight : ");
    scanf_s("%f", &weight);
    printf("You height (.m): ");
    scanf_s("%f", &height);
    calbmi = weight / (height * height);
    printf("You BMI :%f\n", calbmi);
    if (calbmi != 0) 
    {
        if (calbmi < 18.5) {
            printf("Underweight\n");
        }
        else if (calbmi <= 22.9) {
            printf("slim\n");
        }
        else if (calbmi <= 24.9) {
            printf("Over weight\n");
        }
        else if (calbmi <= 29.9) {
            printf("Obesity\n");
        }
        else {
            printf("Dangerous\n");
        }
    }
    else
    {
        printf("you must to check your answer.");
    }
    return 0;
}