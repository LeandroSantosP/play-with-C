#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int SIZE = 5;

int main(void)
{
   int numbs[SIZE];
   int lenght = sizeof(numbs) / sizeof(numbs[0]);
   printf("%i\n", lenght);
   int n = 0;
   do
   {
      numbs[n] = get_int("Number: ");
      n++;
   } while (n < SIZE);

   for (int i = 0; i < lenght; i++)
   {
      if (i != 0)
      {
         numbs[i] = numbs[i] * numbs[i - 1];
      }
   }
   for (size_t i = 0; i < lenght; i++)
   {
      printf("Array: %i ", numbs[i]);
   }
   printf("\n");
}