#include <cs50.h>
#include <stdio.h>

int stuff()
{
        printf("Hello there\n");
        return 2;
}
int main(void)
//int main needed for exectutable file - void only used by compiler
//main only function that will auto return the function at the end
{
    printf("Hello\n");
    int integer = 5 + 8;
    //101 + 1000 = 1101
    float flt = 5.3 + 4.83;
    printf("this is my float: %.20f\n", flt);

    printf("this is my number: %i\n", integer);
}