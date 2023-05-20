#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{

    char str[100];
    int i, j, len = 0;


    printf("Enter a string : ");
     gets(str);



    len = strlen(str);


    for (i = 0; i < len; i++)
    {

        if (str[i]==' ')
        {
            // Deleting spaces.
            for (j = i; j < len; j++)
            {

                str[j] = str[j + 1];
            }
            i--;//cuz if its a vowel.it'll be deleted and the next element you have to check for is in that same position..hence subtract 1
            len--;
        }

    }
     str[len+1] = '\0';
   printf("After deleting the vowels, the string will be : %s", str);
   return 0;
}

