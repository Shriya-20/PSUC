//Write a function Fact to find the factorial of a given number. Using this function,
//compute NCR in the main function.
#include<stdio.h>
int Fact(int);

int main()
{
    int n,r,ncr;
    printf("Enter the number: ");
    scanf("%d",&n);
    //printf("Factorial of %d is %d\n",n,Fact(n));
    printf("Enter the r value: ");
    scanf("%d",&r);
    ncr=Fact(n)/(Fact(n-r)*Fact(r));
    printf("NCR value: %d",ncr);

}

int Fact(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
        fact=fact*i;
    return fact;
}
