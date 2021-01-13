#include<stdio.h>
int Event();
int Event1();

int main()
{
    int a,b,c,d,e,f,z,x,y;
    x=Event();
    y=Event1();
    z=y-x;
    a=z/60;
    b=z%60;
    c=a/60;
    d=a%60;
    e=c/24;
    f=c%24;
    printf("%d dia(s)\n",e);
    printf("%d hora(s)\n",f);
    printf("%d minuto(s)\n",d);
    printf("%d segundo(s)\n",b);
    return 0;
}

int Event()
{
    int W,X,Y,Z;
    char ar[4],ar1[2],ar2[2];
    scanf("%s",ar);
    scanf("%d  %d %s %d %s %d",&W,&X,&ar1,&Y,&ar2,&Z);
    int x=(((W*24+X)*60+Y)*60+Z);
    return x;
}
int Event1()
{
    int A,B,C,D;
    char ar[4],ar1[2],ar2[2];
    scanf("%s",ar);
    scanf("%d  %d %s %d %s %d",&A,&B,&ar1,&C,&ar2,&D);
    int y=(((A*24+B)*60+C)*60+D);
    return y;
}
