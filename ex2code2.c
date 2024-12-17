#include<stdio.h>
int main()
{
    int num,days,months,years;
    int n;

        printf("Enter number of days:");
        scanf("%d",&num);

            years=num/365;
            n=num%365;
                months=n/30;
                    days=n%30;

                        printf("%d years %d months %d days\n",years,months,days);

                        return 0;

}