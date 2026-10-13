// this program tells theusers if two imput integers are equal or
// which is the bigger between them in they are different

#include <stdio.h>

int main()
{
    int number1, number2; //input numbers
    printf("Input the first number: \n");
    scanf("%d", &number1);
    printf("Input the second number: \n");
    scanf("%d", &number2);
    
    if(number1 == number2){ //check if the numbers are equal
        printf("The twonumbers are equal! \n");
    }
    else{ //if the numbers are different, it returns the larger
        if(number1 > number2){
            printf("The two numbers are different: the larger is %d \n", number1);
        }
        else{
            printf("The two numbers are different: the larger is %d \n", number2);
        }
    }

    return 0;
}