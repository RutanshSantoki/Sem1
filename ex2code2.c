#include<stdio.h>

int main()
{
    int num,day,month,year;
    int n;

    printf("Enter number of days :");
    scanf("%d",&num);

    year=num/365;
    n=num%365;
    month=n/30;
    day=n%30;

    printf("%d Years %d Months %d Days\n",year,month,day);

    return 0;
}