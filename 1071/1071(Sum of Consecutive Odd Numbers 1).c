#include<stdio.h>

int main ()
{

int x, i, y, sum = 0;

scanf ("%d%d", &x, &y);

if (x > y)

    {

int temp = x;

x = y;

y = temp;

}


for (i = x + 1; i < y; ++i)

    {

if (i % 2 != 0)
	{

sum += i;

}

}

printf ("%d\n", sum);

return 0;

}



