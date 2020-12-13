#include<stdio.h>
int array[7],i, newA rray[7],N;

int main()
{
    int array[7]={100.00,50.00,20.00,10.00,5.00,2.00,1.00};
    scanf("%d",&N);
    if(0<N<1000000)
    {
        for(i=0;i<7;i++)
        {
            printf("%d\n",(N/array[i]));
        }
    }
}
