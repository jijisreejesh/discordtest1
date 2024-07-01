#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char ch[50];
    int i,s=0;
    printf("Enter the first string : ");
    gets(ch);
    printf("Revrese of string is : ");
    for(i=strlen(ch)-1;i>=0;i--)
    {
        printf("%c",ch[i]);
    }
}