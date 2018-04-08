#include <stdio.h>
#include <cs50.h>

int main(void)
{
 int n;
 do
 {
     n = get_int("number: ");
 }
 while(n < 0 || n > 23);


for (int i = 1; i <= n; i++)
{

 for(int j = 0; j<n+1; j++)
 {
 printf(" ");

for (int k = 0; k<j+1; k++)
{
    printf("#");

}
}
printf("\n");
}

}