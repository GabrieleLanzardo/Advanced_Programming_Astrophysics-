#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    int res=1;
    int i=1;
    while(i<=n)
    {
        res=res*i;
        i++;
    }
    return res;
}

int main()
{
    int numero;
    printf("Calcolo del fatoriale di un numero: \n");
    printf("Inserire il numero: n= ");
    scanf("%d", &numero);
    printf("n!= %d", factorial(numero));

    return 0;
}