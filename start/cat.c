#include <cs50.h>
#include <stdio.h>

void meow(int n);
int get_positive_value(void);

int main(void)
{
	int n = get_positive_value();
	meow(n);
}

int get_positive_value(void)
{
	int n;
	do
	{
		n = get_int("Number: (The number must be positive!): ");
	} while (n < 0);
	return n;
}

void meow(int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("meow\n");
	}
}