#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


int main()
{
string note = "A5";
char letter = note[0];
char octave;
printf("letter %c\n", letter);
if (strlen(note)  == 3)
{
octave = note[2];
}

else
{
    octave = note[1];
}
printf("octave %c\n", octave);

int base = 440;
float powerof = (3.0/12.0);
printf("powerof %f\n", powerof);
float powwow= (pow(2, (powerof)));
int frequency = base * powwow;
printf("freq %i\n", frequency);
}