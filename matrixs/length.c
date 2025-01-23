#include <cs50.h>
#include <stdio.h>
#include <string.h>

void main(void)
{
	string name = get_string("What's your name? ");
	int n = 0;
	while (name[n] != '\0') // end of the string.
	{
		n++;
	}
	printf("%i\n", n);
	printf("%i\n", (int)strlen(name));
}