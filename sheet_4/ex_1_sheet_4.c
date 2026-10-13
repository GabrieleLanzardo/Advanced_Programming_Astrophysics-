// this code wants to test different types of inifinite loops:
#include <stdio.h>


int main()
{
    //selecting the infinite loop:
    int loop;

    printf("select the infinite loop: \n");
    printf("for loop: select 1 \n while loop: select 2 \n do while loop: select 3 \n");
    printf("select the infinite loop: \n");
    scanf("%d", &loop);

    if(loop==1)
    {
        for(;;)
        {
            printf("infinity");
        } 
    }
    if(loop==2)
    {
        while(1)
        {
            printf("while infinite \n");
        }
    }
    if(loop==3)
    {
        do{
            printf("do while infinite \n");
        } while(1);
    }

    return 0;
}