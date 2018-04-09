#include <stdio.h>

int main()
{
    int n, firstDigit;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &n);
    firstDigit = n;
    /* Get the last digit */

    while (firstDigit >= 10)
    {
      firstDigit = firstDigit/10;

    }

    printf("first = %d", firstDigit);

    return 0;
}