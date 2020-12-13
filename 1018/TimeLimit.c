#include<stdio.h>
int i,j,newArray[7],N;

int main()
{
    int array[7]={100.00,50.00,20.00,10.00,5.00,2.00,1.00};
    scanf("%d",&N);
    if(0<N<1000000)
    {
        for(i=0;i<7;i++)
        {
            N=N/array[7];
            newArray[7]=N%array[7];
        }
        for(j=0;j<7;++j)
        {
            printf("%d nota(s) de R$ %d",array[7],newArray[7] );
        }
    }
    return 0;
}
