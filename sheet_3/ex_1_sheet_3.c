// this program aim is to check if an integer number is even or odd

#include <stdio.h>

int main()
{
    int number;
    printf("Insert the number to control: \n");
    scanf("%d", &number);
    if(number%2==0)
    {
        printf("The selected number is EVEN! \n");
    }
    else
    {
        printf("The selected number is ODD! \n");
    }

    return 0;
}