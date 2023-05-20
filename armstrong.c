#include <stdio.h>
#include <math.h>

int main()
{
int num,n,rev,dig;
rev=0;
 printf("Enter a number");
 scanf("%d",&num);
 n=num;

 while(n>0)
 {
 dig=n%10;
 rev=pow(dig,3)+rev;
 n=n/10;
 }
 printf("%d",rev);
 if (rev==num)
    printf(" is armstrong");
else
    printf(" is not arm");
 return 0;
}
