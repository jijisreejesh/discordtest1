#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch[50],p[25],d[25];
    int i=0,flag=0;
    printf("Enter the first string : ");
    gets(ch);
    printf("Enter the second string : ");
    gets(p);
    while(ch[i]!='\0')
    {
        if(ch[i]==p[i])
        {
            flag=1;
        }
        else
        {
            flag=0;break;
        }
        i++;
    }
    if(flag==1)
    printf("Strings are equal");
    else
    printf("Strings are not equal");
}