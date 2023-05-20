#include <stdio.h>
int main()
{
    int number1=0,prime,ccount=0,pcount=0,neither=0;
    do
    {
        printf("Enter number1 ");
        scanf("%d",&number1);
        int prime=1;

        for( int j=2; j<number1; j++ )
        {
            if( number1 % j == 0)
            {
                prime=0;
                ccount++;
                break;
            }

        }
        if ((number1==1)||(number1==0))
            neither++;
        else if (prime == 1)
            pcount++;
    }
    while(number1!=-1);
    printf("primecount: %d\n",pcount-1);
    printf("Compositecount: %d",ccount);
    return 0;
}

