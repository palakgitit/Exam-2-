// square of number UDF

#include <stdio.h>

int square (int a)
{
    return a * a;
}
void main ()
{
    int  num ;

    printf ("The number : ");
    scanf ("%d", &num);
    
    printf ("Square of %d is :  %d", num, square (num));

}
