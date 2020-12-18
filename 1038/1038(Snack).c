#include<stdio.h>


int main()
{
    int X,Y;
    float total;
    scanf("%d%d",&X,&Y);
    float array1[6]={0.00,4.00,4.50,5.00,2.00,1.50};
    total=(array1[X])*Y;
    printf("Total: R$ %.2f\n",total);
    return 0;
}
