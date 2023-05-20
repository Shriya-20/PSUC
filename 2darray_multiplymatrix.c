
#include <stdio.h>

int main()
{
    int i, j, m, n, p, q,k;
    int A[10][10], B[10][10],C[10][10];
    printf("enter dimension for A \n");
           scanf("%d %d", &m, &n);
    printf("\n enter dimension for B\n");
            scanf("%d %d", &p, &q);
    if(n!=p)
    {
    printf("not multiplicable \n");
           exit(0);
    }
    //inputA
    printf("Enter A:\n ");

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d",&A[i][j]);

    }
    //inputB
    printf("Enter B:\n ");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
            scanf("%d",&B[i][j]);
    }

    //new matrix C
    for(i=0; i<m; i++)
    {
        for(j=0; j<q; j++)
        {
            C[i][j]=0;
            for(k=0; k<n; k++)//can take n or p since they are equal
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
        }
    }
    printf("\n The product matrix is \n");

    //DisplayC
    for(i=0; i<m; i++)
    {
        for(j=0; j<q; j++)
            {
                printf("%d\t", C[i][j]);
            }
        printf("\n");
    }


return 0;
}

