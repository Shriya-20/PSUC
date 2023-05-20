#include<stdio.h>
int main()
{
    int a[100],i,j,pos,ele,n,found=0;
    printf("Enter the number of ele: ");
    scanf("%d",&n);
    printf("Enetr the ele: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the ele you want to delete: ");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
        if(a[i]==ele)
            pos=i;
            found=1;



    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }


    for(i=0;i<n-1;i++)
        printf("%d ",a[i]);
}

