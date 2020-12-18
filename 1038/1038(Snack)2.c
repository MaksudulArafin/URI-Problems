#include<stdio.h>


int
main ()
{

int X, Y;

float total;

scanf ("%d%d", &X, &Y);

float array1[5] = { 4.00, 4.50, 5.00, 2.00, 1.50 };

total = (array1[X - 1]) * Y;

printf ("Total: R$ %.2f\n", total);


return 0;

}


