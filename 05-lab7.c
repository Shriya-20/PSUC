#include<stdio.h>

#include<string.h>
int main()
{
   char str[100], word[20];
   int i, j, ls, lw, temp, chk=0,m,k=0,n;
   printf("Enter the String: ");
   gets(str);
fflush(stdin);

   printf("Enter a Word: ");
   gets(word);

//ignore k if u want to delete all occurences of substring

   for(n=0;word[n]!='\0';n++)
        lw=n+1;
        printf("%d   ",lw);

    for(i=0;str[i]!='\0';i++)
        ls=i+1;
        printf("%d  ",ls);

   for(i=0; str[i]!='\0'; i++)

   {
      temp = i;

      for(j=0; j<lw; j++)
      {
         if(str[i]==word[j])
            i++;

      }
      chk = i-temp;

      if(chk==lw)
      {
        if(k!=0)
        {

         i = temp;
         for(j=i; j<(ls-lw); j++)
            str[j] = str[j+lw];
         ls = ls-lw;
         str[j]='\0';
        }
        k++;

      }
   }
   printf("\nNew String = %s", str);

   return 0;
}
