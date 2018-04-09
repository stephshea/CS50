#include <stdio.h>
#include <math.h>

int main(void)
{

   int n, t, sum =0, remainder;

   printf("input an integer\n");
   scanf("%d", &n);

   t = n;
   while (t != 0)
   {
    remainder = t % 10;
    sum = sum + remainder;
    t = t/10;
    }
printf("sum of digits of %d = %d\n", n, sum);
return 0;
}