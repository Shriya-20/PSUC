#include<stdio.h>
int main()
{
    char str[100];
    int count=1,i=0;
    printf("Enter your string:  ");

    gets(str);
    printf("\n");
    puts(str);

    while (str[i]!='\0')
    {
        if (str[i]==' ' && str[i+1]!=' ')
            count++;
        i++;


    }
    printf("number of words are: %d",count);
}
