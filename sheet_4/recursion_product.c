#include <stdio.h>
#include <math.h>

int rec_prod(int a, int b)
{
    int prod;
    if(b==0)
    {
        prod=0;
    }
    else{
        prod=rec_prod(a, b-1)+a;
    }
    return prod;
}

int main()
{
    int a, b;
    printf("select the numbers: \n");
    printf("first number: a= ");
    scanf("%d", &a);
    printf("second number: b= ");
    scanf("%d", &b);

    printf("The product of the two numbers using the recursive function is: %d \n", rec_prod(a,b));

    return 0;
}