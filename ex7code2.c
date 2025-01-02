#include<stdio.h>
void amount(float,float,int);

int main()
{
    int n;
    float p,r;

    printf("Enter principal amount:");
    scanf("%f",&p);

    printf("Enter rate of interest:");
    scanf("%f",&r);

    printf("Enter time period:");
    scanf("%d",&n);

    amount(p,r,n);

    return 0;
}

void amount(float p,float r,int n);
  {
    float total_amount;
    int y=1;
    total_amount=p;

    while(y<=n)
    {
        total_amount=total_amount(1+r);
        y++;
    }
return 0;
}