//find out the sum and average of N numbers using array.

#include<stdio.h>

int main()
{
    int a[100],n,i;
    float sum=0,avg;

    printf("Enter the size of array :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum +=a[i];
    }

    printf("Sum=%f\n",sum);
    printf("average=%f\n",sum);

}