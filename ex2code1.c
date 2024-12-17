#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter temperature in Celcuis :");
    scanf("%f",&C);

     F=C*1.8+32;
    printf("Temperature in ferenheat id %f\n",F);

    return 0;
}