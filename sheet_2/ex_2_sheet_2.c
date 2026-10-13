//This code goal is to swap the values of two numbers inserted by the user from 
//the keyboard:

#include <stdio.h>
#include <math.h>

int main()
{
    //input numbers:
    double A;
    double B;
    printf("first number: A= ");
    scanf("%lf", &A);
    printf("second number: B= ");
    scanf("%lf", &B);

    //swapping:

    printf("SWAPPING!!!\n");
    printf("new value of A= %lf\n", B);
    printf("new value of B= %lf\n", A);

return 0;
}