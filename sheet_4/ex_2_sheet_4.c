// this code goal is to chech weather a number is prime or not

#include <stdio.h>
#include <math.h>

int main()
{
    int number; // we want to chech if this integer is a prime number
    printf("select the number you want to chech if prime: \n");
    scanf("%d", &number);

int R;

for(int i=2; i<number ;i++) //si vuole dividere numero per tutti gli interi tra 2 e numero-1
{
    R=number%i; //resto della divisione
    if(R==0)
    {
        printf("The number is NOT PRIME \n");
        break;
    }
}

if(R!=0)
{
    printf("The number IS PRIME! \n");
}

    return 0;

}