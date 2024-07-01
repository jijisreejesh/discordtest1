#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 50
void main()
{
    char ch[MAX],a[MAX];
    int i,j,flag=0;
    printf("Enter the first string : ");
    scanf("%s",ch);
    j=strlen(ch)-1;
    printf("Reverse : ");
    for(i=0;i<j;i++)
    {
        if(ch[i]!=ch[j])
        {
            flag=1;break;
        }
        j--;    
    }
    if(flag == 1)
     printf("\nGiven string is not palindrome");
     else
      printf("\nGiven string is palindrome");

}

