#include<stdio.h>

int main()
{
    int N,i,j;
    double a,b,c,d,e,f,y;
    double ar[100];
    scanf("%d",&N);

    for(i=0; i<N; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%lf",&ar[j]);
            a=ar[0];
            b=ar[1];
            c=ar[2];
            d=(a*2+b*3+c*5)/10.00;
        }
            printf("%.1lf\n",d);
    }
    return 0;
}
