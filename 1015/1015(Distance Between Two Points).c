#include<stdio.h>
#include<math.h>
double point();
int main(double distance)
{
    distance=point();
    printf("%.4f\n",distance);
    return 0;
}

double point()
{
    double distance,x1,y1,x2,y2;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    return distance;
}
