//this code aim is to use a function to remove any characters from
//a string that matches any character in a second string

#include <stdio.h>

void squeeze(char s1[], char s2[]) 
{
    int i, j, k ;
    for(i=0 ; s2[i] != '\0'; i++) //fixed a character in the second string...
    {
        for(j=k=0; s1[j] != '\0'; j++) //...every character in the first string different from the fixed character in the second
        {                               //is copied in the current k position in the first string.
            if(s1[j]!=s2[i])
                s1[k++]=s1[j];
        }
        s1[k]='\0';
    }
}

int main()
{
    //strings:
    char r[]= "maggiolino";
    char s[]="maggiordomo";

    printf("Insert the first string: %s \n", r);

    printf("Insert the second string: %s \n", s);

    //squeeze function
    squeeze(r,s);
    printf(" Squeezed result: %s \n", r);

    return 0;
}