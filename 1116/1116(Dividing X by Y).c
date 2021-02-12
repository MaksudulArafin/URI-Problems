#include<stdio.h>

int main()
{
    int N,X,Y,i;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%d%d",&X,&Y);
        double a=(double)X/Y;
        if(Y != 0)
            printf("%.1lf\n",a);
        else
            printf("divisao impossivel\n");

    }
    return 0;
}
