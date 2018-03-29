#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    eprintf("about to prompt for input\n");
    string s = get_string("input: ");
    printf("output: \n");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c\n", s[i]);

  }

}

//debug50 ./string0