#include<stdio.h>
#include<string.h>
# define max 50
void main()
{
    char s[max],a[max];
    int i,k,m,flag=0;
    printf("Enter a string : ");
    gets(s);
    printf("Enter the substring want to search : ");
    gets(a);
    k=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==a[k])
        {
            if(k==0)
             m=i;
            k++;
            if(strlen(a)==k)
            {
             flag=1;break;
            }
        }
        else
        {
            k=0;
        }
    }
    if(flag==1)
    {
        printf("SubString found in index :%d ",m);
    }
    else
    {
        printf("SubString not found");
    }
}