#include<stdio.h>

int main()
{
    int i,x,j=0,sum=0;

    for(i=0; ;i++)
    {
        scanf("%d",&x);
        if(x<0)
        {
            break;
        }
        j++;
        sum=sum+x;
    }
    double a=(double)sum/j;
    printf("%.2lf\n",a);
    return 0;
}
