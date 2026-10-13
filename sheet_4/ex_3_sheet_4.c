//this code is ablo to print a square of nxn "*", once n in inserted

#include <stdio.h>
#include <math.h>

int main()
{
    int n; //dimension of the square
    printf("Insert the dimension of the square: \n");
    scanf("%d", &n);

    //quadrato:
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

return 0;
}