#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if(argc !=2)
    {
        printf("usage: strings \"phrase\"\n");
        exit(1); //instead of return 1
    }
    // printf("%i\n", argc);
    // int length = strlen(argv[1]);
    // printf("%i\n", length, argv[0]);

    for(int i = 0, length = strlen(argv[1]); i<length; i++) // i and length are both ints so can be declared together
    {
        if(argv[1][i] != ' ')
        printf("Ascii at pos %i: %i\n", i, argv[1][i] - 'a');
        printf("Ascii at pos %i: %i\n", i, (argv[1][i] - 'a');
    }
}