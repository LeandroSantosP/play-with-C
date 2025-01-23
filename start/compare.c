#include <cs50.h>
#include <stdio.h>
// time 1:14:04
int main(void)
{
    int xnumber = get_int("type X number: ");
    int ynumber = get_int("type Y number: ");

    if (xnumber < ynumber)
    {
        printf("X is less then Y\n");
    }
    else if (xnumber > ynumber)
    {
        printf("Y is less then X\n");
    }
    else
    {
        printf("Y are equal to X\n");
    }
    printf("X = %i, y = %i\n", xnumber, ynumber);
}
