

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int **M;
    int n, m;
    int i, j;
    int value;

    printf("Number of rows: \n");
    scanf("%d", &n);
    printf("Number of columns: \n");
    scanf("%d", &m);

    M=(int**)malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
    {
        M[i]=(int*)malloc(m*sizeof(int));
    }

    printf("Insert the matrix element and press enter \n");

    //reading the elements
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &value);
            M[i][j]=value;
        }        
    }

    //print the elements of the transposed matrix:
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", M[j][i]); //we are exchanging lines and rows
        }
        printf("\n");
    }

return 0;
}