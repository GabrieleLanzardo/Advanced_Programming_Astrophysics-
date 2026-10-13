// this program prints a series of positive integer number inserted from the keyboard.
// the program stops when it receives a negative nubmer in input

#include <stdio.h>

int main()
{
    printf("THE CODE THAT READ NON-NEGATIVE INTEGERS! \n");
    int n; //the integers inserted from the keyboard
    while(1)
    {
        printf("number: ");
        scanf("%d", &n);
        if(n>=0)
        {
            printf("%d \n", n);
        }
        else {
            printf("negative number, program closed \n");
            break;
        }
    }
    return 0;
}
