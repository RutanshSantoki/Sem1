#include<stdio.h>

void printline(void);

 int main()
{
    printline();
}

void printline(void)
{
    int i;
    for(i=0;i<81;i++)
    {
        printf("==");
    }
} 