#include<stdio.h>

int main()
{
    int M,N,i,j,sum=0;
    for(i=0; i<3; i++)
    {
        sum=0;
    scanf("%d%d",&M,&N);
    if(M>0 && N>0)
    {
        if(M<N)
        {
            int temp= M;
            M=N;
            N=temp;
        }
        if(N != 0 || N<0)
        {
        for(j=N; j<=M; j++)
        {
            printf("%d ",j);
            sum += j;
        }
        printf("Sum=%d\n",sum);
      }
    }
    }
    return 0;
}
