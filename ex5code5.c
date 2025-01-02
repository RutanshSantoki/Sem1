//insert element at particular index by user

#include<stdio.h>
int main()
{
    int a[100],i,n,ind,b,pas;
    printf("Enter Elements");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter element to insert");
    scanf("%d",&b);


    printf("Enter position of element");
    scanf("%d",&pas);

    for(i=n;i<n+1;i--)
    {
        a[i+1]=a[i];
        a[pas]=b;

        printf("New element:\n");
        for(i=0;i<n+1;i++)
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
    
    
    }