#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
  string fraction = "2/4";
    int nnum = atoi(&fraction[0]);
    int denom = atoi(&fraction[2]);
    int notevalue = 8;
int beats = ((notevalue/denom) * nnum);
printf("beats: %d", beats);
return beats;
}
