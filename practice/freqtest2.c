#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


int main()
{

string note = "F3";

char letter = note[0];
char octave;
char accidental;
float octf;
printf("letter %c\n", letter);

if (strlen(note)  == 3)
{
octave = atoi(&note[2]);
}

else
{
    octave = atoi(&note[1]);
}
printf("octave %i\n", octave);


octf = octave;
if (strlen(note)  == 3)
{
accidental = note[1];
}

else
{
    accidental = 0;
}
printf("accidental %c\n", accidental);

float frequency = 0.0;
float base;

float powerof = (1.0/12.0);
printf("powerof %f\n", powerof);
// float powwow= (pow(2, (powerof)));

if (letter == 'C')
{
    base = 16.35 * (pow(2, octave)) + .01;
    printf("base %.f\n", base);
}

else if (letter == 'D')
{
    base = 18.35 * (pow(2, octave)) + .03;
    printf("basef %.f\n", base);
}

else if (letter == 'E')
{
    base = 20.60 * (pow(2, octave)) + .04;
    printf("base %.f\n", base);
}

else if (letter == 'F')
{
    base = 21.83 * (pow(2, octave)) - .1;
    printf("base %.f\n", base);
}

else if (letter == 'G')
{
    base = 24.50 * (pow(2, octave));
    printf("base %.f\n", base);
}

else if (letter == 'A')
{
    base = (27.50 * (pow(2, octave)));
    printf("base %.f\n", base);
}

else if (letter == 'B')
{
    base = 30.87 * (pow(2, octave));
    printf("base %.f\n", base);
}
else
{
    printf("need another letter");
}

if (accidental == 0)
{
    frequency = base;
}

else if (accidental == '#')
{
    frequency = base * powerof;
}

else if (accidental == 'b')
{
    frequency = base / powerof;
}

printf("frequency %f\n", round(frequency));
return frequency;

// //add round
// printf("freq %f\n", frequency);
}