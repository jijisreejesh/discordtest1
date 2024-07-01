#include<stdio.h>
#include<string.h>
# define max 50
void main()
{
  char s[max],d[max];
  int i,j,length,k,m;
  printf("Enter a string : ");
  gets(s);
  j=0;
  length=strlen(s);
  for(j=0;j<length;j++)
  {
  for(i=j;i<length;i++)
  {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='U' || s[i]=='O' )
            { 
              s[i]='0';
            
            }
  }
  }
  j=0;
  for(i=0;i<length;i++)
  {
    if(s[i]!='0')
    {
        d[j]=s[i];
        j++;
    }
  }
     printf("After vowels removed string is : %s",d);

} 
