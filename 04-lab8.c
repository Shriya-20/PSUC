
/*Write a function CornerSum which takes as a parameter, no. of rows and no. of
columns of a matrix and returns the sum of the elements in the four corners of the
matrix. Write a main function to test the function.*/
#include<stdio.h>
int CornerSum(int A[50][50],int r,int c)
{
    int sum=0;

    sum=A[0][0]+A[0][c-1]+A[r-1][0]+A[r-1][c-1];
    return sum;
}

int main()
{   int a[50][50],m,n,i,j;
    printf("enter dimension for matrix \n");
           scanf("%d %d", &m, &n);
    printf("Enter Matrix:\n ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    }
    printf("Corner Sum Is: %d",CornerSum(a,m,n));
}

