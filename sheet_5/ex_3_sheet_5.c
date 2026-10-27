//square  root with its precision using a Newtonian method

#include <stdio.h>
#include <math.h>

#define MAXX 100

//function that iteratively compute the square root of a:

double square_root(double a, double prec)
{
    double x[MAXX];
    x[0]=a;
    int i=0;
    while(x[i]-x[i+1]>0)
    {
        x[i+1]=(1./2.)*(x[i]+(a/x[i])); //Newtonian method
        i++;
    }
    printf("Number of iteration needed to converg the solution: %d \n", i);
    return x[i];
}

int main()
{
    printf("Square root calculator using the Newtonian method!! \n");
    printf("Insert the number: n= ");
    double number;
    scanf("%lf", &number);
    printf("sqrt(n)= %.1lf \n", square_root(number, 0.1));

    return 0;
}

