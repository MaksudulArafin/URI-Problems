#include<stdio.h>

int main()
{
    int array[7]={100,50,20,10,5,2,1};
    int i,j,N;int newArray[7];
    scanf("%d",&N);
    printf("%d\n",N);
    if(0<N<1000000)
    {
        for(i = 0 ; i < 7 ; i++)
        {
            newArray[i]=N/array[i];
            N=N%array[i];
        }
        for(j = 0 ; j < 7 ; j++)
        {
            printf("%d nota(s) de R$ %d,00 \n",newArray[j],array[j]);
        }
    }
    return 0;
}
