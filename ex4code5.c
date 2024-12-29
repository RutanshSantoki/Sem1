//program to check if no is prime or not 

#include<stdio.h>
int main()
{
    int h,i,count=0;
    printf("Enter the number: ");
    scanf("%d",&h);

    for(i=2;i<=h;i++)
    {
        if(h%2==0)
        {
                count ++;
        }
    }
    if(count==0)
    {
        printf("%d is a prime number,h");

    }
    else
    {
        printf("%d is not a prime number",h);

    }
    return 0;
}
