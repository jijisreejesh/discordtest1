#include<stdio.h>
# define max 50
void main()
{
    int n,a[max],b[max],i,x,j;
    printf("Enter the limit :");
    scanf("%d",&n);//5
     printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//3 6 8 2 5
    }
    printf("Enter the postion where we want to rotate : ");
    scanf("%d",&x);//2
    for ( i = 0; i < x; i++)
    {
       b[i]=a[i];//3 6
    }
    printf("Array after rotate to left : ");
    j=x;//2
    for(i=0;i<n-x;i++)//0<3  1<3      2<3
    {
        a[i]=a[j];  //a[0]=8  a[1]=2  a[2]=5
        j++;       //3        4       5
        printf("%d ",a[i]);
    }
    j=0;
    for(i=n-x;i<n;i++)
    {
        a[i]=b[j];
        j++;
        printf("%d ",a[i]);
    }
}