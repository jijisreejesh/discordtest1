#include<stdio.h>
void main()
{
    int i,n,a[25],s=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("Sum of the numbers : %d",s);
}