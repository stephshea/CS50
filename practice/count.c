#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{

int count = 0;
// int a;
//  do
//  {
 long long c = get_long_long("Credit Card Number: ");
//  }
//  while (c.length < 16);

printf("card number: %lld \n", c);

while(c != 0)
    {
        // n = n/10
        c /= 10;
        // count +=c;
        ++count;
    }

    printf("Number of digits: %d", count);


// for(int i = 0; i<strlen(c); i++)
// {
// a =* i;
// printf("a, %i", a);
// }
return 0;
}