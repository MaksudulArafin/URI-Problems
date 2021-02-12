#include<stdio.h>
int main()
{
    int x,z,i,sum=0,h=0;
    scanf("%d%d",&x,&z);

    for(i=0; ;i++)
    {
        if(x<z)
        {
            break;
        }
        scanf("%d",&z);
    }
    for(i=x; sum<z; i++)
    {
        sum=sum+i;
        h++;
    }
    printf("%d\n",h);
    return 0;
}
