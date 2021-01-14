#include<stdio.h>

int main()
{
    int sum3=0,x,i;
    for(i=0; i<5; i++)
    {
        int x;
        scanf("%d",&x);
        if(x%2 == 0)
        {
            sum3=sum3+1;
        }
    }
    printf("%d valores pares\n",sum3);


    return 0;
}
