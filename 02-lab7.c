#include <stdio.h>
#include <math.h>

int main()
{
    int a[100][100],i,j,r,c,trace=0,sum=0;
    float norm;
    printf("Enter the row column: ");
    scanf("%d%d",&r,&c);

    //inputting matrix
    printf("Enter: ");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d",&a[i][j]);
    //displaying matrix
    }
    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    printf("%d ",a[i][j]);
    printf("\n");
    }


    for(i=0; i<r; i++)
    {   trace=trace+a[i][i];
        for(j=0; j<c; j++)
            sum=sum+(a[i][j]*a[i][j]);

    }
    norm=(sum);

    printf("Trace is: %d",trace);
    printf("Norm is: %f",norm);

    return 0;
}

