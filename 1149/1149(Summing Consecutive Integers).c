#include <stdio.h>
int main()
{
    int a,n,i=0,sum=0,b=1;
    scanf("%d",&a);

    for(i; ;i++)
    {
        scanf("%d",&n);
        if(n>0) break;
    }
    for(i=0;i<n;i++)
    {
        sum=sum+i+a;
    }
    printf("%d",sum);
    return 0;
}

