#include<stdio.h>

int main()
{
    double ar[100]={};
    double x,a,b,c,d,e,f;
    int sum=0,i;
    for(i=0; i<6; i++)
    {
        scanf("%lf",&ar[i]);
        if(ar[i]>0)
        {
           sum++;
        }
    }
    a=ar[0];b=ar[1];c=ar[2];d=ar[3];e=ar[4];f=ar[5];
    if(a<0) a=0;if(b<0) b=0;if(c<0) c=0;if(d<0) d=0;if(e<0) e=0;if(f<0) f=0;
    x=(a+b+c+d+e+f)/sum;
    printf("%d valores positivos\n",sum);
    printf("%.1lf\n",x);

    return 0;
}
