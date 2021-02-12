#include<stdio.h>

int main()
{
    int i,j;double c,a=0,b=1,sum=1.00;

    for(j=0;j<19;j++)
    {
       a+=2;
       b+=2;

       c=b/a;
       sum=sum+c;
    }
    printf("%.2lf\n",sum);
    return 0;
}
