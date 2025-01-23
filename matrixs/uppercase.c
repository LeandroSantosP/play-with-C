#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main(void)
{
	string s = get_string("Before: ");
	printf("After:  ");
	for (int i = 0, length = strlen(s); i < length; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			printf("%c", toupper(s[i]));
		}
		else
		{
			printf("%c", s[i]);
		}
	}
	printf("\n");
}