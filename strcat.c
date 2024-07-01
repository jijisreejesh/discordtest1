#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch[50],p[25];
    int i=0,s=0;
    printf("Enter the first string : ");
    gets(ch);
    printf("Enter the second string : ");
    gets(p);
    while(ch[i]!='\0')
    {
        i++;//1 2 3
    }
    while(p[s]!='\0')
    {
        ch[i]=p[s];
        i++;
        s++;
    }
    printf("String after concatination :%s",ch);
}