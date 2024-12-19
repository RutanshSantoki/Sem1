#include<stdio.h>

int main()
{
    int i,j,s,h;
    printf("Value of h: ");
    scanf("%d",&h);

    for(i=1;i<=h;i++)
    {
        for(s=h-1;s>=i;s--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

}