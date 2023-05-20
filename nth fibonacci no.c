#include<stdio.h>
int main()
{   int i,n,t,f,s,prime=1;
    printf("Enter n");
    scanf("%d",&n);
    f=0;
    s=1;


    for(i=0;i<n-2;i++)
    {


       t=f+s;
        f=s;
        s=t;
    }
    printf("%d",t);
}
