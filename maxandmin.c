#include<stdio.h>
void main()
{
    int i,n,max,min,j,a[25],s=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    scanf("%d",&a[0]);
    max=a[0];min=a[0];
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
         max=a[i];
         if(min>a[i])
         min=a[i];
    }
    printf("Largest element : %d\nSmallest element : %d",max,min);
    
}