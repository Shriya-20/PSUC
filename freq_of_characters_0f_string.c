#include<stdio.h>

int main()
{

    char str[100];
    int i;
    int freq[256] = {0};
    printf("Enter string: ");
    gets(str);


    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;//note that here str[i] stores the letter's ascii value. i.e in 1st iteration, str[i]=112..freq[112]=freq[110]+1 each time it finds 112
        printf("%d  ",str[i]);
    }


    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            printf("\nThe frequency of %c is %d\n", i, freq[i]);
        }
    }
    return 0;
}
