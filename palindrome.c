#include <stdio.h>
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
 rev=rev*10+dig;
 n=n/10;
 }
 printf("%d",rev);
 if (rev==num)
    printf(" is a palindrome");
else
    printf(" is not a palindrome");
 return 0;
}
