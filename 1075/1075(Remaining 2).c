#include<stdio.h>

int main()
{
    int i,N;
    scanf("%d",&N);
    if(N<10000)
    {
        for(i=1; i<10001; i++)
        {
            if(i%N == 2)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
