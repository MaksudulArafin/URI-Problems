#include<stdio.h>

 int
main ()
{

int ar[3], c, i, j, min, temp;

int ar1[3];

for (i = 0; i < 3; i++)

    {

scanf ("%d", &ar[i]);

}


for(i=0; i<3; i++)
{
    ar1[i]=ar[i];
}

for (i = 0; i < 2; i++)

    {

min = i;


for (j = i + 1; j < 3; j++)

	{

if (ar[min] > ar[j])


min = j;


}

if (min != i)

	{

temp = ar[i];

ar[i] = ar[min];

ar[min] = temp;

}

}


for (i = 0; i < 3; i++)

    {

printf ("%d\n", ar[i]);

}
printf ("\n");


for(i=0; i<3; i++)
{
    printf ("%d\n", ar1[i]);
}
    return 0;
}
