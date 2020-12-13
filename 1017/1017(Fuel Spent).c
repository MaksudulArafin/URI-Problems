#include<stdio.h>
int main()
{
    int avarage_fuel=12.0,time,avarage_speed;
    float need_fuel;
    scanf("%d%d",&time,&avarage_speed);
    need_fuel=(time*(float)avarage_speed)/avarage_fuel;
    printf("%.3f\n",need_fuel);
    return 0;

}
