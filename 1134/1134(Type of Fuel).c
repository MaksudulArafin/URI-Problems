#include<stdio.h>

int m()
{
    int i,a,b=0,c=0,d=0,e;

    for(i=0; ;i++)
    {
        scanf("%d",&a);
        if(a==1)
        {
            b++;

        }
        else if(a==2)
        {
            c++;

        }
        else if(a==3)
        {
            d++;

        }
        else if(a==4)
        {
            break;
        }
        else
        {
            continue;
        }

    }
            printf("Alcool: %d\n",b);
        printf("Gasolina: %d\n",c);
        printf("Diesel: %d\n",d);
    return 0;
}


int main()
{
    printf("MUITO OBRIGADO\n");

    m();
    return 0;
}
