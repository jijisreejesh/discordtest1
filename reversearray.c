#include<stdio.h>
void main()
{
    int i,n,a[25],j,temp;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    printf("Reverse array : ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}