#include<stdio.h>

int main()
{
    int X,i;

    for(i=0;  ;i++)
    {
        scanf("%d",&X);
        if(X == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else if(X != 2002)
        {
            printf("Senha Invalida\n");
        }
    }
    return 0;
}
