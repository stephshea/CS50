#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    eprintf("about to prompt for input\n");
    string s = get_string("Name: ");
    printf("output: \n");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c %i\n", s[i], (int) s[i] );
        // %c is character itself; %i integer; make char and int

  }

}

//debug50 ./string0