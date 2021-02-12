#include<stdio.h>

int main()
{
    int i,X,Y;

    if(X!=Y)
    {
        for(i=0; ;i++)
        {
            scanf("%d%d",&X,&Y);

            if(X == Y)
            {
                break;
            }
            else if(X>Y)
            {
                printf("Decrescente\n");
            }
            else if(Y>X)
            {
                printf("Crescente\n");
            }
        }
    }
    return 0;
}
