#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
//main takes no input by default; returns 0 default
{

    eprintf("about to prompt for input\n");
    string s = get_string("Name: ");
    int n = 0;
    while(s[n] != '\0')
    //use single quotes for single chars and double for multi
    {
        n++;
    }
   printf("%i\n");
}
//     printf("output: \n");
//     for (int i = 0; i < strlen(s); i++)
//     {
//         printf("%c %i\n", s[i], (int) s[i] );
//         // %c is character itself; %i integer; make char and int for charCode

//   }

// }

//debug50 ./strlen