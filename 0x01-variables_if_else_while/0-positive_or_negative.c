#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - entry point for this program
 *
 * Description: This program will assign a random number to the variable n
 *
 * Return: 0 if exited properly
 */

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
        printf("%d is positive\n", n);
    else if (n == 0)
        printf("%d is zero\n", n);
    else if (n < 0)
        printf("%d is negative\n", n);
    return (0);
}
