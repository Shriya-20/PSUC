
#include<stdio.h>
int reversed();
int main()
{
    int a[10][10],m,n,i,j,t,k;
    printf("ENter dimesnions of array \n");
    scanf("%d%d",&m,&n);
    printf("ENter elements\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Number of times to reverse \n");
    scanf("%d",&t);
    for(k=0;k<t;k++){
    for(i=0;i<m;i++)
    {   printf("%d",n);
        a[i][n]=a[i][0];
        for(j=0;j<n;j++)
        {
           a[i][j]=a[i][j+1];
        }
    }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
