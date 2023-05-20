#include<stdio.h>
#include<string.h>
int main()
{
    char str[50], substr[10];
    int k=0, i=0,j=0,diff=0,count=0,temp;

    printf("Enter a string: ");
    gets(str);
    fflush(stdin);
    printf("Enter substring: ");
    gets(substr);
    fflush(stdin);
    puts(str);

    puts(substr);

    for(i=0;i<strlen(str);i++)
    {
        temp=i;
        for(j=0;j<strlen(substr);j++)
        {
            if (str[i]==substr[j])
                i++;
        }


        diff=i-temp;

        if(diff==strlen(substr))
        {   k++;
            printf("  %d   ",temp);
        }



    }
    printf("The substring appears %d times",k);



}
