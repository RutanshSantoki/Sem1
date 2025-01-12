#include<stdio.h>

struct product
{
    int id;
    char name[20];
    int price;
}
pro[3]

void main()
{
    int i,n;
    for(i=0;i<3;i++)
    {
        scanf("%d %s %d",&pro[i].id,&pro[i].name,&pro[i].price);
    }

    printf("Enter the ID number:");
    scanf("%d",&n);

    for(i=0;i<3;i++)
    {
        if(pro[i].id==h)
        {
            printf("Name and price is %s %d\n",pro[i].name,pro[i].price);
            break;
        }
        else{
            
        }
    }
}