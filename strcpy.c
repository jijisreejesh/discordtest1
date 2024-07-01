#include<stdio.h>
void main()
{
    char ch[25],p[25];
    int i=0;
    printf("Enter the string : ");
    gets(ch);
    while(ch[i]!='\0')
    {
        p[i]=ch[i];
        i++;
    }
    printf("String2  : %s",p);
}

