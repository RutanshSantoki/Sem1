#include<stdio.h>

int main()
{
    int num,hrs,sec,min,n;
    printf("Enter number of seconds :");
    scanf("%d",&num);

    hrs=num/3600;
    n=num%3600;
    min=n/60;
    sec=n%60;

        printf("%d hours %d min %d seconds\n",hrs,min,sec);

        return 0;
}