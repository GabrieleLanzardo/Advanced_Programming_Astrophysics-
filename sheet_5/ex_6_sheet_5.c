//dynamically allocated matrix code: for this code, I follow the example treated in the lesson
// of the 16/10/2026

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

    //print the elements
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    //calculation of the number of elemnts for which M[i][j]=i+j:
    int k=0; //counter of the elemnts for which the requirement is satysfied
    for(i=0; i<n; i++)
    {
        for(j=0;j<n;j++)
        {
            if(M[i][j]==i+j)
            {
                k++;
            }
        }
    }
    printf("The number of elements for which M[i][j]=i+j is: %d \n", k);




    return 0;
}

