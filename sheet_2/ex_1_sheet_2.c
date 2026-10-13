// this program's aim is to give the results of the operations:
//A-B;
//A-B+C;
//A-B+C+C;
// once the values of A,B and C are inserted by the users

#include <stdio.h>
#include <math.h>

int main()
{
    // Numbers used for the operations
    float A;
    float B;
    float C;
    printf("A= ");
    scanf("%f", &A);
    printf("B= ");
    scanf("%f", &B);
    printf("C= ");
    scanf("%f", &C);

    //Results of the operations

    float r1=A-B;
    float r2=A-B+C;
    float r3=A-B+C+C;

    printf("the first result is: A-B= %f\n", r1);
    printf("the second result is: A-B+C= %f\n", r2);
    printf("the first result is: A-B+C+C= %f\n", r3);

    return 0;
    

}