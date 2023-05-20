#include <stdio.h>
#include<math.h>

int main()
{
    int a[100][100],i,j,r,c,sym=1;
    printf("Enter the row column: ");
    scanf("%d%d",&r,&c);
    printf("Enter: ");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d",&a[i][j]);

    }
    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    printf("%d ",a[i][j]);
    printf("\n");
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            if(a[i][j]!=a[j][i])
                sym=0;
    }

if(sym==1)
        printf("matrix is symmetric");
else
    printf("matrix is not symmetric");
return 0;

}
