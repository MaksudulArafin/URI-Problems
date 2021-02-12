#include<stdio.h>


int main()
{
    double z=0,x,media;
    int i,y=0;

    for(i=0; ;i++)
    {
        scanf("%lf",&x);
        if(x<0 || x>10)
        {
               printf("nota invalida\n");
        }
        else
        {
            z += (double)x;
            media = z/2.00;
            y++;
            if(y==2)
                break;
        }
    }
        printf("media = %.2lf\n",media);

    return 0;
}
