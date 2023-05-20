#include<stdio.h>
int main()
{
    int a[100],i,j,pos,ele,n;
    printf("Enter the number of ele: ");
    scanf("%d",&n);
    printf("Enetr the ele: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the ele you want to insert and its position: ");
    scanf("%d %d",&ele,&pos);
    for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=ele;

    for(i=0;i<n+1;i++)
        printf("%d ",a[i]);
}
