#include<stdio.h>


int main()
{
    int i,j=1,N,k=4;
    scanf("%d",&N);

    for(i=0; i<N; i++)
    {
        for(j;j<k;j++)
        {
            printf("%d ",j);

        }
        j=j+1;
        k=k+4;
        printf("PUM\n");
    }
    return 0;
}
