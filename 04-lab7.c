#include <stdio.h>
#include <math.h>

int main()
{
    int a[100][100],i,j,r,c,temp,n;
    float norm;
    printf("Enter the row column: ");
    scanf("%d%d",&r,&c);
    printf("Enter: ");
    //inputting matrix
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d",&a[i][j]);
    //displaying matrix
    }
    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    printf("%d\t",a[i][j]);
    printf("\n");
    }
    printf("\n");

    j=r-1;
    for(i=0; i<r; i++)
    {
        temp=a[i][i];
        a[i][i]=a[i][j];
        a[i][j]=temp;
            j--;

    //displaying matrix
    }
    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    printf("%d\t",a[i][j]);
    printf("\n");
    }
}
