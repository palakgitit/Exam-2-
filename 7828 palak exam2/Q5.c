// swaping of two variable without third variable.

#include <stdio.h>

void main ()
{
    int A = 10, B = 20;
    printf("Before swap of A and B:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    A = A + B;
    B = A - B;
    A = A - B;

    // this is changed value : 
    printf("After swap of A and B :\n  ");
    printf ("A = %d\n  B = %d\n ", A,B);
}

/*

output : 

Before swap of A and B:
a = 10
b = 20
After swap of A and B :
A = 20
B = 10
  
  
  */