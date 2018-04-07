#include <stdio.h>
int main()
{
   //If checking on the value of a single variable, it is better to use switch statement than if else
char operator;
double firstNum, secondNum;

printf("enter an operator: ");
scanf("%c", &operator);

printf("enter two operands: ");
scanf("%lf %lf", &firstNum, &secondNum);

switch(operator)
{
  case '+':
    printf("%.1lf + %.1lf = %.1lf \n", firstNum, secondNum, firstNum + secondNum);
    break;
  case '-':
    printf("%.1lf - %.1lf = %.1lf \n", firstNum, secondNum, firstNum - secondNum);
    break;
  case '*':
    printf("%.1lf * %.1lf = %.1lf \n", firstNum, secondNum, firstNum * secondNum);
    break;
  case '/':
    printf("%.1lf / %.1lf = %.1lf\n", firstNum, secondNum, firstNum / secondNum);
    break;
  default:
    printf("Error! operator is not correct \n");
}

  return 0;
}