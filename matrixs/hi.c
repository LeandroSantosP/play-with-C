#include <cs50.h>
#include <stdio.h>

void main(void)
{
	string words[2] = {"HI!", "BEY!"};

	// Both the same!
	printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
}