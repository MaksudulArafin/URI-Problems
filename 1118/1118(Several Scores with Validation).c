#include<stdio.h>


int A()
{
    double a,b=0,c;
    int i,y=0;
    for(i=0; ; i++)
    {
        scanf("%lf",&a);
        if(a>10 || a<0)
        {
            printf("nota invalida\n");
        }
        else
        {
            b += (double)a;
            y++;
            c = b/y;

            if(y==2)
            {
                break;
            }
        }
    }
        printf("media = %.2lf\n",c);
        printf("novo calculo (1-sim 2-nao)\n");
    return 0;
}

int B()
{
    int x,j;
    for(j=0; ;j++)
    {
        scanf("%d",&x);
        if(x == 2)
        {
           break;
        }
        else if(x == 1)
        {
            A();
        }
        else if(x != 1 || x != 2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            B();
            break;
        }
    }
    return 0;
}

int main()
{
    A();
    B();
    return 0;
}
