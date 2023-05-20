#include <stdio.h>
int main()
{
    int num, i, j, k = 1;
    printf( "Enter a number to define the rows in Floyd's triangle: ");
    scanf( "%d", &num);

// use nested for loop
// outer for loop define the rows and check rows condition
    for (i = 1; i <= num; i++)
    {
// inner loop check j should be less than equal to 1 and print the data.
        for (j = 1; j <= i; j++)
        {
            printf("%d\t", k++); // print the number
        }
        printf( "\n");
    }
    return 0;
}


