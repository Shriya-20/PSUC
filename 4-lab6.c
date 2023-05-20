#include<stdio.h>
#include<string.h>
int main()
{
    char str[100][100],temp[100];
    int n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter names:  ");
    for(int i=0;i<n;i++)
        gets(str[i]);
    for(i=0;i<n;i++)
    puts(str[i]);

}
