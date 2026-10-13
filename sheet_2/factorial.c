#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("insert a number: ");
    scanf("%d", &n);
    if(n==0)
    {
        printf("n!= %d\n", 1);
    }
    if(n==1)
    {
        printf("n!= %d\n", 1);
    }
    else {
            int p=n;
            int f;
            for(int i=1;i<n;i++)
            {
                f=p*(n-i);
                p=f;
            }
            printf("n!= %d\n", p);
        }
    return 0;
}
