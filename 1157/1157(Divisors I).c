#include<stdio.h>

int main()
{
    int i,N;
    scanf("%d",&N);
    for(i=1;i<9999;i++)
    {
        if(N%i == 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}