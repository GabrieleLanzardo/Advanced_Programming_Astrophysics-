//overflow veryfier

#include <stdio.h>
#include <math.h>

#define variable long long int

variable factorial(int n)
{
    variable fact=1;
    int i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    return fact;
}

int main()
{
    int number=10;

    variable f1, f2, ratio;

    do{ 
        number=number*2; 
        f1=factorial(number);
        f2=factorial(number-1);
        
        ratio=f1/f2;
        printf("Number : %d , calculated ratio %d \n", number, (int)ratio);
    }while(number==ratio);



    return 0;
}