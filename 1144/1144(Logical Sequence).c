#include<stdio.h>

int main()
{
    int h,i,N,j=0,k=0,l=0;

    scanf("%d",&N);

    for(i=1; i<=N; i++)
    {
        for(h=0; h<=1; h++)
        {
            l=(i*i);
            j=l+h;
            k=l*i+h;
            printf("%d %d %d\n",i,j,k);
        }
    }
    return 0;
}
