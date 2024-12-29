#include<stdio.h>

int main()
{
    char c;
    int tab,line,blank;
    tab=0;
    line=0;
    blank=0;
    printf("Enter the program \n");

    c=' ';
    while(c!='*')
    {
        c=getchar();
        if(c='\t')
        {
            tab ++;
        }
        if(c=='\n')
        {
            line ++;
        }
        if(c==' ')
        {
            blank ++;
        }
    }
    printf("Tab=%d,Line=%d,Blank=%d",tab,line,blank);

    return 0;

}