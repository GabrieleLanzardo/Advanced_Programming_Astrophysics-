

#include <stdio.h>
#include <string.h>

#define MAXSTR 80

//function that counts the number of digits:
int count_digits(int n)
{
    int count;
    char string[MAXSTR];
    sprintf(string, "%d", n);//the function sprintf of stdio.h writes the number into an array of characters
    count=0;
    count=strlen(string);
    return count;
}

int main()
{
    for(int i=0; i<7; i++)
    {
        int n; //number to be inserted from keyboard 8 times
        printf("Insert number: \n");
        scanf("%d", &n);

        //counts
        int counts;
        printf("Number of digits: \n");
        counts=count_digits(n);
        printf("%d \n", counts);
    }
    return 0;
}