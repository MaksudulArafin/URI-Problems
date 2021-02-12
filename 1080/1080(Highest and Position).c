#include<stdio.h>

int main()
{
    int ar[100],x,i,j,pos=0;

    for(i=0; i<100; i++)
    {
        scanf("%d\n",&ar[i]);
    }

    x=ar[0];
    pos=0;
    for(i=0; i<100; i++)
    {
        if(x<ar[i])
        {
            x=ar[i];
            pos=i+1;
         }
    }
    printf("%d\n",x);
    printf("%d\n",pos);
    return 0;
}
