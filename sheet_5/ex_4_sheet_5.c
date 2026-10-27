//this code is used to calculate the nth number of the Fibonacci series

#include <stdio.h>
#include <math.h>


//recursive function

int Fibo(int n)
{
    if(n<0){
        printf("The selected number cannot be computed. Please insert a non-negative number.\n");
    }
    if(n==0) return 1; //base cases for the Fibonacci series
    if(n==1) return 1;

    return Fibo(n-2)+Fibo(n-1);
}

int main()
{
    int n_th;
    printf("Calculation of the n-th number of the Fibonacci series! (remember that the first is the o-th!) \n");
    printf("Insert which term of the series you want to calculate: ");
    scanf("%d", &n_th);
    int sol;
    sol=Fibo(n_th);
    printf("The number of the Fibonacci series selected is: %d \n", sol);

    return 0;
}

