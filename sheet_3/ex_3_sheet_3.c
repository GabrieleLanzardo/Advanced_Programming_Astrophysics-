// the following code is used to calculate the roots of a second order equation of the form ax^2+bx+c=0

#include <stdio.h>
#include <math.h>

int main()
{
    //coefficients of the equation:
    double a, b, c;

    printf("Input the coefficient of the quadratic term: \n");
    scanf("%lf", &a); //quadratic term

    printf("Input the coefficient of the linear term: \n");
    scanf("%lf", &b); //linear term

    printf("Input the constant term: \n");
    scanf("%lf", &c); //constant term

    double delta;    //discriminant of the equation
    if(b==0){
        delta=-4*a*c;
    }
    else{
        delta=b*b-4*a*c;
    }

    //solutions of the equation 

    if(delta<0){
        printf("The discriminant is negative: no solutions found \n");
    }
    if(delta==0){
        double x0=-b/(2*a);
        printf("Two coincident solutions found: %lf \n", x0);
    }
    if(delta>0){
        double x1=(-b+sqrt(delta))/(2*a);
        double x2=(-b-sqrt(delta))/(2*a);
        printf("Two solutions found: %lf and %lf \n", x1, x2);
    }

    return 0;



}