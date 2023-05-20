#include<stdio.h>
#include <math.h>
int main()
{


int n, f = 0, s = 1;
    printf("Input N = ");
    scanf("%d", &n);

    printf("Fibonacci Prime List: ");

    for (int t = f + s; t <= n; t = f + s)
    {
        f = s;
        s = t;

        int prime = 1; // assume it's prime until proven otherwise

        for (int i = 2; i*i <= t; i++)
        {
            if (t % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
        {
            printf("%d   ", t);
        }

    }


    return 0;
}

/* using recursion
#include <stdio.h>
int fib(int n)
{
    if((n==0)||(n==1))
        return n;
    else
        return fib(n-1)+fib(n-2);
}
int main()
{   int k, i ;
    printf("enter n: ");
    scanf("%d",&k);

    for (i=0;i<k;i++)
        printf("%d   ",fib(i));


    return 0;
}
*/
