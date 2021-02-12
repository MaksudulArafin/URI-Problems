#include<stdio.h>


int main()
{
    int i,j=1,N,k=0,l=0;
    scanf("%d",&N);

    for(i=0; i<N; i++)
    {
        for(j;j<=N;j++)
        {
            k=j*j;
            l=k*j;
            printf("%d ",j);
            printf("%d ",k);
            printf("%d\n",l);
        }
        j=j+1;


    }
    return 0;
}
