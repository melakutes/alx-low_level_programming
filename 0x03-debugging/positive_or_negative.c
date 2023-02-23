#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *Description: 'the program to check the number is positive , negetive or zero'
 *Return: Always 0 (Success)
*/

int main(void)
{
        int n;

	srand(time(0));
        /* your code goes there */
        n = 0;
        if (n > 0)
                printf("%d is positive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else
                printf("%d is negative\n", n);
        return (0);
}
