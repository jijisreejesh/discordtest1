#include<stdio.h>
void main()
{
    int i,n,a[25],j,b[25],m,c[25],s;
    printf("Enter the limit of first array : ");
    scanf("%d",&m);
    printf("Enter the numbers of first array : ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    printf("Enter the limit of second array : ");
    scanf("%d",&n);
    printf("Enter the numbers of second array : ");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
        c[i]=b[j];
        i=i+1;
    }
    printf("Array after merge : ");
   for(i=0;i<m+n;i++)
   {
    printf("%d ",c[i]);
   }
}