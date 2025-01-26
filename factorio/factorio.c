#include <cs50.h>
#include <stdio.h>

int f(int i);

int main(void)
{
   int n;
   do
   {
      n = get_int("NUmber: ");
   } while (n < 0);
   int result = f(n);
   printf("The factorio of %i is %i\n", n, result);
   return 0;
}

int f(int n)
{
   if (n == 0)
   {
      return 1;
   }
   return n * f(n - 1); 
}