#include<stdio.h>

int main()
{

    char str[100];
    int i;

    printf("Enter sentence: ");
    gets(str);


    for(i = 0; str[i] != '\0'; i++)
    {
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
           str[i]=*(str+i+1);
    }


    for(i = 0; str[i] != '\0'; i++)
    {printf("%c",str[i]);

    }
    return 0;
}
