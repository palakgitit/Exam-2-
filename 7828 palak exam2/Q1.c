// print below series ***** **** *** ** * 

#include <stdio.h>

void main ()
{
    int i,j; 

    // loop to print * in pattern. 

    for (i=5; i>=1; i--)
    {
        for (j=1; j<=i; j++)
        {
            printf("* ");          
    }printf(" \n");
}
}

/* 
OUTPUT:
* * * * *  
* * * *
* * *
* *
*

*/