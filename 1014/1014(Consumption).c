#include<stdio.h>
float Consumption();

int main()
{
    Consumption();

    return 0;
}

float Consumption()
{
    int total_distance; float spent_fuel_total,avarager_consumtion;
    scanf("%d %f",&total_distance,&spent_fuel_total);
    avarager_consumtion=total_distance/spent_fuel_total;
    printf("%.3f km/l\n",avarager_consumtion);

}
