// Helper functions for music
//octaves start at C
//figure out what string contains; use A4 as baseline to move up to down

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int duration(string fraction);
string fraction = "1/4";

int main(void)
{
int duration()
}

// Converts a fraction formatted as X/Y to eighths
int duration(fraction)
{


    int nnum = atoi(&fraction[0]);
    int denom = atoi(&fraction[2]);
    int beats = ((8/denom) * nnum);
    printf("beats: %d", beats);
    return beats;
}
