#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{

long long c, temp, digit, sum =0;
c = get_long_long("Credit Card Number: ");

printf("card number: %lld \n", c);
temp = c;


while(c > 0)
    {
       digit = c % 10;
       sum = sum + digit;
       c /=10;
    }

    printf("credit card: %lld\n", temp);
    printf("sum of digits %lld = %lld\n", temp, sum);

return 0;
}