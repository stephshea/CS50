#include <cs50.h>
#include <stdio.h>

int main(void)
{

int num;
int countNeg = 0;
int countPos = 0;
printf("please give me 5 numbers, one at a time\n  First number: ");
for (int i = 0; i < 5; i++)
{
    num = get_int();

    if (num < 0)
    {
        printf("it's negative!\n");
        countNeg ++;
    }
    if (num >= 0)
    {
        printf("it's positive!\n");
        countPos ++;
    }
    if (i < 4)
       printf("\nEnter another number: ");
}
printf("Thanks, you gave me %d positives and %d negatives.\n", countPos,countNeg);

return 0;
}