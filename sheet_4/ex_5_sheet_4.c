// this code reads an integer inserted from the keyboard and 
// returns its factorial, usign a while loop

#include <stdio.h>

int main()
{
    printf("insert a number: ");
    int n; //the integer of which we want to calculate the factorial
    scanf("%d", &n);

    //while loop to calculate the factorial:

    int i=1;
    int factorial=1;

    while(i<=n)
    {
        factorial=factorial*i;
        i++;
    }
    printf("n!= %d \n", factorial);

    return 0;
}
