#include<stdio.h>
void main()
{
    int a[30],n,i,j,temp;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Numbers after sort : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}