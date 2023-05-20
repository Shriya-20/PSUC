#include <stdio.h>
int main()
{
    int n,k,prod,i,j;
    printf("Enter the value of n and k");
    scanf("%d %d",&n,&k);
    for (i=1; i<=k; i++)
    {
        for (j=1; j<=n; j++)
        {
            prod = i * j;
            printf("%d * %d = %d\t", j, i, prod);
        }
        printf("\n");
    }
    return 0;
}
