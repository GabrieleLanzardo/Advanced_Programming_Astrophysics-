//This code goal is to create a converter from Celsius to Fahrenheit degrees and viceversa.

#include <stdio.h>
#include <math.h>

int main()
{
    //choice of the converter
    int choice;
    printf("choose the converter: digit 1 for C-->F or 2 for F-->C ");
    scanf("%d", &choice);

    //Celsius to Fahrenheit converter:
    if (choice==1)
    {
        double C; //Celsius degree you want to convert
        printf("Celsius degrees: ");
        scanf("%lf", &C);
        double F; //Fahrenheit degrees converted from the initial Celsius degrees
            F=C*1.8+32.;
        printf("Fahrenheit degrees: %lf\n", F);
    }
    //Fahrenheit to Celsius converter
    if(choice==2)
    {
        double F; //Fahrenheit degree you want to convert
        printf("Fahrenheit degrees: ");
        scanf("%lf", &F);
        double C; //Celsius degrees converted from the initial Fahrenheit degrees
            C=(F-32.)/1.8;
        printf("Celsius degree: %lf\n", C);
    }

    return 0;
    
}