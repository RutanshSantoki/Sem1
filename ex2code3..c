#include<stdio.h>

int main()
{
    int num,hrs,min,sec;
    int n;

    printf("Enternumbers of seconds:");
    scanf("%d",&num);

    hrs=num/3600;
    n=num%3600;
    hrs=n/60;
    sec=n%60;

    printf("%d Hours %d minutes %d seconds\n",hrs,min,sec);

    return 0;

}