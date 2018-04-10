#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    string s = "50";
    int i = atoi(s) + 10;
    printf("%d\n", i);
}