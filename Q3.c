// reverse of array[10]={1,5,7,3,2,9}

#include <stdio.h>

void main ()
{
    int i, array[20]={1,5,7,3,2,9};

    for (i=5 ; i>=0 ; i--)
    {
        printf("%d ",array[i]);
    }
}

// output 9 2 3 7 5 1 