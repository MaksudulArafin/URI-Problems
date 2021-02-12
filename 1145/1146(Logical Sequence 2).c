#include <stdio.h>
int main()
{
    int i,x,y,b=0,c=0;
    scanf("%d%d",&x,&y);
    for(i=1; i<=y; i++)
    {
        b++;
        printf("%d",i);
        if(b==x || y==b)
        {
            printf("\n");
            b=0;
        }
        else
        {
            printf(" ");
        }
    }
    return 0;
}
