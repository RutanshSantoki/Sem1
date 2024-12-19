#include<stdio.h>

int main()
{
    int h,i,fact=1;
    printf("Enter the numbers to find factorial");
    scanf("%d",&h);

    for(i=2;i<=h;i++)
    {
        fact=fact*i;
    }
    printf("Factorial is %d\n",fact);
}