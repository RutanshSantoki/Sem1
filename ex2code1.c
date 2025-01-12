#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter temperature in Fahernheat :");
    scanf("%f",&F);

     C=(F-32)/1.8;
    printf("Temperature in celcius id %f\n",C);

    return 0;
}