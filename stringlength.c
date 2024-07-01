#include<stdio.h>
void main()
{
    char ch[25];
    int i=0,l=0;
    printf("Enter the string : ");
    gets(ch);
    while(ch[i]!='\0')
    {
        l++;i++;
    }
    printf("Length of string : %d",l);
}