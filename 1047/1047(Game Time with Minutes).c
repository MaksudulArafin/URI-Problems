
#include<stdio.h>
void compare(int x, int y, int a, int b, int c);


int main()
{
    int A,B,C,D,x,y,a,b,c;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    x=A*60+B;
    y=C*60+D;
    compare(x,y,a,b,c);

    return 0;
}
void compare(int x, int y, int a, int b, int c)
{
    if(x>y)
    {
        a=24*60-(x-y);
        b=a/60;
        c=a%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",b,c);
    }

    else if(y>x)
    {
        int a=(y-x);
        b=a/60;
        c=a%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",b,c);
    }
    else
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
}
