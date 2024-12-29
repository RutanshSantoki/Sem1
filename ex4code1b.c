#include<stdio.h>

int main()
{
    int i,j,h;
    printf("Enter a value for h: ");
    scanf("%d",&h);

    for(i=1;i<=h;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
            return 0;
}
