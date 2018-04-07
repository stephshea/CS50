#include <stdio.h>
int main()
{
   //If checking on the value of a single variable, it is better to use switch statement than if else
double num, sum = 0;

do
{
  printf("number? ");
  scanf("%lf", &num);
  sum += num;
}
while(num != 0.0);

printf("sum = %.2lf \n", sum);

  return 0;
}