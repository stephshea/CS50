#include <stdio.h>
int main()
{
   //If checking on the value of a single variable, it is better to use switch statement than if else
int num;
long long factorial;

printf("enter number: ");
scanf("%d", &num);

factorial = 1;

while (num > 0)
{
  factorial *= num;
  --num;
}
printf("factorial = %lld \n", factorial);

  return 0;
}