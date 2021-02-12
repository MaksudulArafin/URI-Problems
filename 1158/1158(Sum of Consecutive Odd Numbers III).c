#include<stdio.h>

int main()
{
    int i,j,n,x,y,sum=0,z;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&x,&y);
        z=0;sum=0;
        for(j=x; ;j++)
        {
            if(j%2 != 0)
            {
                sum+=j;
                z++;
                if(y == z)
                {
                    break;
                }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}

