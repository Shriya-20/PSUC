#include <stdio.h>
#include <string.h>

int lower(char* a)
{   int i=0;
    for(i=0;*(a+i)!='\0';i++)
    {
        if ((*(a+i)>=65)&&(*(a+i)<=90))
            *(a+i)=*(a+i)+32;
    }
    return a;

}
int anagram(char a1[],char a2[])
{   int i,j,n,freq1[26]={0},freq2[26]={0},an=1;
    if(strlen(a1)!=strlen(a2))
        return 0;

    for(i=0;i<=a1[i]!='\0';i++)
    {
        freq1[a1[i-'a']]++;
        freq2[a2[i-'a']]++;

    }
    for(i=0;i<26;i++)
    {   an=1;
        if(freq1[i]!=freq2[i])
            {an=0;
            break;
            }

    }
    if(an)
        return 1;
    else
        return 0;


}


int print(char s[100][100],int n)
{   int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (anagram(s[i],s[j]))
                printf("   %s   %s  \n  ",s[i],s[j]);

        }
    }
}




int main()
{
    char s[100][100],c[100],ch;
    int i,j,n;

    printf("number of str: ");
    scanf("%d",&n);
    printf("enter: \n");

    for(i=0;i<n;i++)
    {
        scanf("%s",&s[i]);
    }
    /*
    for(i=0;i<n;i++)
    {
       printf("%s   ",lower(&s[i]));
    }
    */
    print(s,n);




    return 0;
}
