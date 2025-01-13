#include<stdio.h>

int main()
{
    int h,i,fact=1;
    printf("Enter the numbers to find factorial\t");
    scanf("%d",&h);

    for(i=2;i<=h;i++)//	for(i=2; i<=h; i++): A loop starts from 2 and goes up to the entered number h.
    {
        fact=fact*i;//•	fact = fact * i;: Multiplies the current value of fact by i.
    }
    printf("Factorial is %d\n",fact);
}